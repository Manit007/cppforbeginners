#include<iostream>
using namespace std;
int count=0;
void tower(int n,char source,char destination,char auxiliary)
{
    if(n==1)
    {
        cout<<"Move disc "<<n<<" from "<<source<<" to "<<destination<<endl;
        count++;
        return;
    }
    tower(n-1,source,auxiliary,destination);
    cout<<"Move disc "<<n<<" from "<<source<<" to "<<destination<<endl;
    count++;
    tower(n-1,auxiliary,destination,source);
}
int main()
{
    int n;
    cout<<"Enter the number of discs:";
    cin>>n;
    tower(n,'A','C','B');
    cout<<"Total number of discs moves are "<<count;
    return 0;
}