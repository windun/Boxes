template <typename E>
class Settable {
    public:
        bool set (E& value);
        E* get ();
};

class Vector3f : public Settable<Vector3f>
{
    private:
        int value;
    public:
        bool set (Vector3f& val);
        Vector3f* get ();
        int getValue ();
};
