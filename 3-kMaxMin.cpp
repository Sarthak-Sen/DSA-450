#include<iostream>
#include<algorithm>

using namespace std;

struct dual
{
    int max;
    int min;
};

struct dual kMaxMin(int arr[], int n, int k)
{
    struct dual minmax;
    sort(arr, arr+n);
    minmax.max = arr[n-1-k];
    minmax.min = arr[0+k];
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
    int n, k;
    cin>>n>>k;
    int arr[n];
    input(arr, n);
    struct dual minmax= kMaxMin(arr,n, k);
    cout<<minmax.max<<" "<<minmax.min<<"\n";    
    return 0;
}