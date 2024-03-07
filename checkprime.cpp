#include<iostream>
using namespace std;
bool checkprime(int n,int *count)
{
    int i;
    if(n==1||n==0)
    {
        cout<<"Number is neither prime nor composite";
        exit(0);
    }
    for(i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            *count+=1;
        }
    }
    if(*count>0)
    {
        return true;
    }
    return false;
}
int main()
{
    int n,count;
    bool res;
    count=0;
    cout<<"Enter the number:";
    cin>>n;
    res=checkprime(n,&count);
    if(res==true)
    {
        cout<<"Number is composite";
        return 0;
    }
    cout<<"Number is prime";
    return 0;
}