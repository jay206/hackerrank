// https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle
// All Domains > Data Structures > Linked Lists > Detect Cycle
/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <deque>
#include <iostream>
using namespace std;
int HasCycle(Node* head)
{

    if (head == NULL)
        return 0;

    Node *iPtr = head;
    int len = 0;

    while (iPtr != NULL) {
        if (++len > 100)
            return 1;
        iPtr = iPtr->next;
    }


    return 0;
}
