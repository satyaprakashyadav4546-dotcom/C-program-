#include<iostream>
using namespace std;

int main()
{
int i,sum=0,n;
cout<<"enter a number:";
cin>>n;
for(i=1;i<=n;i++)
{
sum+=i;
}
cout<<sum;
    return 0;
}