#ifndef D_LN
#define D_LN

class Node
{
  public:
      std::string data;
      Node* next;

  public:
    Node();
};

class List
{
  private:
    Node* first;

  public:
    List();

    List(const List&);

    ~List();

    void addNode(std::string d);

    void delNode();

    void print();
};

#endif // D_LN
