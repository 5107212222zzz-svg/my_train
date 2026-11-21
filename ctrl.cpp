#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long n,m;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    cin>>n>>m;
    long long matrix[m][n];
    long long cap[m];
    for(long long &x:cap)
    {
        cin>>x;
    }

    for (long long i=0;i<m;i++)//colume
    {
        for(long long j=0;j<cap[i];j++)
       {
         matrix[i][j]=cap[i]-j-1;
       }
       for(long long j=cap[i];j<n;j++)
       {
        matrix[i][j]=j+1-cap[i];
       }
    }
    long long max[n];
    for(long long i=0;i<n;i++)
    {
       long long colume[m];
        for(long long j=0;j<m;j++)
        {
            colume[j]=matrix[j][i];
        }
        long long *ptr=max_element(colume,colume+m);
        max[i]=*ptr;
    }
    for(long long x:max)
    {
        cout<<x<<' '<<flush;
        
    }
    
    return 0;
    
}