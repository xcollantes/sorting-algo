using namespace std;

public class Node {
  public:
    Node::Node();

    Node::Node(int x, Node *nextPtr){
      this.data = x;
      this.next = nextPtr;
    }

    Node::~Node(){
      this.data = NULL;
      this.next = NULL;

      delete this.data;
      delete this.next;
    }


    void Node::setData(int x){
      this.data = x;
    }

    void Node::setNext(Node *nextPtr){
      this.next = nextPtr;
    }

    int Node::getData(){
      return data;
    }

    Node * Node::next{
      return next;
    }


  private:
    int data;
    Node *next;
};
