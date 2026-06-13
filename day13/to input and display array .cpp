// to input and display array
#include<iostream>
using namespace std;
int main()
{
int arr[3];
cout<<"enter the elements of array=";
for(int i=0;i<3;i++)
{
cin>>arr[i];
}
cout<<"the array elements are:";
for(int i=0;i<3;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}