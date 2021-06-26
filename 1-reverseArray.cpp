#include<iostream>

using namespace std;

void reverse(int arr[], int n)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
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
    input(arr, n);
    reverse(arr, n);
    show(arr, n);
    return 0;
}