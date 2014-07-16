#include <iostream>
#include "Boxes.h"
#include "Settable.h"
#include "ListSettable.h"
#include "BoxTester.h"

int main()
{
	ListSettable<Vector3f>* list = new ListSettable<Vector3f> ();
    BoxTester<Vector3f>* tester = new BoxTester<Vector3f> ();

    try
    {
    	tester->test(list);
    }
    catch (Boxception* e)
    {
    	std::cout << "Error: " << e->what() << std::endl;
    }
    catch (...)
    {
    	std::cout << "Uncaught error." << std::endl;
    }
    std::cout << "Test complete.";
}
