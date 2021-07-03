#include <iostream>

using namespace std;

void kadane(int arr[], int n)
{
    int current = arr[0], great = arr[0], start = 0, end = 0, s = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<(current+arr[i]))
        {
            start = s;
            end = i;
        }
        current = max(arr[i], current + arr[i]);
        if(great<current)
        {
            s = i++;
        }
        great = max(great, current);
    }
    cout << great << "\n"<<start<<"\t"<<end<<"\n";
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
    kadane(arr, n);
    return 0;
}