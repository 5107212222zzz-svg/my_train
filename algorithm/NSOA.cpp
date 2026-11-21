//看了答案后发现自己总是学了什么就想用
//差分对于求前n项和省了时间
//这里我记录断点，是没有必要的
//只需要遍历一个loop就可以了，达到上限
//就覆盖sum，继续加
//最大的教训就是，一定要想清楚自己要的是
//什么，不要造成功能，内容的多余
//最后循环的判定也很妙啊
//有边界永远是被验证可行的，左边界除了第一个
//都是mid+1，于是最后重合时就可以直接结束
//循环，输出答案，太优雅了



/*首先肯定是k段最小，有平均值可得
通过不断检查cap是否可行并且压缩范围
直到得到一个确切的数（这里的判断需要斟酌一下细节*/
#include<iostream>
#include<vector>
using namespace std;
bool cek(int n,int k,int cap,const vector <long long>&add);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> ptr(n+1,0);
    vector<long long > add(n+1,0);
    
    //计算前n项和
    for(int i=1;i<=n;i++)
    {
        cin>>ptr[i];
        add[i]=add[i-1]+ptr[i];
    }
    //找到最小值
    int max=0;
    for(int i=0;i<n+1;i++)
    {
        if(max<ptr[i])
        {
            max=ptr[i];
        }
    }
    //先从最大和总和开始找
    //这里不但变换cap最外层应该是一个while循环
    //可以搞成一个返回bool的函数进行判断
    int l=max;
    int r=add[n];
    //定义左右边界
     int cap=(max+add[n])/2;
    //key是记录分界点的数组，key【0】未使用
    while((r-cap)>1)
    {
       if (  cek( n, k, cap,add))
       {
        r=cap;
        cap=(l+r)/2;
       }
       
    }

   if (cek( n, k, cap,add))
   {
    cout<<cap<<'\n';
   }
   cout<<r<<'\n';

   return 0;
}

bool cek(int n,int k,int cap,const vector <long long>&add)
{  
   vector<int> key(n,0);
    int count=0;
    int x;
    //不断推进j的同时记录分界点
    for(int j=1;j<=n;j++)
    {
     
    if(count+1>k)
    {
        return false;
    }
         x=add[j]-add[key[count]];//count初始为1,而key已经初始化为0！
       //每加一个数就检验
        if(x>cap)
        {
            //这里我做记录是取右端点
            key[count]=j-1;
            count++;
            j--;
        }
        //如果没有超出就继续加
    }
   
       
        return true;                                                                                                                                                                                   
}
