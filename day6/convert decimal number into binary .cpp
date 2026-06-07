// to convert the decimal number into binary
#include<iostream>
using namespace std;
int main ()
{
int n,rem,binary=0,place=1;
cout<<"enter a decimal number=";
cin>>n;
cout<<"binary value is=";
while(n!=0)
{
rem=n%2;
binary+=place*rem;
place=place*10;
n=n/2;
}
cout<<binary;
    return 0;
}
    