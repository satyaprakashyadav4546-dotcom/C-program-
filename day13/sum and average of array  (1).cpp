// sum and average of array 
#include<iostream>
using namespace std;
int main()
{
int arr[4];
float sum=0,average;
cout<<"enter the elements of array=";
for(int i=0;i<4;i++)
{
cin>>arr[i];
}
for(int i=0;i<4;i++)
{
sum+=arr[i];
}
for(int i=0;i<4;i++)
{
average=sum/4;
}
cout<<"sum="<<sum<<endl<<"average="<<average;
return 0;
}