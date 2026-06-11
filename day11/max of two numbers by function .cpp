//max of numbers by function 
#include<iostream>
using namespace std;
int max(int a,int b)
{
if(a>b)
{
return a;
}
else
{
return b;
}
}
int main()
{
int a,b;
cout<<"enter the value of a=";
cin>>a;
cout<<"enter the value of b=";
cin>>b;
cout<<"max=";
cout<<max(a,b);
    return 0;
}