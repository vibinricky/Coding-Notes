# **Design and Analysis of Algorithms**

# Greedy Strategy

- A global optimal solution can be arrived by local optimal choice.
- For Finding the solutions to the problem the sub-problems are solved and best form these sub problems is considered.

**Applications**

## Activity Selection Problem

**Problem:**
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

> The greedy choice is to always pick the next activity whose finish time is the least among the remaining activities and the start time is more than or equal to the finish time of the previously selected activity. We can sort the activities according to their finishing time so that we always consider the next activity as the minimum finishing time activity

Follow the given steps to solve the problem:

- Sort the activities according to their finishing time
- Select the first activity from the sorted array and print it
- Do the following for the remaining activities in the sorted array
- If the start time of this activity is greater than or equal to the finish time of the previously selected activity then select this activity and print it

**Example 1:**
| Activity | A1 | A2 |A3|
| :--- | :----: | :---: |:---:|
| | 10 | 12 | 20 |
| | 20 | 25 | 30 |

**Ans:**
Input: start[] = {10, 12, 20}, finish[] = {20, 25, 30}
Output: 0 2
Explanation: A person can perform at most two activities. The
maximum set of activities that can be executed
is {0, 2} [ These are indexes in start[] and finish[] ]

**Example2**

> Note: In the implementation, it is assumed that the activities are already sorted according to their finish time

[Activity Selection](Activity_Selection.cpp)

```c++
// C++ program for activity selection problem.

// The following implementation assumes that the activities
// are already sorted according to their finish time
#include <bits/stdc++.h>
using namespace std;

// Prints a maximum set of activities that can be done by a
// single person, one at a time.
void printMaxActivities(int s[], int f[], int n)
{
	int i, j;

	cout << "Following activities are selected" << endl;

	// The first activity always gets selected
	i = 0;
	cout << i << " ";

	// Consider rest of the activities
	for (j = 1; j < n; j++) {
		// If this activity has start time greater than or
		// equal to the finish time of previously selected
		// activity, then select it
		if (s[j] >= f[i]) {
			cout << j << " ";
			i = j;
		}
	}
}

// Driver code
int main()
{
	int s[] = { 1, 3, 0, 5, 8, 5 };
	int f[] = { 2, 4, 6, 7, 9, 9 };
	int n = sizeof(s) / sizeof(s[0]);

	// Function call
	printMaxActivities(s, f, n);
	return 0;
}
```

Output

```
Following activities are selected
0 1 3 4
```

![Activityselector1](https://i.imgur.com/3gRtG00.jpg[/img])
![Activityselector2](https://i.imgur.com/JfFs7Um.jpg[/img])
![Activityselector3](https://i.imgur.com/z2g1x8k.jpg[/img])
![Activityselector4](https://i.imgur.com/uL0l2kf.jpg[/img])

[Activity Selection with Sort](Activity_Selection_withsort.cpp)

```c++
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
    int n = sizeof(Arr)/sizeof(Arr[0]);

    Activity_selection(Arr, n);

    return 0;
}
```

Output

```
(1 ,2) (3 ,4) (5 ,7) (8 ,9)
```

## Huffman coding

![Huffman coding1](https://i.imgur.com/YmnhKXT.jpg[/img])
![Huffman coding2](https://i.imgur.com/0HjdI92.jpg[/img])
![Huffman coding3](https://i.imgur.com/684LKex.jpg[/img])
![Huffman coding4](https://i.imgur.com/awWMwdD.jpg[/img])

### Encoding

[]

```c++

```

### Decoding

## Fractional Knapsack Problem

![Fractional Knapsack 1](https://i.imgur.com/Yd9ZGoJ.jpg[/img])
![Fractional Knapsack 2](https://i.imgur.com/OApr2jb.jpg[/img])
![Fractional Knapsack 3](https://i.imgur.com/Ls8d019.jpg[/img])
![Fractional Knapsack 4](https://i.imgur.com/ZzLWXwC.jpg[/img])

## Job Sequence Problem

## Prim's algorithm for minimum spanning tree
