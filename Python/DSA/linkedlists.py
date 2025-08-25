class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
class LinkedList:
    def __init__(self):
        self.head = None

    def add_head(self,data):
        new_node = Node(data) #create a new node
        new_node.next = self.head #the new node pounts to the previous head of the list
        self.head = new_node #the new node is assigned as the new head of the list

    def add_tail(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node #if list is empty
            return
        current = self.head 
        while current.next: #iterates until last node
            current = current.next
        current.next = new_node

    def print_list(self):
        current = self.head
        while current:
            print(current.data, end= '-> ')
            current = current.next
        print("None")
    
    def del_list(self, data): #delete by value
        new_node = self.head
        prev_node = None
        if not self.head:
            print("List is empty")
            return
        if self.head.data == data:
            self.head = self.head.next

        while new_node and new_node.data != data:
            prev_node = new_node
            new_node = new_node.next
        
        if new_node:
            prev_node.next = new_node.next
        else:
            print("Not found!")
    
    def reverseLL(self): #reverse list iteratively
        prev = None
        cur = self.head

        if not self.head:
            print("List Empty")
            return
        while(cur):
            nextN = cur.next
            cur.next = prev
            prev = cur
            cur = nextN
        self.head = prev
    
    def recRevLL(self,node): #reverse List using recursion
        if not node.next:
            return node
        
        new_head = self.recRevLL(node.next)
        node.next.next = node
        node.next = None

        return new_head


ll = LinkedList() #create object for class
while(1):
    print("1-AddHead\n2-AddTail\n3-Print\n4-Delete by value\n5-ReverseIte\n6-ReverseRec\n0-Exit")
    x = int(input("enter a number:\t"))
    match(x):
        case 0:
            break
        case 1:
            data = int(input("Enter Data"))
            ll.add_head(data)
        case 2:
            data = int(input("Enter Data"))
            ll.add_tail(data)
        case 3:
            ll.print_list()
        case 4:
            data = int(input("Enter Data to delete"))
            ll.del_list(data)
        case 5:
            ll.reverseLL()
        case 6:
            ll.recRevLL(ll.head)
        case _:
            print("Invalid Option")