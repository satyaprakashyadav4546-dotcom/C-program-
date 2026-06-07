// reverse of the given number 
#include<iostream>
using namespace std;

int main()
{
int n,rem,reverse=0;
//taking number 'n' as input 
cout<<"enter the number:";
cin>>n;
//loop run until value of n becomes zero
while(n!=0)
{
rem=n%10;
reverse=reverse*10+rem;
n=n/10;
}
cout<<"the reverse of given number is:";
cout<<reverse;
    return 0;
}