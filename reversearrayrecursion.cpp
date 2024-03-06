#include<iostream>
#include<array>
using namespace std;
void reversearray(int s[],int start,int end)
{
    int temp;
    if(start==end||start>end)
    {
        return;
    }
    temp=s[start];
    s[start]=s[end];
    s[end]=temp;
    return(reversearray(s,start+1,end-1));
}
void printarray(int s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return;
}
int readarray(int s[])
{
    int i,n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    return n;
}
int main()
{
    int s[50],n,res;
    res=readarray(s);
    cout<<"Original array is:\n";
    printarray(s,res);
    reversearray(s,0,res-1);
    cout<<"Reversed array is\n";
    printarray(s,res);
    return 0;
}