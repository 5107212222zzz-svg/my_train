#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
using namespace std;
void affect(int x,int y);
int n,m;
vector<string> colume;//这是地图
vector<vector<int>> dot;//-1代表没来过，其他值代表步数
queue<pair<int,int>> q;//队列才是一个个点
vector<pair<int,int>> dxy={{-1,0},{1,0},{0,-1},{0,1}};
int main ()
{
   
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    cin>>n>>m;
    colume.resize(n);
    dot.assign(n,vector<int>(m,-1));

    for(string &row:colume)
    {
        cin>>row;
    }
    
    dot[0][0]=0;
    q.push({0,0});
    affect(0,0);
    return 0;
    //入队的前提条件
    /*第一，必须在矩阵里面
    第二，必须没到过
    第三检查是否为墙*/
    //反复将周围的入队可以用递归，递归不要返回值，全都用引用
    //我应该引用一个队列，传入点集合

}
void affect(int x,int y)
{
    if(q.empty())
    {
        cout<<dot[n-1][m-1];
        return ;
    }
    
    for(int i=0;i<4;i++)
    {
        int count=dot[x][y];
        int dx=dxy[i].first;
        int dy=dxy[i].second;
        x+=dx;
        y+=dy;
         if(x<0||x>n-1||y<0||y>m-1||dot[x][y]!=-1||colume[x][y]=='#')
            {
                continue;
            }
            q.pop();
            q.push({x,y});
            dot[x][y]=count+1;
            affect(x,y);
            
    
    }

}
