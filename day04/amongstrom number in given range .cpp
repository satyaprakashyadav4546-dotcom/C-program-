// amongstrom number in range 
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int rem,num,x,i,y;
cout<<"enter initial value:";
cin>>x;
cout<<"enter final value:";
cin>>y;
for(i=x;i<=y;i++)
{
int digits=0,sum=0;
num=i;
while(num!=0)
{
digits++;
num=num/10;
}
num=i;
while(num!=0)
{
rem=num%10;
sum+=pow(rem,digits);
num=num/10;
}
if(sum==i)
{
cout<<i<<endl;
}
}
    return 0;
}