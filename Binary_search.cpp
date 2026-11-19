/*刚开始很纠结循环怎么写，比如do while
如何衔接每一次do具有普适性
以及循环的条件，这里我用的是区间长度
R-L最后一次判定，如果有的话，就是一个数
另一个难点是如何构造函数，做cs50的作业
经常感叹多个函数一环扣一环，接受什么参数
返回什么，用于下一个函数
以及是否要用引用，还是copy*/




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  check(const vector <int> &num,int L,int R,int ans);
int main ()
{
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> num(5,0);
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }

    cout<<"Which number do you want to find?"<<endl;
    int ans;
    cin>>ans;
    sort(num.begin(),num.end());
    int L=0;
    int R=4;

    while(R-L>=0)
    {
        int whh=check(num,L,R,ans);
         int mid=(L+R)/2;
        switch(whh)
        {
            case 1:
            cout<<"Find it "<<'\n';
            return 0;
            case 2:
            R=mid-1;
            break;
            case 3:
            L=mid+1;
            break;

        }
    }
    cout<<"There is no number you want."<<'\n';

    return 0;

    

}

int  check(const vector <int> &num,int L,int R,int ans)
{
    int mid=(L+R)/2;
   if(ans==num[mid])
   {
    return 1;
   }

   else if(ans<num[mid])
   {
    return 2;
   }
   
   else 
   {
    return 3;
   }

}