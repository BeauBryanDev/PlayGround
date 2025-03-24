#include <iostream>

using namespace std; 

class  Node {

    public :

    int key;
    Node * left;
    Node * right;


    Node( int val ) {

        key = val;
        left = NULL;
        right = NULL;

    }
};

class BinarySearchTree {

    public:

    Node * root;

    BinarySearchTree () {

        root = NULL;

    }

    Node * insert( Node *root, int val ) {

        if ( root == NULL ) {

            return new Node( val ) ; 

        }
        else if ( root->key < val  )  {

            root->right = insert(root->right , val );

        }
        else if ( root->key > val ) {

            root->left = insert( root->left , val );

        }

        return root;

    }

    bool search(Node *root, int key) {

        if(root == NULL)

            return false;

        if(root->key == key)

            return true;

        if(root->key < key)

            return search(root->right,key);

        else

            return search(root->left,key);

    }

    Node* removeNode(Node *root, int val)
    {
        if(root == NULL)

            return NULL;

        if(root->key < val)

            root->right = removeNode(root->right,val);

        else if(root->key > val)

            root->left = removeNode(root->left,val);
        else
        {
            if(root->left == NULL && root->right == NULL)

                return NULL;

            else if(root->left == NULL)

                return root->right;

            else if(root->right == NULL)

                return root->left;

            else
            {
                int rightMin = getRightMin(root->right);
                root->key = rightMin;
                root->right = removeNode(root->right,rightMin);
            }
        }

        return root;
    }

    int getRightMin(Node *root)
    {
        Node *temp = root;

        while(temp->left != NULL)
        {
            temp = temp->left;
        }

        return temp->key;
    }

    void inorder( Node * root ) { 

        if ( root == NULL )  {
            
            return;
        }
        inorder( root->left );
        cout << root->key << "\t";
        inorder( root->right );
    }

};

int main()
{
    BinarySearchTree bst;

    cout<<"Inserting Element: "<<100<<endl;
    bst.root = bst.insert(bst.root,100);
    cout<<"Inserting Element: "<<50<<endl;
    bst.root = bst.insert(bst.root,50);
    cout<<"Inserting Element: "<<150<<endl;
    bst.root = bst.insert(bst.root,150);
    cout<<"Inserting Element: "<<125<<endl;
    bst.root = bst.insert(bst.root,125);
    cout << endl;
    cout<<"Inserting Element: "<<145<<endl;
    bst.root = bst.insert(bst.root,145);
    cout<<"Inserting Element: "<<25<<endl;
    bst.root = bst.insert(bst.root,25);
    cout<<"Inserting Element: "<<75<<endl;
    bst.root = bst.insert(bst.root,75);
    cout<<"Inserting Element: "<<15<<endl;
    bst.root = bst.insert(bst.root,15);
    cout<<"Inserting Element: "<<115<<endl;
    bst.root = bst.insert(bst.root,115);
    cout << endl;
    cout<<"Inserting Element: "<<165<<endl;
    bst.root = bst.insert(bst.root,165);
    cout<<"Inserting Element: "<<35<<endl;
    bst.root = bst.insert(bst.root,35);
    cout<<"Inserting Element: "<<5<<endl;
    bst.root = bst.insert(bst.root,5);
    cout<<"Inserting Element: "<<10<<endl;
    bst.root = bst.insert(bst.root,10);

    cout << endl;

    cout<<"Inorder Traversal of Above BST : \n"<<endl;
    bst.inorder(bst.root);

    cout << endl;

    cout<<"\nSearching Element: "<<50<<endl;

    if(bst.search(bst.root,150) == true)

        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

    cout<<"Searching Element: "<<115<<endl;

    if(bst.search(bst.root,115) == true)

        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

    cout<<"Searching Element: "<<185<<endl;

    if(bst.search(bst.root,185) == true)

        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

    int key = 145;
    cout<<"Deleting Element: "<<key<<endl;
    bst.root = bst.removeNode(bst.root,key);

    cout<<"After Deletion: Inorder Traversal of BST"<<endl;
    bst.inorder(bst.root);

    cout << endl;

    return 0;
    
}


