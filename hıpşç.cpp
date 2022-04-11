//
//  main.cpp
//  recfonkptr
//
//  Created by Adil Emre Karayürek on 11.04.2022.
//

#include <iostream>
#include "Header.h"
struct Node
{
    int data ;
    node*link ;

    
};


int countlist(node *list)
{
    int count =0;
    if (list==NULL) {
        return count;
    } else {
        count=1+countlist(list->link);
    }
    return count ;
    
}
int countlist1(node *list)
{
    int count =0;
    if (list==NULL) {
        return count;
    } else {
        count=1+countlist1(list->link);
    }
    return count ;
    
}
int countlist2(node *list)
{
    int count =0;
    if (list==NULL) {
        return count;
    } else {
        count=1+countlist2(list->link);
    }
    return count ;
    
}
int countlist3(node *list)
{
    int count =0;
    if (list==NULL) {
        return count;
    } else {
        count=1+countlist3(list->link);
    }
    return count ;
    
}
int countlist4(node *list)
{
    int count =0;
    if (list==NULL) {
        return count;
    } else {
        count=1+countlist4(list->link);
    }
    return count ;
    
}

int main ()
{
    addhead(cons(40),l2);
    addhead(cons(30),l2);
    addhead(cons(20),l2);
    addhead(cons(10),l2);
    dumplist(l2);
   
    cout << countlist(l2);
    cout << countlist1(l2);
   
}
