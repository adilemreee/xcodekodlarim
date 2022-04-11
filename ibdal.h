//
//  ibdal.h
//  bir bağlı doğrusal liste 
//
//  Created by Adil Emre Karayürek on 11.04.2022.
//

#ifndef ibdal_h
#define ibdal_h

#include <iostream>
using namespace std ;

struct node
{
    int data ;
    node *blink;
    node *flink;
    
};

node *list =NULL;
node *list1 =NULL ;
node *list2 =NULL ;

void dumplist(node *list)
{
    int i=1 ;
    node *ylist =list ;
    if (list!=NULL) {
        do {
            cout << "listenin" << i++ << ".nodunun adresi " << list << "datası " << list -> data << "Blinki " << list ->blink << "Flinki " << list ->flink << endl ;
            list=list->flink ;
        
        } while (list !=ylist );
    }
}

node*newnode( )
{
    node *newnode =new node ;
    newnode->blink =newnode;
    newnode ->flink =newnode;
    return (newnode);
}

node*last(node*list)
{
    node*last=NULL;
    if (list!=NULL) {
        last=list->blink ;
        return(last);
    }
    return last ;
}

void concatenate(node*&list1,node*list2)
{
    if (list2!=NULL) {
        if (list1==NULL) {
            list1=list2;
        } else {
            node*ydk=last(list2);
            list2->blink=last(list1);
            last(list1)->flink=list2;
            list1->blink=ydk;
            ydk->flink =list1;
        }
        }
}
void addhead(node*node_,node*&list)
{
    if (list!=NULL) {
        node*ydk ;
        ydk=last(list);
        node_->flink=list;
        list->blink =node_;
        node_->blink=ydk;
        ydk->flink=node_;
        cout << "+" ;
    }
    list=node_;
}
node*cons(int data_)
{
node*cons_;
    cons_=newnode();
    cons_->data=data_;
    return (cons_);
    
}


#endif /* ibdal_h */
