template <typename E>
class ListSettable {
	class Node
	{
		public:
			Node (E* item);
			E* item;
			Node* next;
			Node* prev;
	};
    private:
	 	Node* find (E* item);
        Node* head;
        Node* tail;
        Node* ptr;
        int size_;



    public:
        bool add(E* item);
        bool remove(E* item);
    
        void begin ();
        bool hasNext ();
        E* next ();

        int size ();
        ~ListSettable ();
};

template <typename E>
ListSettable<E>::Node::Node(E* item)
{
	this->item = item;
}

template <typename E>
typename ListSettable<E>::Node* ListSettable<E>::find(E* item)
{
	Node* p = head;
	while (p != 0)
	{
		if(p->item->equals(item)) break;
		p = p->next;
	}
	return p;
}


template <typename E>
bool ListSettable<E>::add(E* item)
{
	if (head == 0)
	{
		head = new Node (item);
		tail = head;
		tail->next = 0;
	}
	else
	{
		tail->next = new Node (item);
		tail->prev = tail;
		tail = tail->next;
		tail->next = 0;
	}
	size_++;
    return true;
}

template <typename E>
bool ListSettable<E>::remove(E* item)
{
    Node* n = find (item);
    if (n == 0) return false;
    n->prev->next = n->next;
    n->next->prev = n->prev;
    //----------------------> recycle n;
    size_--;
    return true;
}

template <typename E>
void ListSettable<E>::begin ()
{
	ptr = head;
}

template <typename E>
bool ListSettable<E>::hasNext ()
{
    return ptr != 0;
}

template <typename E>
E* ListSettable<E>::next ()
{
	E* val = ptr->item;
	ptr = ptr->next;
    return val;
}

template <typename E>
int ListSettable<E>::size ()
{
	return size_;
}

template <typename E>
ListSettable<E>::~ListSettable ()
{
	ptr = head;
	while (ptr != 0)
	{
		Node* next = ptr->next;
		delete ptr;
		ptr = next;
	}
	head = 0;
	tail = 0;
}
