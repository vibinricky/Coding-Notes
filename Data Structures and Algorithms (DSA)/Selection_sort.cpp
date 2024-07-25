#include <iostream>
using namespace std;

int main()
{

    int arr[] = {7,4,10,8,3,1};
    int n = 6;
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if (arr[j]<arr[min]){
                min = j; 
            }
        }
        if (min != i){
            swap(arr[i],arr[min]);
        }    
    }

    for(int k=0; k<n; k++){
        cout << arr[k]<<endl;
    }

    return 0;

}