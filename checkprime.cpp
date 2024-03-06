#include<iostream>
using namespace std;
bool checkprime(int n,int *count)
{
    int i;
    for(i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        continue;
    }
    if(*count>2)
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