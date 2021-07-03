#include<iostream>

using namespace std;

void rotate(int arr[], int n)
{
    int high=arr[n-1];
    for(int i=n-1; i>=0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = high;
}

void input(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}

void show(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    rotate(arr,n);
    show(arr,n);
    return 0;
}
