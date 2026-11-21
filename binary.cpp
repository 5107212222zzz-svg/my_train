#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    vector<int> num(5);
    for(int &x:num)
    {
        cin>>x;
    }
    int ans;
    cin>>ans;
    sort(num.begin(),num.end());
    if(!binary_search(num.begin(),num.end(),ans))
    {
        cout<<"There is no the number you want."<<endl;
        return 0;
    }
    auto it =lower_bound(num.begin(),num.end(),ans);
    cout<<(int)(it-num.begin());
    return 0;

}