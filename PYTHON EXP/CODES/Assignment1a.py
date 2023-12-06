class Node:
   def __init__(self, dataval=None):
      self.dataval = dataval
      self.nextnode = None

class SLinkedList:
   def __init__(self):
      self.headval = None #no head

   def listprint(self):
      printval = self.headval
      while printval is not None:
         print (printval.dataval)
         printval = printval.nextnode

   def AtBegining(self,newdata):
        NewNode = Node(newdata)
        NewNode.nextnode = self.headval
        self.headval = NewNode

   def AtEnd(self, newdata):
        NewNode = Node(newdata)
        if self.headval is None:
            self.headval = NewNode
            return
        lastnode = self.headval
        while(lastnode.nextnode):
            lastnode = lastnode.nextnode
        lastnode.nextnode=NewNode

   def AtGiven(self,newdata,middle_node):
        NewNode = Node(newdata)
        NewNode.nextnode = middle_node.nextnode
        middle_node.nextnode = NewNode

   def RemoveHead(self):
        head=self.headval
        self.headval=head.nextnode
        headval=None
        
   def RemoveTail(self):
        node=self.headval
        while(node.nextnode.nextnode != None):
            node=node.nextnode
        lastnode=node.nextnode
        node.nextnode=None

   def RemoveAfter(self,prev):
        node=self.headval
        prev_node=node
        while(node is not None):
          if prev_node.dataval !=prev:
               prev_node=node
               node=node.nextnode
          else:
               break
        prev_node.nextnode=node.nextnode

   def RemoveGiven(self,key):
        node=self.headval
        prev_node=node
        while(node is not None):
          if node.dataval !=key:
               prev_node=node
               node=node.nextnode
          else:
               break
        prev_node.nextnode=node.nextnode

   def SearchGiven(self,key):
        node=self.headval
        while(node is not None):
          if node.dataval==key:
               print("Value Present")
               break;
          node=node.nextnode

   def ReplaceGiven(self,source,destination):
        node=self.headval
        while(node is not None):
          if node.dataval==source:
               node.dataval=destination
               break;
          node=node.nextnode

list_Days = SLinkedList()
e1=Node("Mon")
list_Days.headval = e1
e2 = Node("Tue")
e1.nextnode = e2
e3 = Node("Wed")
e2.nextnode = e3

print("1. Display the list (Traversal):")
list_Days.listprint()

print("2.Insert at beginning: ")
list_Days.AtBegining("Sun")
list_Days.listprint()

print("3.Insert at End: ")
list_Days.AtEnd("Sat")
list_Days.listprint()

print("4.Insert After Wed: ")
list_Days.AtGiven("Thu",e3)
list_Days.listprint()

print("5.Search Thu")
list_Days.SearchGiven("Thu")

print("6.Replace Thu with Sun")
list_Days.ReplaceGiven("Thu","Sun")
list_Days.listprint()


print("7.Delete from beginning ")
list_Days.RemoveHead()
list_Days.listprint()

print("8.Delete from end ")
list_Days.RemoveTail()
list_Days.listprint()

print("9.Delete after Tue")
list_Days.RemoveAfter("Tue")
list_Days.listprint()

print("10.Delete Tue")
list_Days.RemoveGiven("Tue")
list_Days.listprint()
