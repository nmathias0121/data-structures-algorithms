#include <iostream>
using namespace std;

// node for single linked list
template <typename T>
class Node {
 public:
    //add or remove member variables - update node & linked list functions too!
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

    //length of list
    int getLengthList();
  
    //add element to end of list
    void insertNode(T element);
  
    //delete at particular index
    void deleteNode(int index);

    //delete element
    void deleteNode(T element);

    //print linked list
    void printList(SingleLinkedList list);
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

//return number of nodes in a list
template <typename T>
int SingleLinkedList<T>::getLengthList() {
    Node<T>* temp = head;
    int length = 0;

    //empty list
    if (temp == NULL) {
        return length;
    }

    //traverse list till the end
    while (temp->next != NULL) {
        length++;
        temp = temp->next;
    }

    return length;
}

//add element to end of list
template <typename T>
void SingleLinkedList<T>::insertNode(T element) {
    //create new node
    Node<T>* node = new Node(element);
  
    //if list is empty
    if (head == NULL) {
        head = node;
        return;
    }
  
    //traverse list till end
    Node<T>* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
  
    //insert at the last
    temp->next = node;
}

//delete at particular index
template <typename T>
void SingleLinkedList<T>::deleteNode(int index) {

}

//delete element
template <typename T>
void SingleLinkedList<T>::deleteNode(T element) {

}

template <typename T>
void printList(Node<T>* n)
{
    while (n != NULL) {
        cout << n->element << " ";
        n = n->next;
    }
}