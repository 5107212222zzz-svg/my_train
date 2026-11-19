#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main ()
{
    fstream input;
    input.open("test.txt");
    string token;
    int words=0;
    while (input >> token)
    {
        cout<<" here is a word : "<<token<<endl;
        words++;
    }
  cout <<"There is "<<words <<" total lines."<<endl;
  return 0;
}
