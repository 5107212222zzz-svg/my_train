#include <iostream>
#include<string>
using namespace std;
int main()
{
  char c;
  cin>>c;
  if(c=='E') cout<<'F'<<endl;
  else if(c=='B') cout<<'C'<<endl;
  else cout<<c<<'#'<<endl;
  return 0;
}