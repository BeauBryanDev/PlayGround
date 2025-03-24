/*AVL Tree */

#include <iostream>
using namespace std;

class Node 
{
    public:
        int key;
        Node *left;
        Node *right;
        int height;
        
        Node(int x) 
        {
            key = x;
            left = right = NULL;
            height = 1;
        }
        
};

int height(Node *N)
{       
    if (N == NULL) 
        return 0;
            
    return N->height;
}

int max(int a, int b)
{       
    return (a > b)? a : b;
}

int getBalance(Node *N)
{
    if (N == NULL)
        return 0;
            
    return height(N->left) - height(N->right);
}

Node *leftRotate(Node *node)
{
    Node *rightSubtree = node->right;
    Node *leftNodeOfRightSubtree = rightSubtree->left;

    rightSubtree->left = node;
    node->right = leftNodeOfRightSubtree;

    node->height = max(height(node->left), height(node->right)) + 1;
    rightSubtree->height = max(height(rightSubtree->left), height(rightSubtree->right)) + 1;

    return rightSubtree;
}

Node *rightRotate(Node *node)
{
    Node *leftSubtree = node->left;
    Node *rightNodeOfLeftSubtree = leftSubtree->right;
    
    leftSubtree->right = node;
    node->left = rightNodeOfLeftSubtree;
    
    node->height = max(height(node->left), height(node->right)) + 1;
    leftSubtree->height = max(height(leftSubtree->left), height(leftSubtree->right)) + 1;
    
    return leftSubtree;
}

Node* insert(Node* node, int key)
{
    if (node == NULL)
        return(new Node(key));

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;
            
    node->height = 1 + max(height(node->left), height(node->right));
    
    int balance = getBalance(node);
    
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);
    if (balance > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void preorder(Node* root) 
{
    if(root == NULL) 
        return;

    cout << root->key << " ";

    preorder(root->left);
    preorder(root->right); 
}

int main()
{
    Node *root = NULL;
    root = new Node(10);
    /*
        10
        
    */

    root->right = new Node(20);
    /*
        10
          \
           \
            20
    
    */
    
    // If we insert 30, balance factor becomes more than 1. (AVL rotations will be applied)
    
    root = insert(root,30);
    /*
    
    Final tree after required AVL rotations:
    
          20
         /  \
       10   30
       
    */
    
    cout << "Preorder traversal of the tree : " << endl;
    preorder(root);

    cout << "\n\nFinal tree after required AVL rotations :" << endl;
    cout << "-----------------------------------------\n\n";

    cout << "    20" << endl;
    cout << "   /  \\" << endl;
    cout << " 10   30" << endl;

    return 0;
    
}




