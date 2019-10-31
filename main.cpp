#include <iostream>
#include <vector>
#include <memory>

template <class R>
class shared_ptr
{
public:
	shared_ptr()
	{
		myHeapObject = new R();
		referenceCount = new unsigned int(0);
		++(*referenceCount);
	}

	shared_ptr(const shared_ptr<R>& other)
	{
		myHeapObject = other.myHeapObject;
		referenceCount = other.referenceCount;
		++(*referenceCount);
	}

	~shared_ptr()
	{
		--(*referenceCount);
		if (*referenceCount == 0)
		{
			delete myHeapObject;
			delete referenceCount;
			myHeapObject = nullptr;
			referenceCount = nullptr;

		}
	}

	R* Get()
	{
		return myHeapObject;
	}

	R& operator*()
	{
		return *myHeapObject;
	}

private:
	R* myHeapObject;
	unsigned int* referenceCount;
};

class example
{
public:
	int a = 10;
	example() = default;
};
int main()
{
	shared_ptr<example> shrdptr;
	shared_ptr<example> e2(shrdptr);

	example* e = new example;
	delete e;

	std::shared_ptr<example> e2 = std::make_shared<example>();
}
