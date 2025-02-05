// delete forst node from first in Doubly linked list
#include<iostream>
using namespace std;
// stract for node
struct node
{
    int data;
    node *pre;
    node *next;
};

// for delete first 
void delete_first(node **start)
{
    if (*start == NULL)
    {
        cout << "Doubly linked list is underflow." << endl;
    }
    else
    {
        (*start)->next->pre = NULL;
        *start = (*start)->next;
    }
}

// for display DLL
void displayList(node *ptr)
{
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
int main()
{
    node *first = new node();
    node *second = new node();
    node *third = new node();

    first->data = 76;
    first->pre = NULL;
    first->next = second;

    second->data = 32;
    second->pre = first;
    second->next = third;

    third->data = 51;
    third->pre = second;
    third->next = NULL;

    cout<<"original Doubly linked list"<<endl;
    displayList(first);

    delete_first(&first);
    
    cout<<"\nDoubly linked list after delete first node"<<endl;
    displayList(first);
    return 0;
}

