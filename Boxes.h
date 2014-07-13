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
