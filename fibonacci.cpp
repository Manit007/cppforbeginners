#include<iostream>
using namespace std;
void fibprint(int n)
{
    int i, f[100];
    f[0]=0;
    f[1]=1;
    if(n==0)
    {
        cout<<"No terms present"<<endl;
        return;
    }
    cout<<"The terms are:\n";
    cout<<f[0]<<"\t";
    cout<<f[1]<<"\t";
    for(i=2;i<n;i++)
    {
        f[i]=f[i-1]+f[i-2];
        cout<<f[i]<<"\t";
    }
    cout<<endl;
    return;
}
int main()
{
    int n,res;
    cout<<"Enter the number of terms:";
    cin>>n;
    fibprint(n);
    return 0;
}