#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector <int> num={1,7,8,2,4};
   // sort(num.begin(),num.begin()+4,greater<int>());
  // nth_element(num.begin(),num.begin()+4,num.end()-1);
  //partial_sort(num.begin(),num.begin()+3,num.end());

  auto it=max_element(num.begin(),num.end());
  cout<<*it<<endl;
  for(int x:num)
    {
       cout<<x<<'\n';
    }
    
    return 0;
}