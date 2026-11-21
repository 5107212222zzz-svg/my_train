//我真的要绷不住了，反复的忘记声明函数
//而且为了省时用引用结果把队列人给释放完了
//给第二个mirrior
//用了cs106的库
#include<iostream>
#include"queue.h"
#include"stack.h"
using namespace std;
void stuter(Queue<int> q);
void mirror(Queue <int> &q);
 int n;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie (nullptr);
    Queue <int> q;
    cin>>n;
    for(int i=0,x;i<n;i++)
    {
        cin>>x;
        q.enqueue(x);
    }
   
    stuter(q);
    cout<<'\n';
    mirror(q);
    cout<<'\n';
    return 0;
}

void stuter(Queue<int> q)
{
    int m=q.size();
    int x;
     for(int i=0;i<m;i++)
    {
        x=q.peek();
        q.enqueue(x);
         q.enqueue(x);
         q.dequeue();

    }
    for(int i=0;i<2*m;i++)
    {
        cout<<q.peek()<<' '<<flush;
        q.dequeue();
    }
}

void mirror(Queue <int> &q)
{
    Stack <int> s;
    int x;
    int m=q.size();
    for (int i=0;i<m;i++)
    {
        x=q.peek();
        q.enqueue(x);
        s.push(x);
        q.dequeue();
    }
    while(!q.isEmpty())
    {
        cout<<q.peek()<<' '<<flush;
        q.dequeue();
    }
    while(!s.isEmpty())
    {
        cout<<s.peek()<<' '<<flush;
        s.pop();
    }
}
