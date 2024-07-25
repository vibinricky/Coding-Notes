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
