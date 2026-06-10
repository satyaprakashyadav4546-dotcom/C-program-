// to print the half pyramid 
#include<iostream>
using namespace std;

int main()
{
int n,m,i,j;
cout<<"enter the row=";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}
    return 0;
}