// to check amongstrom number by function 
#include<iostream>
#include<cmath>
using namespace std;
 void amongstrom(int n)
{
int rem,sum=0,num,digits=0;
num=n;
while(n!=0)
{
digits++;
n=n/10;
}
n=num;
while(n!=0)
{
rem=n%10;
sum+=pow(rem,digits);
n=n/10;
}
if(sum==num)
{
cout<<"amogstrom number";
}
else
{
cout<<"not amongstrom number";
}
}
int main()
{
int n;
cout<<"enter the number=";
cin>>n;
amongstrom(n);
return 0;
}