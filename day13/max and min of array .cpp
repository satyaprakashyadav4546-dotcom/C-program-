// maximum and minimum  of array 
#include<iostream>
using namespace std;
int main()
{
int arr[4];
float min=INT_MIN,max=INT_MAX;
cout<<"enter the elements of array=";
for(int i=0;i<4;i++)
{
cin>>arr[i];
}
for(int i=0;i<4;i++)
{
if(arr[i]>min)
{
min=arr[i];
}
}
for(int i=0;i<4;i++)
{
if(arr[i]<max)
{
max=arr[i];
}
}
cout<<"max="<<min<<endl<<"min="<<max;
return 0;
}