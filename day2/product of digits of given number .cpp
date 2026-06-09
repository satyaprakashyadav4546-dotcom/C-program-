// product of digits of  given number 
#include<iostream>
using namespace std;

int main()
{
int n,rem,product=1;
//taking number 'n' as input 
cout<<"enter the number:";
cin>>n;
//loop run until value of n becomes zero
while(n!=0)
{
rem=n%10;
product*=rem;
n=n/10;
}
cout<<"product of digits of given number is:";
cout<<product;
    return 0;
}