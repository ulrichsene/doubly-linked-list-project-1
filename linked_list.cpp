#include <iostream>
#include "doubly_linked_list.hpp"


using namespace std;


Node::~Node() {
   if (next != nullptr || prev != nullptr) {
       delete next;
       delete prev;
       next = nullptr;
       prev = nullptr;
   }
}


LinkedList::~LinkedList() {
   if (head != nullptr) {
       delete head;
       head = nullptr;
   }
}


Node::Node(int value) {
   tree_data = value;
   next = nullptr;
   prev = nullptr; 
}


Node::Node() {
   tree_data = 0;
   next = nullptr;
   prev = nullptr; 
}


LinkedList :: LinkedList(){
   head = nullptr;
   tail = nullptr;
}


bool LinkedList::insert(int index, int value) {
   if (index <= size() && index >= 0) {
       if(index == 0) {
           return push_front(value);
       }
       Node* iter = head;
       for (int counter = 0;counter < index-1;counter++){
           iter = iter->next;
       }
       Node* new_node = new Node;
       new_node->tree_data = value;
       new_node->next = iter->next;
       iter->next = new_node;
       return true;
   }
   else {
       return false;
   }  
}


Node* LinkedList::get_head() const{
   return head;
}


Node* LinkedList::get_tail() const{
   return tail;
}


bool LinkedList::is_empty() const {
   return head == nullptr;
}


int LinkedList::size() const {
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


int LinkedList::search(int value) const {
   int index = 0;
   Node* iter = head;
   while (iter != nullptr) {
       if (iter -> tree_data == value) {
           return index;
       }
       iter = iter -> next;
       index++;
   }
   return -1;
}


void LinkedList::print_forward() const{
   Node* iter = head;
       while (iter != nullptr) {
           cout << iter -> tree_data << " ";
           iter = iter -> next;
       }
       cout << endl;
}


void LinkedList::print_backward() const{
   Node* iter = tail;
   while (iter != nullptr) {
       cout << iter -> tree_data << " ";
       iter = iter -> prev;
   }
   cout << endl;
}


bool LinkedList::push_front(int value) {
   Node* new_node = new Node;
   new_node->next = head;
   new_node->tree_data = value;
   head = new_node;
   new_node->prev = tail;
   return true;
}


bool LinkedList::remove(int index) {
   if(index < 0 || index >= size() || size() == 0) {
       return false;
   }
   if (index == 0) {
       Node* temp = head;
       head = head->next;
       temp->next = nullptr;
       delete temp;
       return true;
   }
   Node* iter = head;
   int counter = 0;
   while (counter < index - 1) {
       iter = iter->next;
       counter++;
   }
   Node* temp = iter->next;
   iter->next = temp->next;
   temp->next = nullptr;
   delete temp;
   return true;
}
