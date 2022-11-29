#include<iostream>

using namespace std;

struct node {
    int data;
    node* right;
    node* left;

    node(int val) {
        data = val;
        right = left = NULL;
    }
};

void preorder(node *root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node *root) {
    if(root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

node* insertNode(int val, node *n) {
    if(n == NULL)
        return new node(val);
    if(val < n->data)
        n->left = insertNode(val, n->left);
    else if(val >= n->data)
        n->right = insertNode(val, n->right);

    return n;
}

int main() {
    node *root = NULL;
    int x;

    cout << "Enter the values(-1 to exit): " << endl;
    while(1) {
        cin >> x;
        if(x == -1) break;
        root = insertNode(x, root);
    }

    cout << endl << "Preorder : "; preorder(root);
    cout << endl << "Inorder : "; inorder(root);
    cout << endl << "Postorder : "; postorder(root);

    return 0;
}
