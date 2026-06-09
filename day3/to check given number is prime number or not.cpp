// to check given number is prime or not  
#include<iostream>
using namespace std;

int main()
{
int n,i,count=0;
cout<<"enter the number:";
cin>>n;
// 0 and 1 is not prime number 
if(n<=1)
{
count++;
}
else{
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
count++;
break;
}
}
}
if(count==0)
{
cout<<"prime number";
}
else
{
cout<<"not prime number";
}
    return 0;
}