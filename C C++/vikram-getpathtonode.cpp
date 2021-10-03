// Author : Vikram D Singh
// Date :
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
bool getPath(Node *root, vector<int> &arr, int x)
{
    if (!root)
        return false;
    arr.push_back(root->data);
    if (root->data == x)
        return true;
    if (getPath(root->left, arr, x) || getPath(root->right, arr, x))
    return true;
    arr.pop_back();
    return false;
}
vector<int> Solution(Node *root, int B)
{
    vector<int> arr;
    if (root == NULL)
        return arr;
    getPath(root, arr, B);
    return arr;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    vector<int> v = Solution(root, 6);
    for (auto it : v)
        cout << it << " ";

    return 0;
}
