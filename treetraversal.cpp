#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

int main()
{
    node *root = new node(20);
    node *a = new node(30);
    node *b = new node(40);
    node *c = new node(50);
    node *d = new node(60);
    node *e = new node(70);
    node *f = new node(80);
    node *g = new node(90);
    node *h = new node(100);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;
    c->left = g;
    c->right = h;
    postorder(root);

    return 0;
}