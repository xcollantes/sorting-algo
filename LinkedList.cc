#include <iostream>

using namespace std;

class Node{
  public:
    int data;
    struct Node* next;
};



int main(){
  cout << "Main Start" << endl;
  Node* head = new Node();
  Node* first = new Node();
  Node* second = new Node();

  return 0;
}
