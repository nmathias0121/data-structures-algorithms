#include "linked_list.h"

int main()
{
    // test Node 
    
    Node<string>* head = NULL;
    Node<string>* second = NULL;
    Node<string>* third = NULL;
  
    head = new Node<string>();
    second = new Node<string>();
    third = new Node<string>();
  
    head->element = "Learning";
    head->next = second;
  
    second->element = "all the";
    second->next = third;
  
    third->element = "time";
    third->next = NULL;
    
    
    printList(head);
    cout << endl;

    return 0;
}