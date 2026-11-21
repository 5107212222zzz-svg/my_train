#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    vector<int > num(5,0);
    num+=5;
    for(int x:num)
    {
        cout<<x;
    }
    return 0;
}

