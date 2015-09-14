// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list
// All Domains > Data Structures > Linked Lists > Delete a Node
/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // assuming: head != NULL && 0 <= position < size
  Node *nPtr = head;

  if (position == 0) { // delete first element
    head = head->next;
  } else {
    // find node at position-1
    Node *t = nPtr;
    for (int i = 0; i < position-1; i++) {
      t = t->next;
    }

    // update pointers around position node
    nPtr = t->next;
    t->next = nPtr->next;
  }

  delete nPtr;  // delete node

  return head;
}
