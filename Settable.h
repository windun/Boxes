/***************************************************************************************************************
 *
 *	Settable<E> - This class assumes the set() method. This will be used in the Settable containers
 *		for recycling data. Containers should follow the following design pattern:
 *
 *				Node* old;
 *				...
 *				old.set(new_value);
 *				...
 *		The intention is to re-use old data.
 *
 */

template <typename E>
class Settable {
    public:
        virtual bool set (E& value) = 0;
        virtual bool equals (E* value) = 0;
        virtual E* copy () = 0;
};

class Vector3f : public Settable<Vector3f>
{
    private:
        int value;
    public:
        Vector3f ();
        Vector3f (int value);

        bool set (Vector3f& vector);
        bool equals (Vector3f* vector);
        Vector3f* copy ();

        int getValue ();
};
