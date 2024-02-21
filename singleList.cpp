#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "insert at head" << endl
             << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // akpon last node e ace
    temp->next = newNode;
    cout << endl
         << "insert at tail" << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << "your linked list :";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "inser at head" << endl
         << endl;
}
void insert_at_position(Node *head, int v, int pos)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "inserted at position" << pos << endl
         << endl;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head not avilavlened" << endl
             << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "deleted head" << endl
         << endl;
}
void delete_from_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid index" << endl
                 << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << "Invalid index" << endl
             << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl
         << "deleted position"<<pos << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "option 1: insert at tail" << endl;
        cout << "option 2:print the list" << endl;
        cout << "option 3:inser at head" << endl;
        cout << "option 4:insert at any" << endl;
        cout << "option 5:delete head" << endl;
        cout << "option 6:delete from any" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "please enter value" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int v;
            cout << "Please enter value :";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 4)
        {
            int pos, v;
            cout << "Enter position :";
            cin >> pos;
            cout << "Enter value :";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, v, pos);
            }
        }
        else if (op == 5)
        {
            delete_head(head);
        }
        else if (op == 6)
        {
            int pos;
            cout << "Enter position:";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
    }

    return 0;
}