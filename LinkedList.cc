
#include "Node.cc"
#include <iostream>
using namespace std;



int main(){
  cout << "Main Start" << endl;
  
  Node *head = new Node();
  Node *second = new Node();
  cout << "Assigning Nodes." << endl;
  head->data = 100;
  head->next = NULL;

  cout << "Printing Nodes." << endl;
  cout << head->data << endl;
  cout << head->next << endl;

  cout << "Printing Node Address." << endl;
  cout << head->data << endl;
  cout << head->next << endl;
  return 0;
}
