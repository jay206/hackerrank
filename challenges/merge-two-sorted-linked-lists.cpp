// https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists
// All Domains > Data Structures > Linked Lists > Merge two sorted linked lists
/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    Node *hPtr; // head
    Node *tPtr; // tail

    if (headA == headB) {        // both heads point to same list
        hPtr = headA;
    } else if (headA == NULL) {  // headA contains no elements
        hPtr = headB;
    } else if (headB == NULL) {  // headB contains no elements
        hPtr = headA;
    } else {                     // lists are not same and both contain elements
        // determine which list head is lowest
        if (headA->data <= headB->data) {
            hPtr = tPtr = headA;
            headA = headA->next;
        } else {
            hPtr = tPtr = headB;
            headB = headB->next;
        }
        // loop through lists till both are null
        while (headA != NULL || headB != NULL) {
            if (headA == NULL) {
                // list A is empty
                tPtr->next = headB;
                headB = headB->next;
            } else if (headB == NULL) {
                // list B is empty
                tPtr->next = headA;
                headA = headA->next;
            } else {
                // neither list is empty
                if (headA->data <= headB->data) {
                    tPtr->next = headA;
                    headA = headA->next;
                } else {
                    tPtr->next = headB;
                    headB = headB->next;
                }
            }
            tPtr = tPtr->next;
        }
    }

    return hPtr;
}
