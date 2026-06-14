// linear search 
#include<iostream>
using namespace std;
int main()
{
int n,a,count=0;
cout<<"enter the range of array=";
cin>>n;
int arr[n];
cout<<"enter the element of array=";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"enter the target element=";
cin>>a;
for(int i=0;i<n;i++)
{
if(arr[i]==a)
{
count++;
cout<<"index of element="<<i;
}
}
if(count==0)
{
cout<<"element not found";
}
return 0;
}