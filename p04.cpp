/*数学感觉好难啊
已经到离散数学了，算题比赛==数学比赛
之前写过的一阶差分
动态规划，面对很多重复的小问题
把小问题答案记下来，避免无用功
我这里对每个值都加会使得mn超时
将每一个答案都各自加和
这里也是构造了一个和数列，或者说前缀和，即答案
而num上的都是差分，并且差分是有左右边界的
在l右边的都能加到v，r右边的都不能
实在妙啊*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,q;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    cin>>n>>q;
    vector<long long> num(n+2,0);
    
    while(q--)
    {
        int l,r,v;
        cin>>l>>r>>v;
        num[l]+=v,num[r+1]-=v;
    }
    vector<long long> sum(n+2,0);
    for(int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+num[i];
        cout<<sum[i];
        cout<<(i==n?'\n':' ');
    }
    return 0;
    
}