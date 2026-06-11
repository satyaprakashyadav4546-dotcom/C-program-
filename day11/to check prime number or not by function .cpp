// to check prime number or not by function 
#include<iostream>
#include<cmath>
using namespace std;
 void prime(int n)
{
int count=0,i;
if(n==1||n==0)
{
count++;
}
else
{
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
count++;
}
else
{
count=0;
}
}
}
if(count==0)
{
cout<<"prime number";
}
else
{
cout<<"not prime number";
}
}
int main()
{
int n;
cout<<"enter the number=";
cin>>n;
prime(n);
return 0;
}