#include<iostream>
#include<array>
using namespace std;
struct sparsematrix
{
    int row;
    int column;
    int value;
};
typedef struct sparsematrix MATRIX;
void readmatrix(int s[20][20],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
    }
}
void countitems(int s[][20],int *count,int m,int n,MATRIX a[])
{
    int i,j,k=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j]!=0)
            {
                a[k].row=i+1;
                a[k].column=j+1;
                a[k].value=s[i][j];
                k++;
                *count+=1;
            }
        }
    }
    a[0].row=m;
    a[0].column=n;
    a[0].value=*count;
}
void displaymat(MATRIX a[],int count)
{
    int i=1;
    cout<<"Non-zero elements of matrix are\n";
    cout<<"Row\t\tColumn\t\tValue"<<endl;
    for(i=1;i<=count;i++)
    {
        cout<<a[i].row<<"\t\t"<<a[i].column<<"\t\t"<<a[i].value<<endl;
    }
    return;
}
int searchkey(int s[][20],MATRIX a[],int key)
{
    int i,n;
    n=a[0].value;
    for(i=1;i<=n;i++)
    {
        if(key==a[i].value)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    MATRIX a[50]={};
    int m,n,s[20][20],count=0,key,res;
    cout<<"Enter number of Rows and Columns of Matrix:"<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of the matrix:"<<endl;
    readmatrix(s,m,n);   
    countitems(s,&count,m,n,a);
    displaymat(a,count);
    cout<<"Enter key to be searched:";
    cin>>key;
    res=searchkey(s,a,key);
    if(res==-1)
    {
        cout<<"Search Unsuccessful\nElement not found\n";
        return 0;
    }
    cout<<"Search Successful\nElement found successfully at "<<endl;
    cout<<"Row="<<a[res].row<<"\nColumn="<<a[res].column<<endl;
    return 0;
}