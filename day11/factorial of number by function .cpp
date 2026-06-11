//factorial of number by function 
#include<iostream>
using namespace std;
int fact(int a)
{
int f=1;
if(a==1||a==0)
{
return 1;
}
else
{
 for( int i=1;i<=a;i++)
 {
 f*=i;
 }
 return f;
 }
}
int main()
{
int a;
cout<<"enter the number=";
cin>>a;
cout<<"factorial="<<fact(a);
return 0;
}