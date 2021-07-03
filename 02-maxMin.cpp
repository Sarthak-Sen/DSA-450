#include<iostream>

using namespace std;

struct dual
{
    int max;
    int min;
};

struct dual maxMin(int arr[],int n)
{
    struct dual minmax;
    if(arr[0]>=arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    for(int i = 2; i < n; i++)
    {
        if(arr[i]>minmax.max)
        {
            minmax.max = arr[i];
        }
        else if(arr[i]<minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
}

void input(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr, n);
    struct dual minmax = maxMin(arr,n);
    cout<<minmax.max<<" "<<minmax.min<<"\n";
    return 0;
}
