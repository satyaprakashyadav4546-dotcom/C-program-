// to check pallindrome number by function 
#include<iostream>
using namespace std;
 void pallindrome(int n)
{
int rem,reverse=0,num;
num=n;
while(n!=0)
{
rem=n%10;
reverse=reverse*10+rem;
n=n/10;
}
if(num==reverse)
{
cout<<"pallindrome number";
}
else
{
cout<<"not pallindrome number";
}
}
int main()
{
int n;
cout<<"enter the number=";
cin>>n;
pallindrome(n);
return 0;
}