#include <iostream>

using namespace std;

void larCon(int arr[], int n)
{
    int current = arr[0], great = arr[0];
    for (int i = 1; i < n; i++)
    {
        current = max(arr[i], current + arr[i]);
        great = max(great, current);
    }
    cout << great << "\n";
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
    larCon(arr, n);
    return 0;
}