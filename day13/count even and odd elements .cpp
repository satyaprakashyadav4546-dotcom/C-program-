// count odd and even elements 
#include<iostream>
using namespace std;
int main()
{
int n,count=0,key=0;
cout<<"enter the number of elements=";
cin>>n;
int arr[n];
cout<<"enter the elements=";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
if(i%2==0)
{
count++;
}
else
{
key++;
}
}
cout<<"even place elements="<<count<<endl<<"odd place elements="<<key;
return 0;
}