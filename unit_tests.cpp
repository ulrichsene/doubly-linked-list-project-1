#include <iostream>
#include <cassert>
#include "linked_list.hpp"

using namespace std;

bool test_insert() 
{
   // set up
   LinkedList lst;
  
   // execution
   bool return0 = lst.insert(9, 10);
   bool return1 = lst.insert(0, 10);
   bool return2 = lst.insert(5, 10);
   bool return3 = lst.insert(1, 30);
   bool return4 = lst.insert(1, 20);

   // validation
   assert(return0 == false);
   assert(return1 == true);
   assert(return2 == false);
   assert(return3 == true);
   assert(return4 == true);
   assert(lst.get_head()->tree_data == 10);
   assert(lst.get_head()->next->tree_data == 20);
   assert(lst.get_head()->next->next->tree_data == 30);

   // cleanup
   // deconstructor deletes dynamically allocated memory
   return true;
}

bool test_remove() 
{
   // set up
   LinkedList lst;
   lst.insert(0, 10);
   lst.insert(1, 20);
   lst.insert(2, 30);
   lst.insert(3, 100);

   // execution
   bool return1 = lst.remove(2);
   bool return2 = lst.remove(0);
   // bool return3 = lst.remove(4);

   // validation
   assert(return1 == true);
   assert(return2 == true);
   // assert(return3 == false);

   // cleanup
   // deconstructor deletes dynamically allocated memory
   return true; 
}

bool test_size() 
{
   // set up
   LinkedList lst; // list with elements
   LinkedList lst2; // empty list
   // execution
   lst.insert(0, 10);
   lst.insert(1, 20);
   lst.insert(2, 30);
   // validation
   assert(lst.size() == 3);
   assert(lst2.size() == 0);
   // cleanup
   return true;
}
bool test_print_forward() 
{
   // set up 
   LinkedList lst; 
   // execution
   lst.insert(0, 10);
   lst.insert(1, 20);
   lst.insert(2, 30);
   // validation
   lst.print_forward();
   // cleanup
   return true;
}

bool test_print_backward() 
{
   // set up 
   LinkedList lst; 
   // execution
   lst.insert(0, 10);
   lst.insert(1, 20);
   lst.insert(2, 30);
   // validation
   lst.print_backward();
   // cleanup
   return true;
}

bool test_push_front() 
{
   // set up 
   LinkedList lst;
   // execution
   lst.push_front(30);
   lst.push_front(20);
   lst.push_front(10);
   // validation
   assert(lst.get_head()->tree_data == 10);
   assert(lst.get_head()->next->tree_data == 20);
   assert(lst.get_head()->next->next->tree_data == 30);
   // cleanup
   return true;
}

bool test_search() {
   LinkedList ll;


   // Append some blocks to the linked list
   ll.insert(0, 3);
   ll.insert(1, 5);
   ll.insert(0, 4);


   assert(ll.search(1) == 3);


   // Searching for a non-existent block
   assert(ll.search(10) == -1);


   return true;
}


int main_test()
{
   test_insert();
   test_remove(); 
   test_size();
   test_print_forward();
   test_print_backward();
   test_push_front();
   test_search();

   cout << "All tests passed!" << endl;

   return 0;
}