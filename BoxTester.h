#include "Boxception.h"

template <typename E>
class BoxTester
{
public:
	void test (Boxes<E>* box);
};

template <typename E>
void BoxTester<E>::test (Boxes<E>* box)
{
	E* e = new E;
	if(box->add(e) != true) throw new Boxception (Boxception::ADD_RETURN_VALUE);
	if (box->size() != 1) throw new Boxception (Boxception::SIZE);
	if(box->remove(e) != true) throw new Boxception (Boxception::ADD_RETURN_VALUE);
	if (box->size() != 0) throw new Boxception (Boxception::SIZE);

	box->add(e);
	if (box->size() != 1) throw new Boxception (Boxception::SIZE);
	if(box->add(e) != true) throw new Boxception (Boxception::ADD_RETURN_VALUE);
	if (box->size() != 2) throw new Boxception (Boxception::SIZE);
	if(box->remove(e) != true) throw new Boxception (Boxception::ADD_RETURN_VALUE);
	if (box->size() != 1) throw new Boxception (Boxception::SIZE);
	if(box->remove(e) != true) throw new Boxception (Boxception::ADD_RETURN_VALUE);
	if (box->size() != 0) throw new Boxception (Boxception::SIZE);

	if(box->remove(e) != false) throw new Boxception (Boxception::ADD_RETURN_VALUE);
}


