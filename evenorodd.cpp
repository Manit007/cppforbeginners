#include<iostream>
using namespace std;
bool isOdd(int n);
bool isEven(int n)
{
    if(n%2==0)
    {
        return true;
    }
    return(isOdd(n));
}
bool isOdd(int n)
{
    if(n%2==1)
        return false;
    return true;
}
int main()
{
    int n;
    bool t;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    t=isEven(n);
    if(t==true)
    {
        cout<<"Given number is even";
        return 0;
    }
    cout<<"Given number is odd";
    return 0;
}