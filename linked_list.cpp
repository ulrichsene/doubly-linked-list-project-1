#include <iostream>

#include "linked_list.hpp"

using namespace std;

Node::Node(int value) 
{
   tree_data = value;
   next = nullptr;
   prev = nullptr; 
}


Node::Node() 
{
   tree_data = 0;
   next = nullptr;
   prev = nullptr; 
}


LinkedList :: LinkedList()
{
   head = nullptr;
   tail = nullptr;
}


bool LinkedList::insert(int index, int value) 
{
   if (index <= size() && index >= 0) {
       if(index == 0) {
           return push_front(value);
        }
        Node* iter = head;
        for (int counter = 0; counter < index-1; counter++){
            iter = iter->next;
        }
        Node* new_node = new Node;
        new_node->tree_data = value;
        new_node->next = iter->next;
        new_node->prev = iter; 
        iter->next = new_node;
        if (new_node->next == nullptr) {
            tail = new_node;
        }
        return true;
   }
   else {
       return false;
   }  
}


Node* LinkedList::get_head() const
{
   return head;
}


Node* LinkedList::get_tail() const
{
   return tail;
}


bool LinkedList::is_empty() const 
{
   return head == nullptr;
}


int LinkedList::size() const 
{
   if(is_empty()){
       return 0;
   }
   Node* iter = head;
   int counter = 1;
   while (iter->next != nullptr) {
       counter++;
       iter=iter->next;
   }
   return counter;
}


void LinkedList::print_forward() const
{
   Node* iter = head;
       while (iter != nullptr) {
           cout << iter -> tree_data << " ";
           iter = iter -> next;
       }
       cout << endl;
}


void LinkedList::print_backward() const
{
   Node* iter = tail;
   if (iter == nullptr) {
   }
   while (iter != nullptr) {
       cout << iter -> tree_data << " ";
       iter = iter -> prev;
   }
   cout << endl;
}


bool LinkedList::push_front(int value)
{
    Node* new_node = new Node;
    new_node->next = head;
    new_node->tree_data = value;
    head = new_node;
    new_node->prev = nullptr;
    return true;
}


bool LinkedList::remove(int index) 
{ 
    // checks if index is a valid node 
    if(index < 0 || index > size()) {
        cout << "This node cannot be found!! " << endl; 
        return false;
    }
    // initialize counter for iter node
    int counter = 0; 
    Node* iter_front = head;
    // while loop for possible cases
    while(counter <= index){
        if(counter == index){
            // node at the end of the list
            if(iter_front->next == nullptr){
                iter_front->prev->next = nullptr;
                tail = iter_front->prev;
                iter_front = nullptr;
                delete iter_front; 
                return true; 
            // front of the list node being removed
            }else if (iter_front->prev == nullptr){
                iter_front->next->prev = nullptr;
                head = iter_front->next;
                iter_front = nullptr;
                delete iter_front;
                return true; 
            // node not connected to tail or head is removed
            }else{
                iter_front->prev->next = iter_front->next;
                iter_front->next->prev = iter_front->prev;
                iter_front = nullptr;
                delete iter_front;
                return true; 
            }
        }
        // iterate through the list
        iter_front = iter_front->next;
        counter++; 
    }
    return true; 
}

//Returns -1 if no node is found
int LinkedList::search(int index) const {
    Node* current = head;


    if (index < 0) {
        return -1;
    }


    // Traverse the list
    for (int i = 0; i < index; i++) {
        //While still in list
        if (current->next != nullptr) {
            current = current->next;
        } else {
            return -1;
        }
    }


    return current->tree_data;
}
