#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP


//struct or class??


class Node {
   public:
       Node(int value);
       Node();


       int tree_data;
       Node* next;
       Node* prev;
      
       ~Node();
};


class LinkedList {
   private:
       Node* head;
       Node* tail;
   public:
       LinkedList();


       bool insert(int index, int value);
       bool remove(int index);
       int search(int value) const;
       void print_forward() const;
       void print_backward() const;
       Node* get_head() const;
       Node* get_tail() const;
       int size() const;
       bool is_empty() const;
       bool push_front(int value);


       ~LinkedList();
};


#endif
