//
//  bbdol.h
//  vize ödevi node
//
//  Created by Adil Emre Karayürek on 10.04.2022.
//

#ifndef bbdol_h
#define bbdol_h
void dumplist (node *list);
node *newnode ();
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

#endif /* bbdol_h */
