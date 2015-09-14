// https://www.hackerrank.com/challenges/compare-two-linked-lists
// All Domains > Data Structures > Linked Lists > Compare two linked lists
/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    if (headA == headB)
        return 1;       // both point to same list

    Node *aPtr = headA;
    Node *bPtr = headB;

    while (aPtr != NULL && bPtr != NULL) {
        if (aPtr->data != bPtr->data)
            return 0;   // lists are not equal
        aPtr = aPtr->next;
        bPtr = bPtr->next;
    }

    if (aPtr == bPtr)
        return 1;       // lists are equal

    return 0;
}
