//依旧总是做一些多余的东西，比如说找到出现次数最多的数字
//我总是会想统计生成一个向量记录所有数据的数组，然后再排序
//实际上一个频次数组既可以用下标记录值，内容物记录频次
//特征是，输入的一串参数，本身是不确定的正整数
//这里把数组安排到全局，避免爆栈
//最妙的是这里的只有频次严格大于前者更新答案，注意 ！只需要一个答案
//天然具有输出较小者的特性
//而我的排序理论上可以输出最大次数的一系列数
//而且这里也没有排序，取值是O（1）
//但话又说过来，再复杂的操作中也学到了很多语法知识
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
int m=1;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
   cin>>n;
   vector<int> num(n);
    for(int &x:num)
    {
     cin>>x;
    }

    vector<pair<int,int>> ans(n,{0,0});
    sort(num.begin(),num.end());
    ans[0]={1,num[0]};
    int j=0;
   for(int i=1;i<n;i++)
   {
    if(num[i]>num[i-1])
    {
        j++;
        ans[j]={1,num[i]};
        continue;
    }
    ans[j].first++;
   }
   sort(ans.begin(),ans.end(),[](pair<int,int>a,pair<int,int> b) 
{
   if(a.first!=b.first) return a.first<b.first;
   return a.second>b.second;
}
);
   cout<<ans[n-1].second<<' '<<ans[n-1].first<<flush;
   return 0;
    
}