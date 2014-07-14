#include <iostream>
#include "Boxes.h"
#include "Settable.h"
#include "ListSettable.h"
#include "BoxTester.h"

void print (ListSettable<Vector3f>* list);

int main()
{
	ListSettable<Vector3f>* list = new ListSettable<Vector3f> ();
    BoxTester<ListSettable<Vector3f>, Vector3f>* tester = new BoxTester<ListSettable<Vector3f>, Vector3f> ();

    try
    {
    	tester->test(list);
    }
    catch (std::exception& e)
    {
    	std::cout << "Error: " << e.what() << std::endl;
    }

}
