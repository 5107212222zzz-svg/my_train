#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,p;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    cin>>n>>p;
    int count[n]={0};
    for(int i=1;i<=n;i++)
    {
       signed int x;
        cin>>x;
        if((x%2)==0) 
        {
            count[i]=count[i-1]+1;
            continue;
        }
        count[i]=count[i-1];
    }
    while(p--)
    {
        int l,r;
        cin>>l>>r;
        cout<<count[r]-count[l-1]<<'\n';
    }
    return 0;

    
}