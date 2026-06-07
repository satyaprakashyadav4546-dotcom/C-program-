// to calculate the value of x^n without using pow()
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
int n,i,x,value=1;
cout<<"enter the value of x=";
cin>>x;
cout<<"enter the value of n=";
cin>>n;
for(i=1;i<=n;i++)
{
value*=x;
}
if(n==0)
{
value=1;
}
cout<<"the value of x^n is=";
cout<<value;
    return 0;
}
    