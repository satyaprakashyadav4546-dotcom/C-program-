// to print number pyramid 
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the value of n=";
cin>>n;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n-i;j++)
{
//space
cout<<" ";
}
for(int j=1;j<=i;j++)
{
//star
cout<<j<<" ";
}
for(int j=i-1;j>=1;j--)
{
//again star
cout<<j<<" ";
}
for(int j=1;j<=n-i-1;j++)
{
cout<<" ";
}
cout<<endl;
}
return 0;
}