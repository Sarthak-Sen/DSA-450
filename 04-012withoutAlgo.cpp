#include<iostream>

using namespace std;

void sort012(int arr[], int n)
{
    int low=0,mid=0,high=n-1;
    while (mid<=high)    
    {
        switch(arr[mid]){
            
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
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
    sort012(arr,n);
    show(arr,n);
    return 0;
}
