//to check dublicate number 
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the range of array=";
cin>>n;
int arr[n];
cout<<"enter the element of array=";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"dublicate number=";
for(int i=0;i<n;i++)
{
bool printed=false;
for( int j=0;j<i;j++)
{
if(arr[i]==arr[j])
{
printed=true;
break;
}
}
if(printed)
{
continue;
}
for(int k=i+1;k<n;k++)
{
if(arr[i]==arr[k])
{
cout<<arr[i]<<" ";
break;
}
}
}
    return 0;
}
    