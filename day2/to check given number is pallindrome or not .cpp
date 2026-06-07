// to check the given number is pallindrome or not
#include<iostream>
using namespace std;

int main()
{
int n,rem,num,reverse=0;
//taking number 'n' as input 
cout<<"enter the number:";
cin>>n;
num=n;
//loop run until value of n becomes zero
while(n!=0)
{
rem=n%10;
reverse=reverse*10+rem;
n=n/10;
}
if(num==reverse)
{
cout<<"the given number is pallindrome number";
}
else{
cout<<"the given number is not a pallindrome number";
}
    return 0;
}