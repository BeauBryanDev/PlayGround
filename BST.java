

lass Node
{   
    int key;
    Node left;
    Node right;
    
    Node(int val)
    {   
        key = val;
        left = null;
        right = null;
    }
}

public class BinarySearchTree
{
    Node root;

    public Node insert(Node root, int val)
    {
        if(root == null)
            return new Node(val);
        else if(root.key < val)
            root.right = insert(root.right,val);
        else if(root.key > val)
            root.left = insert(root.left,val);
        return root;
    }

    public void inorder(Node root)
    {
        if(root == null)
            return;

        inorder(root.left);
        System.out.print(root.key+" ");
        inorder(root.right);
        
    }
        
    public boolean search(Node root, int key)
    {
        if(root == null)
            return false;
        if(root.key == key)
            return true;
        if(root.key < key)
            return search(root.right,key);
        else
            return search(root.left,key);
    }
    
        public Node removeNode(Node root, int val)
    {
        if(root == null)
            return null;
        if(root.key < val)
            root.right = removeNode(root.right,val);
        else if(root.key > val)
            root.left = removeNode(root.left,val);
        else
        {
            if(root.left == null && root.right == null)
                return null;
            else if(root.left == null)
                return root.right;
            else if(root.right == null)
                return root.left;
            else
            {
                int rightMin = getRightMin(root.right);
                root.key = rightMin;
                root.right = removeNode(root.right,rightMin);
            }
        }
        return root;
    }

    public int getRightMin(Node root)
    {
        Node temp = root;

        while(temp.left != null)
        {
            temp = temp.left;
        }

        return temp.key;
    }
    
    public static void main(String args[])
    
    {
    
    	BinarySearchTree bst = new BinarySearchTree();
        bst.root = bst.insert(bst.root, 100);
        bst.root = bst.insert(bst.root, 155);
        bst.root = bst.insert(bst.root, 150);
        bst.root = bst.insert(bst.root, 105);
        bst.root = bst.insert(bst.root, 115);
        bst.root = bst.insert(bst.root, 125);
        bst.root = bst.insert(bst.root, 135);
        bst.root = bst.insert(bst.root, 145);
        bst.root = bst.insert(bst.root, 165);
        bst.root = bst.insert(bst.root, 195);
        bst.root = bst.insert(bst.root, 197);
        bst.root = bst.insert(bst.root, 175);
        bst.root = bst.insert(bst.root, 185);
        bst.root = bst.insert(bst.root, 197);

       System.out.println("Inorder Traversal of Above BST");
       bst.inorder(bst.root);
       
       
        System.out.println("Searching Element: "+50);
        
        if(bst.search(bst.root,150) == true)
            System.out.println("Search Found");
        else
            System.out.println("Search Not Found");

        System.out.println("Searching Element: "+50);
        
        if(bst.search(bst.root,500) == true)
            System.out.println("Search Found");
        else
            System.out.println("Search Not Found");
            
        System.out.println("Before Deletion: Inorder Traversal of BST");
        bst.inorder(bst.root);

        int key = 135;
        
        System.out.println("Deleting Element: "+key);
        bst.root = bst.removeNode(bst.root,key);

        System.out.println("After Deletion: Inorder Traversal of BST");
        bst.inorder(bst.root);
        
        
    }
    
}



