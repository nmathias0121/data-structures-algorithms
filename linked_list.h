#include <iostream>
using namespace std;

// node for single linked list
template <typename T>
class Node {
 public:
    T element;
    Node* next;

    //default constructor
    Node()
    {
        next = NULL;
    }

    //constructor with parameter
    Node(T element)
    {
        this->element = element;
        this->next = NULL;
    }
};


template <typename T>
void printList(Node<T>* n)
{
    while (n != NULL) {
        cout << n->element << " ";
        n = n->next;
    }
}

template <typename T>
class SingleLinkedList {
 public:
    Node<T>* head;

 private:
    //constructors

    //destructor

    //add element to end of list

    //add element to a particular index or after a particular element

    //print list

    //delete at particular index

    //delete a particular value
};