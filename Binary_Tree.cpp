#include <bits/stdc++.h>
using namespace std;

// TreeNode making
struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int _value)
    {
        value = _value;
        left = NULL;
        right = NULL;
    }
};

// printing using inorder (left-root-right) traversal recursive way
void print_inorder(TreeNode *root)
{
    if (root == NULL)
        return;
    print_inorder(root->left);
    cout << root->value << " ";
    print_inorder(root->right);
}

// printing using preorder (root-left-right) traversal recursive way
void print_preorder(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->value << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}

// printing using postorder (left-right-root) traversal recursive way
void print_postorder(TreeNode *root)
{
    if (root == NULL)
        return;
    print_postorder(root->left);
    print_postorder(root->right);
    cout << root->value << " ";
}

// printing in level wise traversal
void print_BFS(TreeNode *root)
{
    if (root == NULL)
        return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *val = q.front();
        q.pop();
        cout << val->value << " ";
        if (val->left)
            q.push(val->left);
        if (val->right)
            q.push(val->right);
    }
}

// tree to 2d vector storing level wise
vector<vector<int>> tree_to_vector_BFS(TreeNode *root)
{
    vector<vector<int>> BFS;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> vec;
        for (int i = 0; i < size; i++)
        {
            TreeNode *val = q.front();
            q.pop();
            if (val)
            {
                q.push(val->left);
                q.push(val->right);
                vec.push_back(val->value);
            }
        }
        if (!vec.empty())
            BFS.push_back(vec);
    }
    return BFS;
}

// preorder (root-left-right) traversal with iteration
void print_preorder_iterative(TreeNode *root)
{
    if (root == NULL)
        return;
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        TreeNode *val = st.top();
        st.pop();
        cout << val->value << " ";
        if (val->right)
            st.push(val->right);
        if (val->left)
            st.push(val->left);
    }
    cout << endl;
}

// inorder (left-root-right) traversal with iteration
void print_inorder_iterative(TreeNode *root)
{
    stack<TreeNode *> st;
    TreeNode *node = root;
    while (true)
    {
        if (node)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty())
                break;
            node = st.top();
            cout << node->value << " ";
            st.pop();
            node = node->right;
        }
    }
    cout << endl;
}

// postorder (left-right-root) traversal with iteration
void print_postorder_iterative(TreeNode *root)
{
    if(root == NULL)
        return;
    stack<TreeNode *> st1, st2;
    st1.push(root);
    while(!st1.empty())
    {
        TreeNode *val = st1.top();
        st1.pop();
        st2.push(val);
        if(val->left)
            st1.push(val->left);
        if(val->right)
            st1.push(val->right);
    }
    while(!st2.empty())
    {
        cout << st2.top()->value << " ";
        st2.pop();
    }
    cout << endl;
}

int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);

    print_preorder(root);
    cout << endl;

    print_inorder(root);
    cout << endl;

    print_postorder(root);
    cout << endl;

    print_BFS(root);
    cout << endl;

    print_preorder_iterative(root);
    print_inorder_iterative(root);
    print_postorder_iterative(root);

    vector<vector<int>> vec = tree_to_vector_BFS(root);
    for (auto i : vec)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}