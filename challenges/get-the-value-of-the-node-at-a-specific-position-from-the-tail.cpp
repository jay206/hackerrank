// https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail
// All Domains > Data Structures > Linked Lists > Get Node Value
/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    Node *nPtr = head;
    int len = 0;
    while (nPtr != NULL) {
        len++;
        nPtr = nPtr->next;
    }
    len -= (positionFromTail+1);
    nPtr = head;
    while (len-- > 0) {
        nPtr = nPtr->next;
    }
    return nPtr->data;
}
