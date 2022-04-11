//
//  Header.h
//  nodes
//
//  Created by Adil Emre Karayürek on 11.04.2022.
//

#ifndef Header_h
#define Header_h
#include <iostream>
using namespace std;

struct node {
    int data ;
    node *link ;
    
};

//liste tanımla
node *list =NULL;
node *l1 = NULL ;
node *l2= NULL;

//01
void dumplist (node*list)
{
    int i=1;
    while (list!=NULL) {
        cout << "listenin " << i++ << ".nodunun adresi =" << list << " datası =" << list -> data << " .linki =" << list -> link << endl;
        list =list -> link ;
    }
}

//02
node* newnode ()
{
    node*newnode =new node ;
    newnode->link=NULL;
    return(newnode);
}

/* //03
node*last(node*list)
{
    if (list!=NULL) {
        while (list->link!=NULL) {
            list=list->link;
            node*last =list ;
            return (last);
            
        }
    
    }

}
*/
//04
void addhead(node*node_,node*&list)
{
    node_->link=list;
    list=node_;
    
}
/*
//05
void concatenate(node*&l1,node*l2)
{
    if (l1==NULL) {
        l1=l2;
    } else {
        last(l1)->link=l2;
    }
}
*/
//06
node*cons(int data_)
{
    node*cons_;
    cons_=newnode( );
    cons_->data=data_;
    return (cons_);
    
}
/*
//07
node*copy (node*list)
{
    node*suret =NULL;
    if (list!=NULL) {
        do {
            concatenate (suret,cons(list->data));
            list=list->link;
            
            
        } while (list!=NULL);
      
    }
    return(suret);
}
*/
//08
node*locate(int data_,node*list)
{
    node*locate=NULL;
    while (list!=NULL) {
        if (list->data!=data_) {
            list=list->link;
        } else {
            locate=list;
            break;
        }
        
    }
    return (locate);
}

//09
bool member(node*node_,node*list)
{
    while (list!=NULL && list!=node_) {
        list=list->link;
        }
    bool member=(list==node_);
    return (member);
}

//10
node*cuthead(node*&list)
{
    node*cuthead=list;
    if (list!=NULL) {
        list=list->link;
        cuthead->link=NULL;
    }
    return(cuthead);
}

//11
void free(node*&list)
{
    delete list;
}

//12
bool advance (node*&point )
{
    bool advance =false;
    if ((point!=NULL )&& (point->link!=NULL)) {
        point =point->link;
        advance =true;
    }
    return (advance) ;
    
}

/* //13
bool deletenode(node*node_,node*&list)
{
    bool deletenode =false;
    if (list==NULL) {
        return (deletenode);
    }
    if (list==node_) {
        free(cuthead(list));
        deletenode=true;
        return (deletenode);
        
    } else {
        node  *point=list;
    }
    do {
        if (point ->link==node_) {
            free(cuthead(point ->link));
            deletenode=true;
            return(deletenode);
        }
    } while (advance(point));

}

*/











#endif /* Header_h */
