#include "Boxception.h"

char* msg;

Boxception::Boxception(int type)
{
	switch (type)
	{
	case SIZE:
		msg = "Incorrect size.";
		break;
	case ADD_RETURN_VALUE:
		msg = "add() return value is incorrect.";
		break;
	case REMOVE_RETURN_VALUE:
		msg = "remove() return value is incorrect.";
		break;
	case COPY:
		msg = "Error creating copy.";
		break;
	}
}

const char* Boxception::what() const throw ()
{
	return msg;
}
