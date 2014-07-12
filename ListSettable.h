template <typename E>
class ListSettable {
    private:
        E item;

    public:
        bool add(E& item);
        bool remove(E item);
    
        bool hasNext ();
        E next ();
};

template <typename E>
bool ListSettable<E>::add(E& item_)
{
    item.set(item_);
    std::cout << item.getValue();
    return true;
}

template <typename E>
bool ListSettable<E>::remove(E item)
{
    std::cout << item;
    return true;
}

template <typename E>
bool ListSettable<E>::hasNext ()
{
    return true;
}

template <typename E>
E ListSettable<E>::next () {
    return 0;
}
