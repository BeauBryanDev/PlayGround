
#include <iostream>
#include <queue>

using namespace std;

// Structure of each node of the tree
struct Node {

  int data;
  Node* left;
  Node* right;

  Node(int data) {
  
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
};

struct Qitems {
  
  Node *nod3 ;
  int depth ;
  
  Qitems( int depth ) {
  
  this->depth = depth ;
  this->nod3  = nullptr ;
  
  }
};

class BinaryTree {

 public:
 
  Node* root;

  BinaryTree() {
  
    root = nullptr;
  }

  void addNode(int data) {
  
    Node* newNode = new Node(data);

    if (root == nullptr) {
    
      root = newNode;
      
    } else {
    
      Node* focusNode = root;
      Node* parent;

      while (true) {
      
        parent = focusNode;

        if (data < focusNode->data) {
        
          focusNode = focusNode->left;
          
          if (focusNode == nullptr) {
          
            parent->left = newNode;
            
            return;
            
          }
          
        } else {
        
          focusNode = focusNode->right;
          
          if (focusNode == nullptr) {
          
            parent->right = newNode;
            
            return;
          }
        }
      }
    }
  }

  void preOrderTraversal(Node* focusNode) {
  
    if (focusNode != nullptr) {
    
      std::cout << focusNode->data << " ";
      
      preOrderTraversal(focusNode->left);
      preOrderTraversal(focusNode->right);
    }
  }

  void printLevelOrder(Node *root) {
  
    if (root == NULL)
        return;

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();

        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
  }
  int levelOrderSuccessor( Node *root, int key)
{
    if ( root == NULL ) 
        
        return -1 ; 
        
    queue<Node * > q ;
    
    q.push(root) ;
    
    while ( !(q.empty() ) ) {
        
        Node *nod3 = q.front() ;
        q.pop() ;
        
        
        if ( nod3->left != NULL ) 
        
            q.push(nod3->left ) ;
        
    
        if ( nod3->right != NULL )  
    
            q.push( nod3->right ) ;
        
        if ( nod3->data == key ) 
    
            break ; 
        
    }
    
    Node *successor =  q.front() ;
    
    if ( successor == NULL ) 
    
        return -1 ;
        
    return successor->data ; 
    
    }
    
    int maxDepth(struct Node *root)
   {
    if (root == NULL)
        return (0);
        
    int leftDepth  = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    
    return (leftDepth > rightDepth? leftDepth + 1 : rightDepth + 1);
    
    }

int minDepth(node *root)
{   
    if ( root == NULL ) 
    
       return 0; 
    
    queue < Qitems > q ; 
    
    Qitems qi ; 
    qi.nod3 = root ;
    qi.depth = 1 ; 
    
    q.push( qi ) ;
    
    while ( !(q.empty() ) ) {
        
        Qitems frontNode = q.front() ; 
        
        q.pop() ;
        
        Node *nod3 = frontNode.nod3 ;
        
        int depth = frontNode.depth ;
        
        if ( nod3->left == NULL && nod3->right == NULL ) 
        
            return depth;
        
        if ( nod3->left != NULL ) {
            
            qi.nod3 = nod3->left ;
            qi.depth = depth + 1 ; 
            q.push( qi  ) ;

        }
        
        if ( nod3->right != NULL ) {
            
            qi.nod3 = nod3->right ; 
            qi.depth = depth + 1 ; 
            q.push( qi ) ;
            
        }
    }
    
    return (0) ;
    
   }

};

///MainFunction Body ........

int main() {
  BinaryTree tree;

  tree.addNode(50);
  tree.addNode(25);
  tree.addNode(75);
  tree.addNode(12);
  tree.addNode(37);
  tree.addNode(43);
  tree.addNode(30);
  tree.addNode(35);
  tree.addNode(40);
  tree.addNode(55);

  cout << "\nPrint Order Traversal\n";
  tree.preOrderTraversal(tree.root);
  cout << "\n\nPrint Level Order\n";
  tree.printLevelOrder(tree.root);

  return 0;
}


