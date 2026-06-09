//check perfect number 
#include<iostream>
using namespace std;

int main()
{
int n,i,num,sum=0;
cout<<"enter the number:";
cin>>n;
num=n;
for(i=1;i<n;i++)
{
if(n%i==0)
{
sum=sum+i;
}
cout<<endl;
}
if(sum==num)
{
cout<<"perfect number";
}
else
{
cout<<"not perfect number";
}
    return 0;
}