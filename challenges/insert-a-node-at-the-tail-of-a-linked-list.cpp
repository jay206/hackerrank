// https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
// All Domains > Data Structures > Linked Lists > Insert a node at the tail of a linked list
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  if (head == NULL) { // empty
    head = new Node;
    head->data = data;
    head->next = NULL;
  } else {            // not empty
    Node *nPtr = head;
    // find last node
    while (nPtr->next != NULL) {
      nPtr = nPtr->next;
    }
    nPtr->next = new Node;
    nPtr->next->data = data;
    nPtr->next->next = NULL;
  }
  return head;
}
