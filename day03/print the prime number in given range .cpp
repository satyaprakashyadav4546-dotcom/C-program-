// to prthe prime number in given range  
#include<iostream>
using namespace std;

int main()
{
int start,end,j,i;
cout<<"enter starting number:";
cin>>start;
cout<<"enter end number:";
cin>>end;
cout<<"prime number between "<<start<<" and "<<end<<" are:\n";
for(i=start;i<=end;i++)
{
if(i<2)
continue;
int flag=1;
for(j=2;j*j<=i;j++)
{
if(i%j==0)
{
flag=0;
break;
}
}
if(flag==1)
{
cout<<i<<" ";
}
}
    return 0;
}