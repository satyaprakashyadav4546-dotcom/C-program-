// to chgiven number is perfect number or not by function  
#include<iostream>
using namespace std;
 void perfect(int n)
{
int sum=0;
for(int i=1;i<n;i++)
{
if(n%i==0)
{
sum+=i;
}
}
if(sum==n)
{
cout<<" perfect number";
}
else
{
cout<<"not perfect number";
}
}
int main()
{
int n;
cout<<"enter the number=";
cin>>n;
perfect(n);
return 0;
}