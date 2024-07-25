#include <iostream>
using namespace std;

#define MAX 1000 

void heapify_up(int arr[], int n, int i)
{
	int parent = (i - 1) / 2;

	if (arr[parent] > 0) {

		if (arr[i] > arr[parent]) {
			swap(arr[i], arr[parent]);

			heapify_up(arr, n, parent);
		}
	}
}

void heapify_down(int Arr[], int n, int i)
{
    int largest = i;
    int l = (2*i)+1;
    int r = (2*i)+2;
    if (l<=n && Arr[l]>Arr[largest])
    {
        largest = l;
    } 
    if (r<=n && Arr[r]>Arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(Arr[i],Arr[largest]);
        heapify_down(Arr, n, largest);
    }
    
}

void insertNode(int arr[], int& n, int Key)
{
	n = n + 1;

	arr[n - 1] = Key;

	heapify_up(arr, n, n - 1);
}

void deleteRoot(int arr[], int& n)
{
    int lastElement = arr[n - 1];
 
    arr[0] = lastElement;
 
    n = n - 1;
 
    heapify_down(arr, n, 0);
}


void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	cout << "\n";
}


int main()
{
	
	int arr[MAX] = { 10, 5, 3, 2, 4 };

	int n = 5;

    deleteRoot(arr, n);

    printArray(arr, n);cout<<endl;

	insertNode(arr, n, 15);

    printArray(arr, n);cout<<endl;

    insertNode(arr, n, 20);

	printArray(arr, n);cout<<endl;

	return 0;
}
