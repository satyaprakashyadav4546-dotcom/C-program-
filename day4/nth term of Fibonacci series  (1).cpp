// nth term of Fibonacci series 
#include<iostream>
using namespace std;

int main()
{
int n,a,b,i,c;
cout<<"first number:";
cin>>a;
cout<<"second number is:";
cin>>b;
cout<<"enter the nth term:";
cin>>n;
if(n==1)
{
cout<<a<<endl;
}
else if(n==2)
{
cout<<b<<endl;
}
else
{
for(i=3;i<=n;i++)
{
c=a+b;
a=b;
b=c;
}
cout<<c<<endl;
}
    return 0;
}