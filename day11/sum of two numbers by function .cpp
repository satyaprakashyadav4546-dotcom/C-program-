/sum of tenumbers by function 
#include<iostream>
using namespace std;
int sum(int a,int b)
{
return a+b;
}
int main()
{
int a,b;
cout<<"enter the value of a=";
cin>>a;
cout<<"enter the value of b=";
cin>>b;
cout<<"sum=";
cout<<sum(a,b);
    return 0;
}