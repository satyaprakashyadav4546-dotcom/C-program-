// to number is amogstr or not
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int n,rem,sum=0,num,digits=0;
cout<<"enter the number:";
cin>>n;
num=n;
while(n!=0)
{
digits++;
n=n/10;
}
n=num;
while(n!=0)
{
rem=n%10;
sum+=pow(rem,digits);
n=n/10;
}
cout<<sum<<endl;
if(sum==num)
cout<<"amongstrom number";
else
cout<<"not amongstrom number";
    return 0;
}