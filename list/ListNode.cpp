#define NULL 0

template <class Object>
class List;

template <class Object>
class ListItr;

template <class Object>
class ListNode
{
	ListNode(const Object & theElement = Object(), ListNode * n =NULL):element(theElement),next(n){}

	Object element;
	ListNode *next;

	friend class List<Object>;  // 友元类可以访问到当前的 private 值。
	friend class ListItr<Object>;  // position
};
