// second largest element 
#include<iostream>
using namespace std;
int main()
{
int min=INT_MIN,arr[6],max,secondmax;
cout<<"enter the elements of array=";
for(int i=0;i<6;i++)
{
cin>>arr[i];;
}
for(int i=0;i<6;i++)
{
if(arr[i]>min)
{
min=arr[i];
max=arr[i];
}
}
min=INT_MIN;
for(int i=0;i<6;i++)
{
if(arr[i]>min&&arr[i]!=max)
{
min=arr[i];
secondmax=arr[i];
}
}
cout<<"second maximum element="<<secondmax;
return 0;
}