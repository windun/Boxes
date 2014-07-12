#include <iostream>
#include "Settable.h"
#include "ListSettable.h"


using namespace std;

int main()
{
    Vector3f* v = new Vector3f;
    ListSettable<Vector3f> *list = new ListSettable<Vector3f> ();
    list->add(*v);
}
