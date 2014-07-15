/***************************************************************************************************************
 *
 *	ListSettable<E> - This is an implementation of a doubly-linked list.
 *
 */

template <typename E>
class ListSettable : public Boxes <E>{
	class Node
	{
		public:
			Node (E* item);
			E* item;
			Node* next;
			Node* prev;
	};
    private:
	 	Node* find (E* item);	// O(n) searches for the item in the list
        Node* head;				// points to the first item
        Node* tail;				// points to the last item (not null)
        Node* ptr;				// iterator-less iterations
        int size_;

    public:
        bool add(E* item);		// adds the item to the tail of the list
        bool remove(E* item);	// Uses find (E* item)
    
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
		Node* n = new Node (item);
		n->prev = tail;
		n->next = 0;

		tail->next = n;
		tail = n;
	}
	size_++;
    return true;
}

template <typename E>
bool ListSettable<E>::remove(E* item)
{
    Node* n = find (item);
    if (n == 0) return false;
    if (size_ == 1)
    {
    	delete n;
    	head = tail = ptr = 0;
    }
    else
    {
        n->prev->next = n->next;
        n->next->prev = n->prev;
        //----------------------> recycle n;
    }
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
