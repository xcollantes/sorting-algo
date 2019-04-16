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

  public:
    int data;
    Node *next;
};
