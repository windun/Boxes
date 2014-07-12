#include <iostream>
#include "Settable.h"

int value;

bool Vector3f::set(Vector3f& val)
{
    value = val.value;
    return true;
}

Vector3f* Vector3f::get()
{
    return this;
}

int Vector3f::getValue ()
{
    return value;
}
