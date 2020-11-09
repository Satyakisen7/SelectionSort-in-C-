#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;++i)
    {
        min=i;
        for(j=i+1;j<n;++j)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i)
    {
        cin>>arr[i];
    }
    selection(arr,size);
    display(arr,size);
}