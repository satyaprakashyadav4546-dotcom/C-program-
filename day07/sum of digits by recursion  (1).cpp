// sum of digits by recursion 
#include<iostream>
#include<cmath>
using namespace std;
int sum(int n,int summation=0)
{
if(n==0)
{
return summation;
}
else
{
return sum(n/10,summation+n%10);
}
}
int main()
{
int n;
cout<<"enter the number=";
cin>>n;
cout<<"sum of digits is=";
cout<<sum(n);
return 0;
}