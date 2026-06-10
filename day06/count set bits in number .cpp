// to count set bits in number
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
int rem,binary,x=0;
cout<<"enter binary number=";
cin>>binary;
while(binary!=0)
{
rem=binary%10;
if(rem==1)
{
x++;
}
else
{
x=x;
}
binary=binary/10;
}
cout<<"set bits in number is=";
cout<<x;
    return 0;
}
    