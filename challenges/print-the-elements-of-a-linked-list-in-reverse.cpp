// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse
// All Domains > Data Structures > Linked Lists > Print in Reverse
/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

#include <stack>

void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
  Node *nPtr = head;
  stack<int> s;
  while (nPtr != NULL) {
    s.push(nPtr->data);
    nPtr = nPtr->next;
  }
  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }
}
