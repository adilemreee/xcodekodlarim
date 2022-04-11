#include "Header.h"
#include <iostream>

using namespace std;

int main (){
    addhead(newnode(), l2);
    addhead(cons(48), l2);
    addhead(newnode(), l2);
    dumplist(l2);
    cout <<member(locate(48, l2), l2);
}



