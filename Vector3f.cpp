#include "Settable.h"

Vector3f::Vector3f()
{
	this->value = 0;
}

Vector3f::Vector3f(int value)
{
	this->value = value;
}

bool Vector3f::set(Vector3f& vector)
{
    value = vector.value;
    return true;
}

bool Vector3f::equals (Vector3f* vector)
{
	return vector->value == value;
}

Vector3f* Vector3f::copy ()
{
	return new Vector3f (value);
}


int Vector3f::getValue ()
{
    return value;
}
