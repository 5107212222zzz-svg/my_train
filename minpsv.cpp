#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    long long  n;
    cin>>n;
    vector<long long> num(n);
    for(long long &x:num)
    {
        cin>>x;
    }
    sort(num.begin(),num.end());
    long long  count=1;
    for(long long i=0;i<n;i++)
    {
        if(count==num[i])
        {
            count++;
        }
    }

    cout<<count<<endl;
}