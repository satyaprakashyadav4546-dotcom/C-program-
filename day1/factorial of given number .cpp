// factorial of given number 
#include<iostream>
using namespace std;

int main()
{
int i,fact=1,n;
cout<<"enter a number:";
cin>>n;
for(i=1;i<=n;i++)
{
fact*=i;
}
cout<<fact;
    return 0;
}