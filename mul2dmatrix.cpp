#include<iostream>
#include<cmath>
#include<array>
using namespace std;
void mulmat(int s[][4],int q[][4],int res[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            res[i][j]=s[i][j]*q[i][j];
        }
    }
}
void printmat(int t[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<t[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void readarray(int t[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>t[i][j];
        }
    }
}
int main()
{
    int s[4][4],q[4][4],t[4][4];
    cout<<"Enter values in first array:\n";
    readarray(s);
    cout<<"Enter values in second array:\n";
    readarray(q);
    cout<<"The matrices are:\n";
    cout<<"S\n";
    printmat(s);
    cout<<"\n";
    cout<<"Q\n";
    printmat(q);
    mulmat(s,q,t);
    cout<<"\n"<<"Resultant Matrix-T is\n";
    printmat(t);
    return 0;
}