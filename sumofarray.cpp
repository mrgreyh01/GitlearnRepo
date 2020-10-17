#include<iostream>
using namespace std;

int main()
{
    int arr1[5];
    int arr2[5];
    int arr3[5];
    int i=0;
    cout<<"Enter the numbers for the arr1 & arr2 : ";
    for(i=0;i<5;i++)
    {
               cin>>arr1[i];
    }
    cout<<endl;
    cout<<"Enter the numbers for the arr2 : "<<endl;
     for(i=0;i<5;i++)
    {
               cin>>arr2[i];
    }
    for(i=0;i<5;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        cout<<"Sum of the arr1 & arr2 : "<<arr3[i]<<endl;
    }
    
    return 0;
}