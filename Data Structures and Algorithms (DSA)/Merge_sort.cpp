#include <iostream>
using namespace std;

void Merge(int arr[], int lb, int mid, int ub, int n)
{
    int i = lb;
    int j = mid+1;
    int k = lb;
    int b[n];

    while(i<=mid && j<=ub)
    {
        if (arr[i]<=arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i>mid)
    {
        while(j<=ub)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    } 
    else {
        while (i<=mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }

    for(k = lb; k<= ub; k++)
    {
        arr[k] = b[k];
    }
}


void Mergesort(int arr[], int lb, int ub, int n)
{
    if (lb<ub)
    {
        int mid = (lb+ub)/2;
        Mergesort(arr, lb, mid, n);
        Mergesort(arr, mid+1, ub, n);
        Merge(arr, lb, mid, ub, n);
    }
    
}

int main()
{
    int arr[] = {7,6,10,5,9,2,1,15,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lb = 0;
    int ub = n-1;

    Mergesort(arr,lb,ub,n);

    for(int k = 0; k<n; k++)
    {
        cout << arr[k]<<endl;
    }

}