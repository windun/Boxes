#include <iostream>
using namespace std;

template <typename E>
bool ListSettable<E>::add(E item)
{
    cout << item;
    return true;
}

template <typename E>
bool ListSettable<E>::remove(E item)
{
    cout << item;
    return true;
}

template <typename E>
bool ListSettable<E>::hasNext ()
{
    return true;        
}
    
template <typename E>
E ListSettable<E>::next () {
    return 0;   
}
