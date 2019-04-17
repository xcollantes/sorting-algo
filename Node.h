#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
  public:
    int getData();
    Node getNext();

    void setData(int x);
    void setNext(Node *n);

    void printList(Node *head);




  private:
    int data;
    Node *next;
};

#endif // NODE_H