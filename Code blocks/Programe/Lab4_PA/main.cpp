#include <iostream>
using namespace std;

// Definirea structurii nodului pentru arbore
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Funcția de inserare a unui nod în arbore
TreeNode* insert(TreeNode* root, int val) {
    if (root == NULL) {
        return new TreeNode(val);
    }
    if (val < root->val) {
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Funcția de traversare in-order a arborelui
void inorder(TreeNode* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

// Funcția de traversare pre-order a arborelui
void preorder(TreeNode* root) {
    if (root != NULL) {
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Funcția de traversare post-order a arborelui
void postorder(TreeNode* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
    }
}

int main() {
    // Crearea arborelui
    TreeNode* root = NULL;
    root = insert(root, 4);
    insert(root, 2);
    insert(root, 6);
    insert(root, 1);
    insert(root, 3);
    insert(root, 5);
    insert(root, 7);

    // Traversarea in-order a arborelui
    cout << "Traversarea in-order: ";
    inorder(root);
    cout << endl;

    // Traversarea pre-order a arborelui
    cout << "Traversarea pre-order: ";
    preorder(root);
    cout << endl;

    // Traversarea post-order a arborelui
    cout << "Traversarea post-order: ";
    postorder(root);
    cout << endl;

    return 0;
}
