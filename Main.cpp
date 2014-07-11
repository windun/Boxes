#include <iostream>
#include "ListSettable.h"
#include "ListSettable.cpp"
using namespace std;

int main()
{
    ListSettable<int> *list = new ListSettable<int> ();
    list->add(1);
}
