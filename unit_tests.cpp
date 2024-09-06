#include <iostream>
#include <cassert>
#include "doubly_linked_list.hpp"


using namespace std;


bool test_insert() {
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


bool test_remove() {
   LinkedList lst;
   lst.insert(1, 10);
   lst.insert(1, 20);
   lst.insert(2, 30);


   bool return1 = lst.remove(1);
   bool return2 = lst.remove(0);
   bool return3 = lst.remove(2);