#include <iostream>

using namespace std;

struct Node {
  int data;      // data that's being stored
  Node* link;    // pointer to next node
};

typedef Node* nodePtr;   // allows me to declare them as node pointers

void insert(nodePtr& head, int data) {
  nodePtr tempPtr;      // declare a new node pointer
  tempPtr = new Node;   // creates a new node and makes temp pointer point to this node
  tempPtr->data = data; // populates data of the new node
  tempPtr->link = head; // linking this node to head node
  head = tempPtr;       // makes head point to the start of the list
}

int main() {
  nodePtr head;         // creates a node pointer called head
  head = new Node;      // this points to a new node
  head->data = 20;      // define what's inside a node, pointing to a new node (-> means populating data with pointers)
  head->link = NULL;    // declares the end of the linked list
  insert(head, 30);     // insert a new node with data 30 at the beginning of the linked list
  nodePtr tmp;
  tmp = head;
  while (tmp != NULL) { // traverse the linked list and print the data of each node
    cout << tmp->data << endl;
    tmp = tmp->link;
  }
  return 0;
}