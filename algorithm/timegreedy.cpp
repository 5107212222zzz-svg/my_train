#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int  main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
     long long  n;
    cin>>n;
    vector<vector<long long>> time(n,vector <long long > (2));
    
    for(vector <long long > &x:time)
    {
        for(long long 
 &y:x)
        {
            cin>>y;
        }
        
    }
    sort(time.begin(),time.end(),
    [](vector<long long> &a,vector<long long> &b)
    {
  if(a[1]<b[1]) return true;
   else return false; 
});
   long long r=0,count=0;
   for( long long i=0;i<n;i++)
   {
    if(time[i][0]>=r)
    {
        r=time[i][1];
        count++;
        continue;
    }
   }
   cout<<count<<'\n';
   return 0;



}