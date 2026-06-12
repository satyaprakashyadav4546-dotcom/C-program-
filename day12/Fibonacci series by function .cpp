// print the fibonacci series by function  
#include<iostream>
using namespace std;
 void fibo(int n)
{
int a=0,b=1,c;
cout<<a<<" "<<b<<" ";
for(int i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
cout<<c<<" ";
}
}
int main()
{
int n;
cout<<"enter the number=";
cin>>n;
fibo(n);
return 0;
}