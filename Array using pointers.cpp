#include<iostream>
using namespace std;

int main()
{
    int a[5],i=0,*p;
    cout<<"Enter the elements:\n";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    p=a;
    cout<<"You entered:\n";
    for(i=0;i<5;i++)
    {
        cout<<*p<<"\n";
        p++;
    }
    return 0;
}
