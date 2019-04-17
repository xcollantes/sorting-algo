/** 
* @author Xavier Collantes
* @purpose Build a linked list and print out its 
* contents. 
*/

#include "Node.h"
#include <iostream>
using namespace std;


void printList(Node head) {
  while (head->getNext() != NULL) {
    cout << "| " << head->getData() << " | -> ";
  }
}


int main(){
  cout << "Main Start" << endl;
  
  Node *head = new Node();
  Node *second = new Node();
  Node *third = new Node();


  cout << "Assigning Nodes." << endl;
  
  head->setData(100);
  head->setNext(second);
  second->setData(200);
  second->setNext(third);
  third->setData(300);
  third->setNext(NULL);


  cout << "Printing Nodes." << endl;
  printList(head);

  return 0;
}





