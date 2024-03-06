#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
bool dis(int a,int b,int c)
{
    float d;
    d=(b*b)-(4*a*c);
    if(d>=0)
    {
        return true;
    }
    return false;
}
void realroots(int a, int b, int c)
{
    float res1,res2;
    res1=((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
    res2=((-b)-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"The roots are:"<<endl;
    cout<<res1<<endl;
    cout<<res2<<endl;
    return;
}
void imagiroots(int a,int b,int c)
{
    float res1,res2;
    res1=(sqrt(abs((b*b)-(4*a*c)))/(2*a));
    res2=(sqrt(abs((b*b)-(4*a*c)))/(2*a));
    cout<<"Imaginary Roots are :"<<endl;
    cout<<-b<<"+"<<res1<<"i"<<endl;
    cout<<-b<<"-"<<res2<<"i"<<endl;
    return;
}
int main()
{
    int a,b,c;
    bool eval;
    cout<<"Enter the coeefficients of quadratic equation, starting from highest power:\n";
    cin>>a>>b>>c;
    eval=dis(a,b,c);
    if(eval==true)
    {
        realroots(a,b,c);
        return 0;
    }
    imagiroots(a,b,c);
    return 0;
}