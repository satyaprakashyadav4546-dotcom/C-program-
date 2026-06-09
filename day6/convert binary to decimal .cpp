// to convert the binary to decimal
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
int rem,binary,decimal=0,x=0;
cout<<"enter binary number=";
cin>>binary;
while(binary!=0)
{
rem=binary%10;
decimal+=rem*pow(2,x);
binary=binary/10;
x++;
}
cout<<"decimal value is=";
cout<<decimal;
    return 0;
}
    