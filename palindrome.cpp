#include<iostream>
using namespace std;
bool isPal(int a,int b)
{
    if(a==b)
    {
        return true;
    }
    return false;
}
int palindrome(int n)
{
    int rev, r, pal;
    bool t;
    pal=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    return rev;
}
int main()
{
    int n,res;
    bool t;
    cout<<"Enter the number:";
    cin>>n;
    res=palindrome(n);
    t=isPal(n,res);
    if(t)
    {
        cout<<"Given number is palindrome\n";
        return 0;
    }
    cout<<"Given number is not a palindrome";
    return 0;
}