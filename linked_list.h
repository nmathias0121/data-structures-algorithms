#include <iostream>
using namespace std;

// node for single linked list
template <typename T>
class Node {
 public:
    //add or remove member variables
    T element;
    Node<T>* next;

    //default constructor
    Node()
    {
        next = NULL;
    }

    //non default constructor
    Node(T element)
    {
        this->element = element;
        this->next = NULL;
    }
};

template <typename T>
class SingleLinkedList {
    Node<T>* head;
  
public:
    // Default constructor
    SingleLinkedList();

    // Non-Default constructor
    SingleLinkedList(T element);

    //destructor
    ~SingleLinkedList();
  
    //add element to end of list
    void insertNode(int);
  
    //delete at particular index
    void deleteNode(int);

    //add element to a particular index or after a particular element

    //delete a particular value

    //print linked list
};

//default constructor
template <typename T>
SingleLinkedList<T>::SingleLinkedList() {
    head = NULL;
}

//non-default constructor
template <typename T>
SingleLinkedList<T>::SingleLinkedList(T element) {
    head->element = element;
    head->next = NULL;
}


template <typename T>
void printList(Node<T>* n)
{
    while (n != NULL) {
        cout << n->element << " ";
        n = n->next;
    }
}