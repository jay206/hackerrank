// https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
// All Domains > Data Structures > Linked Lists > Insert a node at a specific position in a linked list
/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  Node *nPtr = new Node;
  nPtr->data = data;

  if (head == NULL || position == 0) {
    // empty list or new head (inclusive)
    nPtr->next = head;
    head = nPtr;
  } else { // not empty list
    // 0 < position
    Node *t = head;

    // loop through list till t points to node at position-1
    for (int i = 0; i < position-1; i++) {
      t = t->next;
    }

    // insert new node after t
    nPtr->next = t->next;
    t->next = nPtr;
  }

  return head;
}
