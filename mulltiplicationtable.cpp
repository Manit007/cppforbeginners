#include<iostream>
using namespace std;
void table(int num)
{
    int i;
    if(num==0)
    {
        cout<<"As number is 0, all results will be 0"<<endl;
        return;
    }
    for(i=1;i<=10;i++)
    {
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the number to be used to make a multiplication table:"<<endl;
    cin>>n;
    table(n);
    return 0;
}