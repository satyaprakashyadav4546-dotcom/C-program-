// wap to print prime factor 
#include<iostream>
using namespace std;

int main()
{
int n,i,num,j,count;
cout<<"enter the number:";
cin>>n;
num=n;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
count++;
break;
}
}
if(count==0)
cout<<i<<endl;
}
}
    return 0;
}