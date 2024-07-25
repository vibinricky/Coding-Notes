#include <bits/stdc++.h>
using namespace std;

struct Activity {
    int start, finish; 
};

bool Act_compare(Activity A1, Activity A2) {
    return A1.finish < A2.finish;
}

void Activity_selection(Activity Arr[],int n){

    sort(Arr, Arr+n, Act_compare);

    int i = 0;
    cout << "(" << Arr[i].start << " ,"<< Arr[i].finish<<") ";

    for (int j = 1; j<n; j++) {
        if(Arr[j].start >= Arr[i].finish){
            cout << "(" << Arr[j].start << " ,"<< Arr[j].finish<<") ";
            i = j;
        }
    }
}

int main()
{
    Activity Arr[] = { { 5, 9 }, { 1, 2 }, { 3, 4 },{ 0, 6 }, { 5, 7 }, { 8, 9 } };
    Activity Arr2[] = {{12,25},{10,20},{20,30}};
    int n = sizeof(Arr2)/sizeof(Arr2[0]);

    Activity_selection(Arr2, n);

    return 0;
}