// fibonacci series upto nth term 
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
cout<<a<<endl;
cout<<b<<endl;
for(i=3;i<=n;i++)
{
c=a+b;
a=b;
b=c;
cout<<c<<endl;
}
    return 0;
}