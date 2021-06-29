#include<iostream>

using namespace std;

void sortNegative(int arr[], int n)
{
    int j=0, temp;
    for(int i=0; i<n;i++)
    {
        if(arr[i]<0)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
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
    input(arr,n);
    sortNegative(arr,n);
    show(arr,n);
    return 0;
}