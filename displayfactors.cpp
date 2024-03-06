#include<iostream>
using namespace std;
void displayfactors(int n)
{
    int i,t=0;
    cout<<"1\t";
    for(i=2;i<n;i++)
    {
        t=n%i;
        if(t==0)
        {
            cout<<i<<"\t";
        }
    }
    cout<<n<<"\n";
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n==0)
    {
        cout<<"No factors\n";
        return 0;
    }
    cout<<"Factors of number are:\n";
    displayfactors(n);
    return 0;
}