#pragma once

#include <ostream>

struct node
{
    int value;
    struct node* next;
};

struct list
{
  node* head=nullptr;   
  node* end=nullptr;
  int size;
};


list* init(int size);

void add(list* my_list, int value);

void print_list(list* my_list, std::ostream &os);