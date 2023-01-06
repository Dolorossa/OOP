#include "task_4.h"

list* init(int size) {

  list* my_list = new list();
  my_list->size=size;
  
  for (int i=0; i<my_list->size; i++){
  node* new_el = new node();
  new_el->next = nullptr;
  if (my_list->end != nullptr){     
    my_list->end->next = new_el;
    my_list->end = new_el;
  }
  else{
    my_list->head = new_el;
    my_list->end = new_el;
  }
  }
  my_list->end->next=my_list->head;
  my_list->end=my_list->head;
  return my_list;
};

void add(list* my_list, int value){ 
  node* curr_el = my_list->end;
  curr_el->value=value;
  my_list->end=curr_el->next;
};

void print_list(list* my_list, std::ostream &os){
  os << "[";

  node* curr_el = my_list->head;

  for (int i=0; i<my_list->size; i++){
    if (curr_el->value!=0){
    os << curr_el->value;
    if (i<my_list->size-1 && curr_el->next->value!=0)
    os<<", ";
    curr_el = curr_el->next;
  }}
  
  os << "]\n";
}
