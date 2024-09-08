#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <vector>
#include <string>

using namespace std;

class Node 
{
   public:
       Node(int value);
       Node();

       int tree_data;
       Node* next;
       Node* prev;
};

class LinkedList 
{
   private:
       Node* head;
       Node* tail;
   public:
       string name;
       LinkedList();
       LinkedList(string name);

       bool insert(int index, int value);
       bool remove(int index);
       int search(int index) const;
       void print_forward() const;
       void print_backward() const;
       void print_grid() const;
       Node* get_head() const;
       Node* get_tail() const;
       int size() const;
       bool is_empty() const;
       bool push_front(int value);
       string getName();
};

#endif