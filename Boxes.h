/***************************************************************************************************************
 *
 *	Boxes<E> - These are continers of the recyclable data, Settable.
 *
 */

template <typename E>
class Boxes
{
	public:
		virtual bool add(E* item) = 0;
		virtual bool remove(E* item) = 0;

		virtual void begin () = 0;
		virtual bool hasNext () = 0;
		virtual E* next () = 0;

		virtual int size () = 0;
};
