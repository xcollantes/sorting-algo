#include "Node.h"
#include <iostream>
using namespace std;

class Node {
  public:
    /*Node();

    Node(int x, Node *nextPtr){
      data = x;
      next = nextPtr;
    };

    ~Node(){
      data = NULL;
      *next = NULL;

      delete next;
    };


    void setData(int x){
      data = x;
    };

    void setNext(Node *nextPtr){
      next = nextPtr;
    };

    int getData(){
      return data;
    };

    Node getNext(){
      return *next;
    };
*/
    void printList(Node *head) {
      while (head->getNext() != nullptr) {
        cout << "| " << head->getData() << " | -> ";
      }
    };




  
};
