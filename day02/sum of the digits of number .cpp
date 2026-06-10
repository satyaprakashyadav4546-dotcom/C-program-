// sum of digits of number 
#include<iostream>
using namespace std;

int main()
{
int sum=0,n,rem;
//taking number 'n' as input 
cout<<"enter the number:";
cin>>n;
//loop run until value of n becomes zero
while(n!=0)
{
rem=n%10;
sum+=rem;
n=n/10;
}
cout<<"the sum of the digits of given number is:";
cout<<sum;
    return 0;
}