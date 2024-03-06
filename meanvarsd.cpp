#include<iostream>
#include<cmath>
using namespace std;
double meaneval(int s[],int n)
{
    int i;
    float res=0;
    for(i=0;i<n;i++)
    {
        res+=(float)s[i];
    }
    return res/(float)n ;
}
double variance(int s[],int n,int mean)
{
    int i;
    float var,tot=0;
    for(i=0;i<n;i++)
    {
        tot+=pow((double)mean-(double)s[i],(double)2);
    }
    var=tot/(float)n;
    return var;
}
double stddev(float var)
{
    return(sqrt(var));
}
int main()
{
    int n,i,s[50];
    float mean,var,sd;
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    cout<<"Enter the observations:\n";
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    mean=meaneval(s,n);
    var=variance(s,n,mean);
    sd=stddev(var);
    cout<<"Mean="<<mean<<endl;
    cout<<"Variance="<<var<<endl;
    cout<<"Standard Deviation="<<sd<<endl;
    return 0;
}