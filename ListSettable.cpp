#include <iostream>
#include "ListSettable.h"
using namespace std;

template <class E>
bool ListSettable<E>::add(E item) 
{
    cout << item;
    return true;
}

template <class E>
bool ListSettable<E>::remove(E item)
{
    cout << item;
    return true;
}

template <class E>
bool ListSettable<E>::hasNext ()
{
    return true;        
}
    
template <class E>
E ListSettable<E>::next () {
    return 0;   
}
