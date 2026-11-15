#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long S;
    int ans=0;
    long long tems=0;
    cin>>n>>S;
    vector <int> ptr(n+1,0);
    vector <long long> sum(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>ptr[i];
        sum[i]=sum[i-1]+ptr[i];
    }

    int r=1;
    for(int r=1,l=1;r<=n;r++)
    {
        tems+=ptr[r];
        while(tems>S)
        {
            tems-=ptr[l];
            l++;
        }
        ans=max(ans,r-l+1);
    }

   
    cout<<ans<<'\n';
    return 0;
}