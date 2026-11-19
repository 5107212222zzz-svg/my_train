#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector <int > num(n);
    for(int &x:num)
    {
        cin>>x;
    }

    sort(num.begin(),num.end());
    auto IT=max_element(num.begin(),num.end());
    auto it=min_element(num.begin(),num.end());

    for(int x:num)
    {
        cout<<x<<' ';
    }
    cout<<'\n';
    cout<<"max="<<*IT<<"   min="<<*it<<'\n';
    return 0;
    
    
}