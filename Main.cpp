#include <iostream>
#include "Settable.h"
#include "ListSettable.h"

void print (ListSettable<Vector3f>* list);

int main()
{
    ListSettable<Vector3f> *list = new ListSettable<Vector3f> ();
    list->add(new Vector3f (1));
    list->add(new Vector3f (2));
    list->add(new Vector3f (3));
    print(list);

    std::cout << list->remove(new Vector3f (2));
    print(list);

}

void print (ListSettable<Vector3f>* list)
{
    list->begin();
    while (list->hasNext())
    {
    	std::cout << list->next()->getValue();
    }
    std::cout << "(" << list->size() << ")" << std::endl;
}
