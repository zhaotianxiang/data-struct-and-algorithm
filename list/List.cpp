#include"ListItr.cpp"

template <class Object>

class List
{
public:
	List();
	List(const List & rhs);
	~List();

	bool isEmpty() const;
	void makeEmpty();
	ListItr<Object> zeroth() const;
	ListItr<Object> first() const;
	void insert(const Object & x, const ListItr<Object> &p);
	ListItr<Object> find(const Object &x) const;
	void remove(const Object &x);

	const List & operator=(const List & rhs);

private:
	ListNode<Object> *header;
};

template <class Object>
List<Object>::List()
{
	header = new ListNode<Object>;
}

template <class Object>
bool List<Object>::isEmpty() const
{
	return header->next == NULL;
}

template <class Object>
ListItr<Object> List<Object>::zeroth() const
{
	return ListItr<Object>(header);
}

template <class Object>
ListItr<Object> List<Object>::first() const
{
	return ListItr<Object>(header->next);
}


