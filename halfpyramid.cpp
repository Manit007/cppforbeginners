#include<iostream>
#include<string>
using namespace std;
void halfpyramid(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<string(i,'*')<<endl;
    }
}
void halfpyramidinverted(int n)
{
    int i;
    for(i=n;i>0;i--)
    {
        cout<<string(i,'*')<<endl;
    }
}
void halfpyramidInvertedNum(int n)
{
    int i,j;
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void halfpyramidnum(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter number of lines to print:";
    cin>>n;
    cout<<"Half pyramid pattern straight and inverted with asterisk"<<endl;
    halfpyramid(n);
    cout<<endl;
    halfpyramidinverted(n);
    cout<<"Half pyramid pattern with numbers- Straight and inverted:"<<endl;
    halfpyramidnum(n);
    cout<<endl;
    halfpyramidInvertedNum(n);
    return 0;
}