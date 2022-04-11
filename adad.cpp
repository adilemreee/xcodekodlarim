#include <iostream>
#include "adad.hpp"
using namespace std;
int main (){
    void dumplist (node *list);

    node *last(node *list);
    void addhead(node*node_,node *&list);
    void concatenate(node *&l1,node *l2);
    node *cons(int data_);
    node *copy (node*list);
    node *locate(int data_,node*list);
    bool member(node*node_,node*list);
    node *cuthead(node *&list);
    void free(node *&list);
    bool advance (node *&point );

}

