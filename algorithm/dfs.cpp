/*深度优先搜索
先找一条路，走到底，下一个位置只有选和不选
成功或者超出目标则返回到上一个选择找
这里的深度我觉得体现再不会回到最开始
而是先保持在一定深度，继续寻找
难点在于这个返回在程序中是这么体现的
函数吗，循环吗？*/


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void dps(int i,long long sum);
    int n;
    long long ans;
    vector<long long> num;
    long long cnts;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    cin>>n>>ans;
    num.resize(n);
    for(long long &x:num)
    {
        cin>>x;
    }
    dps(0,0);
    cout<<cnts;
    return 0;
}

void dps(int i,long long sum)
{
    if(i==n)
    {
        if(sum>ans) return ;
        if(sum==ans) 
        {
            cnts++;
          
        }
          return ;
    }
    dps(i+1,sum);
    dps(i+1,sum+num[i]);

}