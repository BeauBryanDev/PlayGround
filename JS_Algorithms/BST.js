/* Node Class into Binary Search Tree  */ 
/* Node as a Single Class */ 
class Node
{
     constructor(val)
     {
            this.key = val;
            this.left = null;
            this.right = null;
      }
}

// var root = new Node(10);

function insert(root, val)
{
    if(root == null)
    
        return new Node(val);
        
    else if(root.key < val)
    
        root.right = insert(root.right,val);
        
    else if(root.key > val)
    
        root.left = insert(root.left,val);
        
    return root;
}

function inorder(root)
{
    if(root == null)
    
        return;

    inorder(root.left);
    document.write(root.key+" ");
    inorder(root.right);
}

function search(root, key)
{
    if(root == null)
        return false;
    if(root.key == key)
        return true;
    if(root.key < key)
        return search(root.right, key);
    else
        return search(root.left, key);
}

function removeNode(root, val)
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
            var rightMin = getRightMin(root.right);
            root.key = rightMin;
            root.right = removeNode(root.right,rightMin);
        }
    }
    
    return root;
}

function getRightMin(root)
{
    var temp = root;

    while(temp.left != null)
    {
        temp = temp.left;
    }

    return temp.key;
}

//Function Body ...Main ....
var root = null;

root = insert(root, 100);
root = insert(root, 50);
root = insert(root, 150);
root = insert(root, 125);

var root = null;

document.write("Inserting Element: "+100+"<br>");
root = insert(root,100);
document.write("Inserting Element: "+50+"<br>");
root = insert(root,50);
document.write("Inserting Element: "+150+"<br>");
root = insert(root,150);
document.write("Inserting Element: "+125+"<br>");
root = insert(root,125);

document.write("Inorder Traversal of Above BST<br>");

inorder(root);

document.write("Binary Search Tree Elements Are: 100, 50, 150, 125<br>");

document.write("Searching Element: "+50+"<br>");
if(search(root,150) == true)
    document.write("Search Found<br>");
else
    document.write("Search Not Found<br>");

document.write("Searching Element: "+500+"<br>");
if(search(root,500) == true)
    document.write("Search Found<br>");
else
    document.write("Search Not Found<br>")

document.write("Before Deletion: Inorder Traversal of BST<br>");
inorder(root);

var key = 100;
document.write("Deleting Element: "+key+"<br>");
root = removeNode(root,key);

document.write("After Deletion: Inorder Traversal of BST<br>");
inorder(root);



