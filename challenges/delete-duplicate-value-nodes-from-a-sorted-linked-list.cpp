// https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list
// All Domains > Data Structures > Linked Lists > Delete duplicate-value nodes from a sorted linked list
/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node *iPtr = head;
    if (iPtr == NULL)
        return iPtr;

    Node *jPtr;
    while (iPtr != NULL) {
        jPtr = iPtr->next; // check if iPtr->next == NULL
        if (jPtr == NULL)
            break;
        // test for duplicates
        if (iPtr->data == jPtr->data) {
            iPtr->next = jPtr->next;        // update pointer
            delete jPtr;                    // remove duplicate
        } else {
            // advance pointer after having verified next node not duplicate
            iPtr = iPtr->next;            
        }
    }
    return head;
}
