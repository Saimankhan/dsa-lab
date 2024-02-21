#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void print_normal(Node *head)
{
    Node *temp = head;
    cout << "normal print:";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    cout << "reverse print:";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
    cout << endl
         << endl
         << "inserted at position" << pos << endl
         << endl;
}
void delete_head(Node *&head, Node *&tail) {
    Node *deleteNode = head;
    head=head->next;
    delete deleteNode;
    if(head==NULL) {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
void delete_tail(Node *&head, Node *&tail) {
    Node *deleteNode = tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail==NULL) {
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void delete_from_any_position(Node *head,  int pos) {
    Node*temp=head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node*deleteNode = temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete deleteNode;
}

int main()
{
    //     Node *head = new Node(1);
    //     Node *a = new Node(2);
    //     Node *b = new Node(3);
    //     Node *c = new Node(4);
    //    // Node *d = new Node(5);
    //     Node *tail=c;

    //     head->next = a;
    //     a->prev = head;
    //     a->next = b;
    //     b->prev = a;
    //     b->next =c;
    //     c->prev = b;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cout << "option 1 :insert at head" << endl;
        cout << "option 2 :print linked list normal" << endl;
        cout << "option 4 :reverse print linked list" << endl;
        cout << "option 4 :insrt at tail" << endl;
        cout << "option 5 :insert at position" << endl;
        cout << "option 6 :delete head" << endl;
        cout << "option 7 :delete tail" << endl;
        cout << "option 8:delete from any position" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;

            cout << "Insert at head :" << endl;
            cin >> v;
            insert_at_head(head, tail, v);
        }
        else if (op == 2)
        {
            print_normal(head);
        }
        else if (op == 3)
        {
            print_reverse(tail);
        }

        else if (op == 4)
        {
            int v;

            cout << "Insert at tail" << endl;
            cin >> v;
            insert_at_tail(head, tail, v);
        }
        else if (op == 5)
        {
            
            cout << "Enter position:";
            int pos;
            cin >> pos;

            
            cout << "Enter value:";
            int v;
            cin >> v;
            insert_at_position(head, pos, v);
        }
        else if (op == 6){
            delete_head(head,tail);
        }
        else if (op ==7){
            delete_tail(head,tail);
        }
        else if (op ==8){
            int pos;
            cout << "Enter position:";
            cin >> pos;
            delete_from_any_position(head,pos);
        }
    }

    return 0;
}