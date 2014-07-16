#include "Boxception.h"

template <typename E>
class BoxTester
{
	private:
		void addElements (Boxes<E>* box, int n, E* value);
		void removeElements (Boxes<E>* box, int n, E* value);
	public:
		void test (Boxes<E>* box);

};

template <typename E>
void BoxTester<E>::addElements(Boxes<E>* box, int n, E* value)
{
	for (int i = 0; i < n; i++)
	{
		if(box->add(value) != true) throw new Boxception (Boxception::ADD_RETURN_VALUE);
		if (box->size() != (i+1)) throw new Boxception (Boxception::SIZE);
	}
}

template <typename E>
void BoxTester<E>::removeElements(Boxes<E>* box, int n, E* value)
{
	int size_i = box->size();
	for (int i = 0; i < n; i++)
	{
		if (size_i - (i+1) >= 0)
		{
			if(box->remove(value) != true) throw new Boxception (Boxception::ADD_RETURN_VALUE);
			if (box->size() != (size_i - (i+1))) throw new Boxception (Boxception::SIZE);
		}
		else
		{
			if(box->remove(value) != false) throw new Boxception (Boxception::ADD_RETURN_VALUE);
			if (box->size() != 0) throw new Boxception (Boxception::SIZE);
		}

	}
}

template <typename E>
void BoxTester<E>::test (Boxes<E>* box)
{
	E* e = new E;
	addElements(box, 1, e);
	removeElements(box, 1, e);

	addElements(box, 10, e);
	removeElements(box, 11, e);

	Boxes<E>* box_copy = box->copy();
	box->begin();
	box_copy->begin();
	while (box->hasNext())
	{
		if (!box->next()->equals(box_copy->next())) throw new Boxception (Boxception::COPY);
	}
	if (box_copy->hasNext() == true) throw new Boxception (Boxception::COPY);
}


