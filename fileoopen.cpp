#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ifstream input;
    string line;
    int lines=0;
    input.open("testff.txt");
    if(input.fail())
    {
        cout<<"Womp Womp"<<endl;
    }
   
    else 
    {
         
    while(getline(input,line))
    {
        cout<<"Here is a line :"<<line<<endl;
        lines++;
    }
    cout<<"There is "<<lines<<" lines"<<endl; string line;
    int lines=0;
    while(getline(input,line))
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
        cout<<"Here is a line :"<<line<<endl;
        lines++;
    }
    cout<<"There is "<<lines<<" lines"<<endl;
    }

    return 0;
    
}