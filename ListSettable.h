template <class E> class ListSettable {
    public:
        bool add(E item);
        bool remove(E item);
    
        bool hasNext ();
        E next ();
};