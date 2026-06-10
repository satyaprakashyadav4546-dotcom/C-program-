//check strong number 
#include<iostream>
using namespace std;

int main()
{
int n,i,num,fact,rem,sum=0;
cout<<"enter the number:";
cin>>n;
num=n;
while(n!=0)
{
rem=n%10;
fact=1;
for(i=1;i<=rem;i++)
{
fact*=i;
}
sum+=fact;
n=n/10;
}
if(sum==num)
{
cout<<"strong number";
}
else
{
cout<<"not strong number";
}
    return 0;
}