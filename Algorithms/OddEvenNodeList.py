##LinkedList made up of separates Nodes ....

class Node:
    def __init__(self, Value=None, Next=None):
        self.Value = Value
        self.Next = Next

    def print_Node(self):
        tmp = self
        while tmp:
            print(tmp.Value, end=" -> " if tmp.Next else "\n")
            tmp = tmp.Next


def Odd_Even_LinkedList(Head):
    if not Head:
        return Head

    Odd = Head
    Even = Head.Next
    EvenHead = Even

    while Even and Even.Next:
        Odd.Next = Odd.Next.Next
        Odd = Odd.Next

        Even.Next = Even.Next.Next
        Even = Even.Next

    Odd.Next = EvenHead
    return Head


# Creating nodes and linking them
FirstNode = Node(1)
secondNode = Node(2)
thirdNode = Node(3)
fourthNode = Node(4)
fifthNode = Node(5)
LastNode = Node(6)

# Linking the nodes to form the initial linked list
FirstNode.Next = secondNode
secondNode.Next = thirdNode
thirdNode.Next = fourthNode
fourthNode.Next = fifthNode
fifthNode.Next = LastNode

# Transforming the linked list by odd and even values
NewHead = Odd_Even_LinkedList(FirstNode)

# Printing the transformed linked list
NewHead.print_Node()






