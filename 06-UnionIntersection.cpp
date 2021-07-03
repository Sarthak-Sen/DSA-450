#include<iostream>

using namespace std;

void un(int ar1[], int ar2[], int m, int n)
{
    int i=0,j=0;
    while(i<m || j<n)
    {
        if(ar1[i] == ar1[i-1]) //For Duplicates
        {
            i++;
            continue;
        }
        if(ar2[j] == ar2[j-1]) //For Duplicates
        {
            j++;
            continue;
        }

        if(ar1[i]<ar2[j])
        {
            cout<<ar1[i]<<" ";
            i++;
        }
        else if(ar1[i]>ar2[j])
        {
            cout<<ar2[j]<<" ";
            j++;
        }
        else if(ar1[i]==ar2[j])
        {
            cout<<ar2[j]<<" ";
            i++, j++;
        }
    } 

    while(i<m)
    {
        cout<<ar1[i++]<<" ";
    }
    while(j<n)
    {
        cout<<ar1[i++]<<" ";
    }
    cout<<"\n";

}

void in(int ar1[], int ar2[], int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(ar1[i] == ar1[i-1]) //For Duplicates
        {
            i++;
            continue;
        }
        if(ar2[j] == ar2[j-1]) //For Duplicates
        {
            j++;
            continue;
        }

        if(ar1[i]<ar2[j])
        {
            i++;
        }
        else if(ar1[i]>ar2[j])
        {
            j++;
        }
        else if(ar1[i]==ar2[j])
        {
            cout<<ar2[j]<<" ";
            i++, j++;
        }
    } 
    cout<<"\n";
}

void input(int arr[], int x)
{
    for(int i = 0; i < x; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int n,m;
    cin>>m>>n;
    int f=m+n, g=m+n;
    int ar1[m],ar2[n],tot1[f],tot2[g];
    input(ar1,m);
    input(ar2,n);
    un(ar1,ar2,m,n);
    in(ar1,ar2,m,n);
    return 0;
}
