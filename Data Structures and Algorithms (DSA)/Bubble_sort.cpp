#include <iostream>
using namespace std;

int main()
{
    int lst[] = {15,16,6,8,5};
    int n = 5;
    
    for(int i=0; i<n-1; i++){
        int flag = 1;
        for(int j=0; j<n-1-i; j++){
            if(lst[j]>lst[j+1]){
                swap(lst[j],lst[j+1]);
                flag = 0;
            }
        }

        if(flag){
            break;
        }
    }

    for(int k=0; k<n; k++){
        cout << lst[k]<<endl;
    }

    return 0;
}