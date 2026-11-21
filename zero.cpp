#include<iostream>

#include<vector>
using namespace std;
int n;
void dezero(string &fnum);
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    
    cin>>n;
    vector<string> str(n);
    for(string &x:str)
    {
        cin>>x;
    }
    for(int i=0;i<n;i++)
    {
        dezero(str[i]);
    }
    return  0;


    
}

void dezero(string &fnum)
{
    if(fnum=="00000") 
    {
        cout<<'0'<<endl;
        return;
    }
    int m;
    for(int i=0;i<5;i++)
    {
        if(fnum[i]=='0') 
        {
            continue;
        }
        m=i;
        break;
    }
    for(int i=m;i<5;i++)
    {
        cout<<fnum[i];
    }
    cout<<endl;
}

