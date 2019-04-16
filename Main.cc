
#include "Node.cc"
#include <iostream>
using namespace std;



int main(){
  cout << "Main Start" << endl;
  
  Node *temp = new Node();

  cout << "Assigning Nodes." << endl;
  temp->data = 1000;
  temp->next = NULL;

  cout << "Printing Nodes." << endl;
  cout << temp->data << endl;
  cout << temp->next << endl;

  cout << "Printing Node Address." << endl;
  cout << temp->data << endl;
  cout << temp->next << endl;
  return 0;
}
