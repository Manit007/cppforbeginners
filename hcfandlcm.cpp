#include<iostream>
using namespace std;
int hcfeval(int a,int b)
{
    int res,m,n;
    m=a;
    n=b;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
    res=m;
    return res;
}
int lcmeval(int a,int b,int hcf)
{
    int res;
    res=(a*b)/(hcf);
    return res;
}
int main()
{
    int a,b,hcf,lcm;
    cout<<"Enter the two numbers\n";
    cin>>a>>b;
    hcf=hcfeval(a,b);
    lcm=lcmeval(a,b,hcf);
    cout<<"HCF="<<hcf<<"\t"<<"LCM="<<lcm<<endl;
    return 0;
}
