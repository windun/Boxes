template <typename E>
class Settable {
    public:
        bool set (E& value);
        bool equals (E& value);
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
        int getValue ();
};
