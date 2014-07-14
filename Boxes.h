/***************************************************************************************************************
 *
 *	Boxes<E> - These are continers of the recyclable data, Settable.
 *
 */

template <typename E>
class Boxes
{
	public:
		bool add(E* item);
		bool remove(E* item);

		void begin ();
		bool hasNext ();
		E* next ();

		int size ();
};
