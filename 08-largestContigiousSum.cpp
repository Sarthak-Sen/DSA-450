#include <iostream>
#include <stdio.h>

using namespace std;

int maX(int a, int b) {
    return a>b?a:b;
}

int maX(int a, int b, int c){
    return (maX(maX(a,b),c));
}

int maxCrossing(int arr[], int l, int m, int h)
{
    int sum = 0;
    int left = INT32_MIN;
    for(int i=m; i>l; i--)
    {
        sum += arr[i];
        if(sum>left)
        {
            left = sum;
        }
    }
    sum = 0;
    int right = INT32_MIN;
    for(int i=m+1; i<h; i++)
    {
        sum += arr[i];
        if(sum>right)
        {
            right = sum;
        }
    }
    return(maX(left+right,left,right));
}

int maxSubArray(int arr[], int l, int h)
{
    if(l==h)
    {
        return arr[l];
    }

    int m = (l+h)/2;

    return maX(maxSubArray(arr,l,m), maxSubArray(arr,m+1,h), maxCrossing(arr,l,m,h));
}

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    input(arr, n);
    cout<<maxSubArray(arr, 0, n-1)<<"\n";
    return 0;
}
