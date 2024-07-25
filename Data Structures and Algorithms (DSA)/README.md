# Data Structure and Types

**What are Data Structures?**

Data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently.

Depending on your requirement and project, it is important to choose the right data structure for your project. For example, if you want to store data sequentially in the memory, then you can go for the Array data structure.

# **Linked List**

## Singly Linked list

![linked list intro](https://i.imgur.com/aYYjt0W.jpg[/img])

![creating a node](https://i.imgur.com/lmh4XVf.jpg[/img])

![linked list](https://i.imgur.com/1vFwfwL.jpg[/img])

[Linked list](Linked_list_intro.cpp)

```c++
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *head = NULL;
node *temp;


void create_new_node(int new_data)
{
    node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = new_data;

    newnode->next = NULL;


    if (head == NULL){
        head = newnode;
        temp = newnode;
    } else {
         temp->next = newnode;
         temp = newnode;
    }


}

void display()
{
    temp = head;
    while(temp != NULL) {
        cout << temp->data<<endl;
        temp = temp->next;

    }
}

int len_lst(){
    int count = 0;
    temp = head;
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

void insert_beg(int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void insert_end(int data)
{
    node *newnode = new node();
    temp = head;
    newnode->data = data;
    newnode->next = NULL;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insert(int data, int pos)
{
    if (pos == 1){
        insert_beg(data);
    } else if (pos == len_lst()+1){
        insert_end(data);
    } else if (pos>len_lst() || pos < 0){
        cout << "Enter the valid value: ";
    } else {
        node *newnode = (struct node *)malloc(sizeof(struct node));
        int i = 1;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->data = data;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void delete_beg()
{
    temp = head;
    head = head->next;
    free(temp);
}

void delete_end()
{
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    // method 2: take previous node
}

void delete_node(int pos)
{
    if (pos == 1) {
        delete_beg();
    } else if(pos == len_lst()+1){
        delete_end();
    } else if (pos > len_lst() || pos <= 0) {
        cout << "Enter the valid value: ";
    } else {
        int i = 1;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }

        node *next_node = temp->next;
        temp->next = next_node->next;
        free(next_node);
    }

}

void reverse()
{
    node *current_node = head;
    node *next_node = head;
    node *prev_node = NULL;

    while(next_node != 0){
        next_node = next_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }

    head = prev_node;

}

int main(){
    int choice = 1;
    int value;
    while(choice)
    {
        cout<< "Enter data: ";
        cin>> value;
        create_new_node(value);
        cout << "Do you want to continue: ";
        cin >> choice;
    }
    display();
    cout << "------------------"<<endl;
    insert(99,3);
    display();
    cout << "------------------"<<endl;
    delete_node(5);  // pos
    display();
    cout << "------------------"<<endl;
    insert(100,1);
    insert(200,7);  // insert_end(200); end position will always change
    display();
    cout << "------------------"<<endl;
    delete_node(1);
    delete_node(6);  // delete_end();
    display();
    cout << "------------------"<<endl;
    reverse();
    display();
    return 0;
}

```

Output

```
Enter data: 1
Do you want to continue: 1
Enter data: 2
Do you want to continue: 1
Enter data: 3
Do you want to continue: 1
Enter data: 4
Do you want to continue: 1
Enter data: 5
Do you want to continue: 0
1
2
3
4
5
------------------
1
2
99
3
4
5
------------------
1
2
99
3
5
------------------
100
1
2
99
3
5
200
------------------
1
2
99
3
5
------------------
5
3
99
2
1
```

### inserting

![inserting a node](https://i.imgur.com/vtchvoi.jpg[/img])

```c++
void insert_beg(int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void insert_end(int data)
{
    node *newnode = new node();
    temp = head;
    newnode->data = data;
    newnode->next = NULL;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insert(int data, int pos)
{
    if (pos == 1){
        insert_beg(data);
    } else if (pos == len_lst()+1){
        insert_end(data);
    } else if (pos>len_lst() || pos < 0){
        cout << "Enter the valid value: ";
    } else {
        node *newnode = (struct node *)malloc(sizeof(struct node));
        int i = 1;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->data = data;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
```

### deleting

![deleting a node](https://i.imgur.com/KoFIgSS.jpg[/img])

```c++
void delete_beg()
{
    temp = head;
    head = head->next;
    free(temp);
}

void delete_end()
{
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    // method 2: take previous node
}

void delete_node(int pos)
{
    if (pos == 1) {
        delete_beg();
    } else if(pos == len_lst()+1){
        delete_end();
    } else if (pos > len_lst() || pos <= 0) {
        cout << "Enter the valid value: ";
    } else {
        int i = 1;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }

        node *next_node = temp->next;
        temp->next = next_node->next;
        free(next_node);
    }

}

```

### Reversing

![Reversing linked list pt1](https://i.imgur.com/s096FoE.jpg[/img])
![Reversing linked list pt2](https://i.imgur.com/ECdIcXJ.jpg[/img])
![Reversing linked list pt3](https://i.imgur.com/jj6jhcR.jpg[/img])
![Reversing linked list pt4](https://i.imgur.com/3Jn5amQ.jpg[/img])
![Reversing linked list pt4](https://i.imgur.com/ex5CsRM.jpg[/img])

```c++
void reverse()
{
    node *current_node = head;
    node *next_node = head;
    node *prev_node = NULL;

    while(next_node != 0){
        next_node = next_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }

    head = prev_node;

}
```

## Doubly linked list

![Doubly linked list](https://i.imgur.com/EfLvumK.jpg[/img])

![Doubly linked list 2](https://i.imgur.com/dLD2oul.jpg[/img])

[Doubly linked list](doubly_linked_list.cpp)

```c++
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
node *temp, *tail;

void create_new_node(int data)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = 0;
    newnode->prev = 0;

    if(head == NULL){
        head = newnode;
        temp = newnode;
    } else {
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
    tail = temp;
}

void display()
{
    temp = head;

    while(temp != NULL){
        cout <<temp->data<<endl;
        temp = temp->next;
    }
}

int len_lst(){
    int count = 0;
    temp = head;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

void insert_beg(int data)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    newnode->prev = NULL;
    head->prev = newnode;
    head = newnode;
}

void insert_end(int data)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void insert(int value, int pos)
{
    if (pos == 1) {
        insert_beg(value);
    } else if (pos == len_lst()+1){              // change this
        insert_end(value);
    } else if (pos<0 || pos>len_lst()){
        cout << "Enter the valid position";
    } else {
        temp = head;
        int i = 1;
        node *newnode = (struct node *)malloc(sizeof(struct node));

        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->data = value;
        newnode->prev = temp;
        newnode->next = temp->next;
        (temp->next)->prev = newnode;
        temp->next  = newnode;
    }
}

void delete_beg()
{
    temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void delete_end()
{
    temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    free(temp);
}

void delete_node(int pos)
{
    if (pos == 1) {
        delete_beg();
    } else if (pos == len_lst()+1) {
        delete_end();
    } else if (pos < 0 || pos>len_lst()) {
        cout << "Enter the valid position";
    } else {
        int i = 1;
        temp = head;
        node *next_node;
        while(i < pos-1){
            temp = temp->next;
            i++;
        }
        next_node = temp->next;

        // deleting node
        temp->next = next_node->next;
        (next_node->next)->prev = temp;
        free(next_node);
    }
}

void reverse()
{
    temp = head;

    node *current, *nextnode;
    current = head;
    while(current != NULL)
    {
        nextnode = current->next;         // swapping
        current->next = current->prev;    // current->next and
        current->prev = nextnode;         // current->prev

        current = nextnode;
    }

    swap(head, tail);

}

int main(){
    create_new_node(1);
    create_new_node(2);
    create_new_node(3);
    create_new_node(4);

    display();
    cout << "---------------"<<endl;
    insert(49,3);
    display();
    cout << "---------------"<<endl;
    delete_node(2);
    display();
    cout << "---------------"<<endl;
    insert(100,1);
    insert(200,6);
    display();
    cout << "---------------"<<endl;
    delete_node(1);
    delete_end();
    display();
    cout << "---------------"<<endl;
    reverse();
    display();
}

```

Output

```
1
2
3
4
---------------
1
2
49
3
4
---------------
1
49
3
4
---------------
100
1
49
3
4
200
---------------
1
49
3
4
---------------
4
3
49
1
```

### Inserting

![Inserting doubly](https://i.imgur.com/hUNbHmr.jpg[/img])

```c++
void insert_beg(int data)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    newnode->prev = NULL;
    head->prev = newnode;
    head = newnode;
}

void insert_end(int data)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void insert(int value, int pos)
{
    if (pos == 1) {
        insert_beg(value);
    } else if (pos == len_lst()+1){              // change this
        insert_end(value);
    } else if (pos<0 || pos>len_lst()){
        cout << "Enter the valid position";
    } else {
        temp = head;
        int i = 1;
        node *newnode = (struct node *)malloc(sizeof(struct node));

        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->data = value;
        newnode->prev = temp;
        newnode->next = temp->next;
        (temp->next)->prev = newnode;
        temp->next  = newnode;
    }
}
```

### Deleting

![img](https://i.imgur.com/Q4ZPaVA.jpg[/img])

```c++
void delete_beg()
{
    temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void delete_end()
{
    temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    free(temp);
}

void delete_node(int pos)
{
    if (pos == 1) {
        delete_beg();
    } else if (pos == len_lst()+1) {
        delete_end();
    } else if (pos < 0 || pos>len_lst()) {
        cout << "Enter the valid position";
    } else {
        int i = 1;
        temp = head;
        node *next_node;
        while(i < pos-1){
            temp = temp->next;
            i++;
        }
        next_node = temp->next;

        // deleting node
        temp->next = next_node->next;
        (next_node->next)->prev = temp;
        free(next_node);
    }
}
```

### Reversing

```c++
void reverse()
{
    temp = head;

    node *current, *nextnode;
    current = head;
    while(current != NULL)
    {
        nextnode = current->next;         // swapping
        current->next = current->prev;    // current->next and
        current->prev = nextnode;         // current->prev

        current = nextnode;
    }

    swap(head, tail);

}
```

## Circular Linked List

[circular linked list](circular_linkedList.cpp)

```c++
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    struct node *next;
};

node *head = NULL;
node *temp;


void create_new_node(int new_data)
{
    node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = new_data;

    newnode->next = NULL;


    if (head == NULL){
        head = newnode;
        temp = newnode;
    } else {
         temp->next = newnode;
         temp = newnode;
    }

    temp->next = head;  // connecting tail to the head

}

void display()
{
    temp = head;
    while(temp->next != head) {
        cout << temp->data<<endl;
        temp = temp->next;
    }
    cout << temp->data <<endl;
}

int len_lst(){
    int count = 0;
    temp = head;
    while(temp->next != head) {
        temp = temp->next;
        count++;
    }
    return count+1;
}

void insert(int data, int pos)
{
    if (pos>len_lst() || pos < 0){
        cout << "Enter the valid value: ";
    } else {
        node *newnode = (struct node *)malloc(sizeof(struct node));
        int i = 1;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        newnode->data = data;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void delete_node(int pos)
{
    int i = 1;
    temp = head;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }

    node *next_node = temp->next;
    temp->next = next_node->next;
    free(next_node);

}

void reverse()
{
    node *current_node = head;
    node *next_node = head;
    temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *prev_node = temp;

    while(next_node->next != head){
        next_node = next_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }
    next_node = next_node->next;
    current_node->next = prev_node;
    prev_node = current_node;
    current_node = next_node;

    head = prev_node;

}

int main(){
    int choice = 1;
    int value;
    while(choice)
    {
        cout<< "Enter data: ";
        cin>> value;
        create_new_node(value);
        cout << "Do you want to continue: ";
        cin >> choice;
    }
    display();
    cout << "----------------------"<<endl;
    cout << temp->next->data << endl;
    cout << "----------------------"<<endl;
    cout<<len_lst()<<endl;
    cout << "----------------------"<<endl;
    insert(200,3);
    display();
    cout << "----------------------"<<endl;
    delete_node(4);
    display();
    cout << "----------------------"<<endl;
    reverse();
    display();

    return 0;
}

```

# **Sorting**

## Bubble sort

![Bubble sort](https://i.imgur.com/JwhzMxx.jpg[/img])

```c++
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
```

Output

```
5
6
8
15
16
```

## Insertion sort

![Insertion sort](https://i.imgur.com/k745QzG.jpg[/img])

[Insertion sort](Insertion_sort.cpp)

```c++
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
```

Output

```
1
2
4
5
6
10
```

## Selection sort

![Selection sort pt1](https://i.imgur.com/vmdhKR2.jpg[/img])
![Selection sort pt2](https://i.imgur.com/to7v8Qp.jpg[/img])

[Selection sort](Selection_sort.cpp)

```c++
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
```

Output

```
1
3
4
7
8
10
```

## Quick sort

![Quick sort pt1](https://i.imgur.com/Bb2rwSY.jpg[/img])

![Quick sort pt2](https://i.imgur.com/BMMC0hl.jpg[/img])

[Quick sort](Quick_sort.cpp)

```c++
#include <iostream>
using namespace std;

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end)
    {
        while(arr[start] <= pivot)
        {
            start++;
        }
        while(arr[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;
}

void Quicksort(int arr[],int lb, int ub)
{
     if(lb<ub)
     {
        int loc = partition(arr,lb,ub);
        Quicksort(arr,lb,loc-1);
        Quicksort(arr,loc+1,ub);
     }
}

int main()
{
    int arr[] = {7,6,10,5,9,2,1,15,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lb = 0;
    int ub = n-1;

    Quicksort(arr,lb,ub);

    for(int k = 0; k<n; k++)
    {
        cout << arr[k]<<endl;
    }

}
```

Output

```
1
2
5
6
7
7
9
10
15
```

## Merge sort

![Merge sort pt1](https://i.imgur.com/nWhzJ2L.jpg[/img])

![Merge sort pt1](https://i.imgur.com/HJLSahn.jpg[/img])

[Merge sort](Merge_sort.cpp)

```c++
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
```

Output

```
1
2
5
6
7
7
9
10
15
```

## Counting sort

![Counting sort pt1](https://i.imgur.com/bWQEkgu.jpg[/img])

![Counting sort pt2](https://i.imgur.com/ighSoBO.jpg[/img])

[counting sort](count_sort.cpp)

```c++
#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[] = {2,1,1,0,2,5,4,0,2,8,7,9,2,0,1,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    for(i = 1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    int k = max;
    int count[k+1];
    int b[n];

    for(i=0; i<=k; i++)
    {
        count[i] = 0;
    }

// counting sort
    for(i=0; i<n; i++)
    {
        count[arr[i]]++;
    }

    for(i=1; i<=k; i++)
    {
        count[i] = count[i]+count[i-1];
    }

    for(i = n-1; i>=0; i--)
    {
        b[--count[arr[i]]] = arr[i];
    }

    for(i = 0; i<n; i++)
    {
        arr[i] = b[i];
    }

// Printing the array
    for(i = 0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }


}
```

Output

```
0
0
0
1
1
1
2
2
2
2
4
5
7
8
9
9
```

# **Search**

## Linear search

[Linear search](Linear_search.cpp)

```c++
#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[] = {1,4,7,3,0,7,8};
    int data = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag = 0;

    for(i=0; i<n; i++)
    {
        if (arr[i] == data)
        {
            cout <<"Location of the data: "<<i<<endl;
            flag = 1;
        }
    }

    if (flag)
    {
        cout << "data found";
    } else {
        cout << "data is not found";
    }

}
```

Output

```
Location of the data: 2
Location of the data: 5
data found
```

## Binary search

![Binary search pt1](https://i.imgur.com/ERGhQlW.jpg[/img])

![Binary search pt2](https://i.imgur.com/IxwOj3Y.jpg[/img])

[Binary Search](Binary_search.cpp)

```c++
void binarysearch(int arr[],int n,int data,int l,int r)
{
    int mid = (l+r)/2;
    //cout << l<<","<<r<<","<<mid<<endl;
    if (l<r)
    {
        if (arr[mid] == data)
        {
            cout <<"Index of data in new sorted array: "<<mid;
        }
        if (data < arr[mid])
        {
            binarysearch(arr,n,data,l,mid-1);
        }
        if (data > arr[mid])
        {
            binarysearch(arr,n,data,mid+1,r);
        }
    }
}
```

Output

```
Index of data in new sorted array: 4
```

# **Trees**

**What is a Tree data structure?**

A tree is non-linear and a hierarchical data structure consisting of a collection of nodes such that each node of the tree stores a value and a list of references to other nodes (the “children”).

This data structure is a specialized method to organize and store data in the computer to be used more effectively. It consists of a central node, structural nodes, and sub-nodes, which are connected via edges. We can also say that tree data structure has roots, branches, and leaves connected with one another.

![Tree](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20201129105858/Tree-Basic-Terminology.png)

**Basic Terminologies In Tree Data Structure:**

- **Parent Node:** The node which is a predecessor of a node is called the parent node of that node. {2} is the parent node of {6, 7}.
- **Child Node:** The node which is the immediate successor of a node is called the child node of that node. Examples: {6, 7} are the child nodes of {2}.
- **Root Node:** The topmost node of a tree or the node which does not have any parent node is called the root node. {1} is the root node of the tree. A non-empty tree must contain exactly one root node and exactly one path from the root to all other nodes of the tree.
- **Leaf Node or External Node:** The nodes which do not have any child nodes are called leaf nodes. {6, 14, 8, 9, 15, 16, 4, 11, 12, 17, 18, 19} are the leaf nodes of the tree.
- **Ancestor of a Node:** Any predecessor nodes on the path of the root to that node are called Ancestors of that node. {1, 2} are the ancestor nodes of the node {7}
- **Descendant:** Any successor node on the path from the leaf node to that node. {7, 14} are the descendants of the node. {2}.
- **Sibling:** Children of the same parent node are called siblings. {8, 9, 10} are called siblings.
  Level of a node: The count of edges on the path from the root node to that node. The root node has level 0.
- **Internal node:** A node with at least one child is called Internal Node.
- **Neighbour of a Node:** Parent or child nodes of that node are called neighbors of that node.
- **Subtree:** Any node of the tree along with its descendant.

**Properties of a Tree:**

- **Number of edges:** An edge can be defined as the connection between two nodes. If a tree has N nodes then it will have (N-1) edges. There is only one path from each node to any other node of the tree.
- **Depth of a node:** The depth of a node is defined as the length of the path from the root to that node. Each edge adds 1 unit of length to the path. So, it can also be defined as the number of edges in the path from the root of the tree to the node.
- **Height of a node:** The height of a node can be defined as the length of the longest path from the node to a leaf node of the tree.
- **Height of the Tree:** The height of a tree is the length of the longest path from the root of the tree to a leaf node of the tree.
- **Degree of a Node:** The total count of subtrees attached to that node is called the degree of the node. The degree of a leaf node must be 0. The degree of a tree is the maximum degree of a node among all the nodes in the tree.

![subtree](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20201129092959/Recursive-Tree1.png)

## Binary tree

A binary tree is a tree data structure in which each parent node can have at most two children. Each node of a binary tree consists of three items:

- data item
- address of left child
- address of right child

### Types of Binary Tree

1. **Full Binary Tree**
   A full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.

![Full Binary Tree](https://cdn.programiz.com/sites/tutorial2program/files/full-binary-tree_0.png)

2. **Perfect Binary Tree**
   A perfect binary tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.

![Perfect Binary Tree](https://cdn.programiz.com/sites/tutorial2program/files/perfect-binary-tree_0.png)

3. **Complete Binary Tree**
   A complete binary tree is just like a full binary tree, but with two major differences

- Every level must be completely filled
- All the leaf elements must lean towards the left.
- The last leaf element might not have a right sibling i.e. a complete binary tree doesn't have to be a full binary tree.

![Complete Binary Tree](https://cdn.programiz.com/sites/tutorial2program/files/complete-binary-tree_0.png)

4. **Degenerate or Pathological Tree**
   A degenerate or pathological tree is the tree having a single child either left or right.

![Degenerate or Pathological Tree](https://cdn.programiz.com/sites/tutorial2program/files/degenerate-binary-tree_0.png)

5. **Skewed Binary Tree**
   A skewed binary tree is a pathological/degenerate tree in which the tree is either dominated by the left nodes or the right nodes. Thus, there are two types of skewed binary tree: left-skewed binary tree and right-skewed binary tree.

![Skewed Binary Tree](https://cdn.programiz.com/sites/tutorial2program/files/skewed-binary-tree_0.png)

6. **Balanced Binary Tree**
   It is a type of binary tree in which the difference between the height of the left and the right subtree for each node is either 0 or 1.

![Balanced Binary Tree](https://cdn.programiz.com/sites/tutorial2program/files/height-balanced_1.png)

## Implementation

[Binary Tree](Binary_Tree.cpp)

```c++
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;
    node *newnode = (struct node*)malloc(sizeof(struct node));
    cout << "Enter the data: "<<endl; // -1 to end
    cin >> x;
    newnode->data = x;
    if (x == -1){
        return NULL;
    }

    cout << "Enter the left child of "<<x<<endl;
    newnode->left = create();
    cout << "Enter the right child of "<<x<<endl;
    newnode->right = create();
    return newnode;
}

void preorder(node *root)  // root left right
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)   // left root right
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}

void postorder(node *root)  // left right root
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data<<" ";
}


int main()
{
    node *root = create();

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);

    return 0;
}

```

Output

```
Enter the data:
1
Enter the left child of 1
Enter the data:
2
Enter the left child of 2
Enter the data:
-1
Enter the right child of 2
Enter the data:
-1
Enter the right child of 1
Enter the data:
3
Enter the left child of 3
Enter the data:
-1
Enter the right child of 3
Enter the data:
-1
1 2 3
2 1 3
2 3 1
```

## Binary tree representation / array

## Binary tree Tranversal

**Preoreder**

```c++
void preorder(node *root)  // root left right
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
```

**Inorder**

```c++
void inorder(node *root)   // left root right
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}
```

**Postorder**

```c++
void postorder(node *root)  // left right root
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data<<" ";
}
```

## Construct a binary tree

**inorder and preorder**

**inorder and postorder**

**preorder and postorder**

## Binary Search Tree **(BST)**

[Binary Search Tree](BST.cpp)

```c++
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newnodedata(int data)
{
    node *new_node = new node();
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

struct node* insert(node *root,int data)
{
    if (root == NULL)
    {
        root = newnodedata(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

struct node* search(node *root, int data)
{
    if (root == NULL) return NULL;
    if (root->data == data) return root;
    else if (data < root->data) return search(root->left, data);
    else return search(root->right, data);     // ask doubt
}

struct node* minnode(node *root)
{
    while(root && root->left != NULL)
    {
        root = root->left;                  // ask doubt
    }
    return root;
}

struct node* maxnode(node *root)
{
    while(root && root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node* deletenode(node *root, int data)
{
    node *ptr = search(root, data);

    if (ptr == NULL)
    {
        return NULL;
    }
    if (ptr->left == NULL && ptr->right == NULL)
    {
        node *temp = ptr;
        delete ptr;
        temp == NULL;
    }
    else if(ptr->left == NULL)
    {
        node *temp = ptr;
        ptr = ptr->right;
        delete temp;
    }
    else if(ptr->right == NULL)
    {
        node *temp = ptr;
        ptr = ptr->left;
        delete temp;
    }
    else
    {
        node *min = minnode(ptr->right);
        root->right =  deletenode(root,min->data);

    }
    return root;
}

struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL)
        return root;

    // If the key to be deleted is
    // smaller than the root's
    // key, then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);

    // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    // if key is same as root's key, then This is the node
    // to be deleted
    else {
        // node has no child
        if (root->left==NULL and root->right==NULL)
            return NULL;

        // node with only one child or no child
        else if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        struct node* temp = minnode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(node *root)   // left root right
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}

int main()
{
    node *root = NULL;
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 6);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 9);

    inorder(root);

    int x;
    cout << "enter to search: "; cin >> x;

    node *search_value = search(root,x);
    cout<< "data = "<<search_value->data<< ", loc = "<<search_value<<endl;

    cout << "min = "<<minnode(root)->data<<endl;
    cout << "max = "<<maxnode(root)->data<<endl;

    root = deleteNode(root, 7);

    inorder(root);

    return 0;
}
```

Output

```
2 3 4 6 7 9 enter to search: 6
data = 6, loc = 0x9317a0
min = 2
max = 9
2 3 4 6 9
```

## Expression Tree

[Expression Tree](Expression_Tree.cpp)

```c++
#include <iostream>
#include <stack>
using namespace std;

// Tree Structure
typedef struct node
{
	char data;
	struct node *left, *right;
} * nptr;

// Function to create new node
nptr newNode(char c)
{
	nptr n = new node;
	n->data = c;
	n->left = n->right = nullptr;
	return n;
}

// Function to build Expression Tree
nptr build(string& s)
{

	// Stack to hold nodes
	stack<nptr> stN;

	// Stack to hold chars
	stack<char> stC;
	nptr t, t1, t2;

	// Prioritising the operators
	int p[123] = { 0 };
	p['+'] = p['-'] = 1, p['/'] = p['*'] = 2, p['^'] = 3,
	p[')'] = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(') {

			// Push '(' in char stack
			stC.push(s[i]);
		}

		// Push the operands in node stack
		else if (isalpha(s[i]))
		{
			t = newNode(s[i]);
			stN.push(t);
		}
		else if (p[s[i]] > 0)
		{
			// If an operator with lower or
			// same associativity appears
			while (!stC.empty() && stC.top() != '(' && ((s[i] != '^' && p[stC.top()] >= p[s[i]]) || (s[i] == '^' && p[stC.top()] > p[s[i]])))
			{

				// Get and remove the top element
				// from the character stack
				t = newNode(stC.top());
				stC.pop();

				// Get and remove the top element
				// from the node stack
				t1 = stN.top();
				stN.pop();

				// Get and remove the currently top
				// element from the node stack
				t2 = stN.top();
				stN.pop();

				// Update the tree
				t->left = t2;
				t->right = t1;

				// Push the node to the node stack
				stN.push(t);
			}

			// Push s[i] to char stack
			stC.push(s[i]);
		}
		else if (s[i] == ')') {
			while (!stC.empty() && stC.top() != '(')
			{
				t = newNode(stC.top());
				stC.pop();
				t1 = stN.top();
				stN.pop();
				t2 = stN.top();
				stN.pop();
				t->left = t2;
				t->right = t1;
				stN.push(t);
			}
			stC.pop();
		}
	}
	t = stN.top();
	return t;
}

// Function to print the post order
// traversal of the tree
void postorder(nptr root)
{
	if (root)
	{
		postorder(root->left);
		postorder(root->right);
		cout << root->data;
	}
}

void preorder(nptr root)
{
    if (root)
    {
        cout << root->data;
        preorder(root->left);
        preorder(root->right);
    }
}

// Driver code
int main()
{
	string s = "(a^b^(c/d/e-f)^(x*y-m*n))";
	s = "(" + s;
	s += ")";
	nptr root = build(s);

	// Function call
    cout << "Infix expression: "<< s<<endl;
    cout << "Postfix expression: ";
	postorder(root);
    cout <<endl;
    cout << "Prefix expression: ";
    preorder(root);

	return 0;
}

```

Output

```
Infix expression: ((a^b^(c/d/e-f)^(x*y-m*n)))
Postfix expression: abcd/e/f-xy*mn*-^^^
Prefix expression: ^a^b^-//cdef-*xy*mn
```

# Heap Data Structures

[Max Heap](Max_Heap.cpp)

```c++
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

```

Output

```
5 4 3 2

15 5 3 2 4

20 5 15 2 4 3
```

[Min Heap]

```c++

```

## Heap Sort

[Heap Sort](Heap_sort.cpp)

```c++
#include <iostream>
using namespace std;


void Heapify(int Arr[], int n, int i)
{
    int largest = i;
    int l = (2*i)+1;
    int r = (2*i)+2;
    if (l< n && Arr[l]>Arr[largest])
    {
        largest = l;
    }
    if (r< n && Arr[r]>Arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(Arr[i],Arr[largest]);
        Heapify(Arr, n, largest);
    }

}

void HeapSort(int Arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(Arr, n, i);

    for (int i = n-1; i>=0; i--)
    {
        swap(Arr[0],Arr[i]);

        Heapify(Arr, i, 0);
    }
}


int main()
{
    int Arr[] = {15,5,20,1,17,10,30};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    HeapSort(Arr, n);

    for(int i = 0; i<n; i++)
        cout << Arr[i] << " ";
}

```

Output

```
1 5 10 15 17 20 30
```

# AVL Tree

[AVL Tree part 1](AVL.cpp)

```c++
#include<iostream>
using namespace std;

class Node
{
	public:
	int key;
	Node *left;
	Node *right;
	int height;
};

int max(int a, int b);

int height(Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

int max(int a, int b)
{
	return (a > b)? a : b;
}


Node* newNode(int key)
{
	Node* node = new Node();
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;

	return(node);
}


Node *rightRotate(Node *y)
{
	Node *x = y->left;
	Node *T2 = x->right;

	x->right = y;
	y->left = T2;

	y->height = max(height(y->left),
					height(y->right)) + 1;
	x->height = max(height(x->left),
					height(x->right)) + 1;

	return x;
}

Node *leftRotate(Node *x)
{
	Node *y = x->right;
	Node *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = max(height(x->left),
					height(x->right)) + 1;
	y->height = max(height(y->left),
					height(y->right)) + 1;

	return y;
}


int getBalance(Node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}


Node* insert(Node* node, int key)
{

	if (node == NULL)
		return(newNode(key));

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else
		return node;

	node->height = 1 + max(height(node->left),
						height(node->right));


	int balance = getBalance(node);


	// Left Left Case
	if (balance > 1 && key < node->left->key)
		return rightRotate(node);

	// Right Right Case
	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

	// Left Right Case
	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	// Right Left Case
	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	return node;
}


void preOrder(Node *root)
{
	if(root != NULL)
	{
		cout << root->key << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}


int main()
{
	Node *root = NULL;

	root = insert(root, 10);
	root = insert(root, 20);
	root = insert(root, 30);
	root = insert(root, 40);
	root = insert(root, 50);
	root = insert(root, 25);


	cout << "Preorder traversal of the "
			"constructed AVL tree is \n";
	preOrder(root);

	return 0;
}
```

Output

```
Preorder traversal of the constructed AVL tree is
30 20 10 25 40 50
```

[AVL Tree part 2](AVL2.cpp)

```c++
#include<iostream>
using namespace std;

class Node
{
	public:
	int key;
	Node *left;
	Node *right;
	int height;
};

int max(int a, int b);


int height(Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

int max(int a, int b)
{
	return (a > b)? a : b;
}

Node* newNode(int key)
{
	Node* node = new Node();
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;

	return(node);
}

Node *rightRotate(Node *y)
{
	Node *x = y->left;
	Node *T2 = x->right;

	x->right = y;
	y->left = T2;

	y->height = max(height(y->left),
					height(y->right)) + 1;
	x->height = max(height(x->left),
					height(x->right)) + 1;

	return x;
}

Node *leftRotate(Node *x)
{
	Node *y = x->right;
	Node *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = max(height(x->left),
					height(x->right)) + 1;
	y->height = max(height(y->left),
					height(y->right)) + 1;

	return y;
}

int getBalance(Node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) -
		height(N->right);
}

Node* insert(Node* node, int key)
{
	if (node == NULL)
		return(newNode(key));

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else
		return node;

	node->height = 1 + max(height(node->left),
						height(node->right));

	int balance = getBalance(node);


	// Left Left Case
	if (balance > 1 && key < node->left->key)
		return rightRotate(node);

	// Right Right Case
	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

	// Left Right Case
	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	// Right Left Case
	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	return node;
}

Node * minValueNode(Node* node)
{
	Node* current = node;

	while (current->left != NULL)
		current = current->left;

	return current;
}

Node* deleteNode(Node* root, int key)
{

	if (root == NULL)
		return root;

	if ( key < root->key )
		root->left = deleteNode(root->left, key);

	else if( key > root->key )
		root->right = deleteNode(root->right, key);

	else
	{
		if( (root->left == NULL) ||
			(root->right == NULL) )
		{
			Node *temp = root->left ?
						root->left :
						root->right;

			if (temp == NULL)
			{
				temp = root;
				root = NULL;
			}
			else
			*root = *temp;

			free(temp);
		}
		else
		{
			Node* temp = minValueNode(root->right);

			root->key = temp->key;

			root->right = deleteNode(root->right,
									temp->key);
		}
	}

	if (root == NULL)
	return root;

	root->height = 1 + max(height(root->left),
						height(root->right));

	int balance = getBalance(root);

	// Left Left Case
	if (balance > 1 &&
		getBalance(root->left) >= 0)
		return rightRotate(root);

	// Left Right Case
	if (balance > 1 &&
		getBalance(root->left) < 0)
	{
		root->left = leftRotate(root->left);
		return rightRotate(root);
	}

	// Right Right Case
	if (balance < -1 &&
		getBalance(root->right) <= 0)
		return leftRotate(root);

	// Right Left Case
	if (balance < -1 &&
		getBalance(root->right) > 0)
	{
		root->right = rightRotate(root->right);
		return leftRotate(root);
	}

	return root;
}

void preOrder(Node *root)
{
	if(root != NULL)
	{
		cout << root->key << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

int main()
{
Node *root = NULL;

	root = insert(root, 9);
	root = insert(root, 5);
	root = insert(root, 10);
	root = insert(root, 0);
	root = insert(root, 6);
	root = insert(root, 11);
	root = insert(root, -1);
	root = insert(root, 1);
	root = insert(root, 2);


	cout << "Preorder traversal of the "
			"constructed AVL tree is \n";
	preOrder(root);

	root = deleteNode(root, 10);

	cout << "\nPreorder traversal after"
		<< " deletion of 10 \n";
	preOrder(root);

	return 0;
}
```

Output

```
Preorder traversal of the constructed AVL tree is
9 1 0 -1 5 2 6 10 11
Preorder traversal after deletion of 10
1 0 -1 9 5 2 6 11
```

# Tower of Hanoi
