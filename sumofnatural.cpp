#include<iostream>
using namespace std;
int addnatural(int n)
{
    if(n==0)
    {
        return 0;
    }
    return(n+addnatural(n-1));
}
int main()
{
    int n,res;
    cout<<"Enter the number of terms:";
    cin>>n;
    res=addnatural(n);
    cout<<"Sum is equal to "<<res;
    return 0;
}