#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node
{
public:
    int key;
    node *left,*right;
};
node* newnode(int key)
{
    node* Node = new node();
    Node->key = key;
    Node->left = Node->right = NULL;
}
node *rightrotate(node *x)
{
    node *y = x->left;
    x->left = y-> right;
    y->right = x;
    return y;
}
node *lefttrotate(node *x)
{
    node *y = x->right;
    x->right = y->left;
    y->left = x;
    return y;
}
void preorder(node *root)
{
    if(root!= NULL)
    {
        cout<<" "<<root->key;
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node *root)
{
    if(root!= NULL)
    {
        inorder(root->left);
        cout<<" "<<root->key;
        inorder(root->right);
    }
}
void postorder(node *root)
{
    if(root!= NULL)
    {
        cout<<" "<<root->key;
        preorder(root->left);
        preorder(root->right);
    }
}
