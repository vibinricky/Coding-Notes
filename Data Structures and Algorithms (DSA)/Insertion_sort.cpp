#include <iostream>
using namespace std;

int main()
{
    int lst[] = {5,4,10,1,6,2};
    int n = 6;
    for(int i=1; i<n; i++){
        int temp = lst[i];
        int j = i-1;
        while(j >= 0 && temp<lst[j]){
            lst[j+1] = lst[j];
            j--;
        }
        lst[j+1] = temp;    

    }

    for(int k=0; k<n; k++){
        cout << lst[k]<<endl;
    }

    return 0;
}