// reverse of number by recursion 
#include<iostream>
#include<cmath>
using namespace std;
int rev(int n,int reverse=0)
{
int rem;
if(n==0)
{
return reverse;
}
else
{
rem=n%10;
return rev(n/10,reverse*10+rem);
}
}
int main()
{
int n;
cout<<"enter the number=";
cin>>n;
cout<<"reverse of number is=";
cout<<rev(n);
return 0;
}