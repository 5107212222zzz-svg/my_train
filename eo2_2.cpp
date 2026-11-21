/*这道题依旧向量存数据，增大内存开销
最后输入
我发现了华点
真的要注意题目的形式了
先输入所有的lr，最后统一输出
感觉这就在一定程度上引导我存储lr
但是这里利用了cin和cout解除绑定，让cout的内容积攒在缓冲区
算是巧妙利用吧
刚开始熟悉了交互，都没注意到这么显而易见的事情*/


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,m;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    cin>>n>>m;
    vector<long long> sum(n+1,0);
    vector<pair<int,int>> pst(m);
 
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        sum[i]=sum[i-1]+x;
    }
   /* for(int i=0;i<m;i++)
    {
        cin>>pst[i].first>>pst[i].second;
    }
    for(int i=0;i<m;i++)
    {
        cout<<sum[pst[i].second]-sum[pst[i].first-1]<<'\n';
    }

    */
   while(m--)
   {
    int l,r;
    cin>>l>>r;
    cout<<sum[r]-sum[l-1]<<'\n';
   }
    return 0;
}
    int l,r;