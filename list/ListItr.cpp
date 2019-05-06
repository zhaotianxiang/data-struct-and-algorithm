#include"ListNode.cpp"
#define NULL 0
template <class Object>
class ListItr
{
private:
	ListItr(ListNode<Object> *theNode):current(theNode){};
	ListNode<Object> *current;
	friend class List<Object>;

public:
	ListItr():current(NULL)
	{

	}

	bool isPastEnd() const
	{
		return current == NULL;
	}

	void advance()
	{
		if(!isPastEnd())
			current = current->next;
	}

	const Object & retrieve() const
	{
		if(isPastEnd())
			//throw BadIterator();
			;
		return current->element;
	}

};
