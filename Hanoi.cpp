#include<iostream>
#include<string>
using namespace std;
int move(int n);
int main ()
{
    int n=0;
    cin>>n;

    int ans=move(n);

    cout<<"The least number is "<<ans<<endl;
    return 0;

}
int move(int n)
{
   
    if(n==2)

    {
        return 3;
    }

   int temp= 2*move(n-1)+1;

   return temp;
}

