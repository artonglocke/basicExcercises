#include <iostream>
#include <vector>

template <typename T>
T maximum(T x, T y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

template <class T>
void bubbleSort(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; i < j ; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				/*int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;*/

				std::swap(arr[j], arr[j - 1]);
			}
		}
	}
}

template <typename T>
class Array
{
public:
	Array(T arr[], int size);
	~Array();

	void print();
	void bubbleSort();
	T max();
	T min();
private:
	T *_ptr;
	int _size;
};

template <typename T>
Array<T>::Array(T arr[], int size)
{
	_ptr = new T[size];
	_size = size;
	for (int i = 0; i < size; i++)
	{
		_ptr[i] = arr[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] _ptr;
}

template <typename T>
void Array<T>::print()
{
	std::cout << std::endl;
	for (int i = 0; i < _size; i++)
	{
		std::cout << _ptr[i] << " ";
	}
}

template <typename T>
void Array<T>::bubbleSort()
{
	for (int i = 0; i < _size; i++)
	{
		for (int j = _size - 1; i < j; j--)
		{
			if (_ptr[j] < _ptr[j - 1])
			{
				/*int temp = _ptr[j];
				_ptr[j] = _ptr[j - 1];
				_ptr[j - 1] = tmp;*/

				std::swap(_ptr[j], _ptr[j - 1]);
			}
		}
	}
}

int main()
{
	std::vector<int> intVector;

	std::cout << maximum<int>(5, 10) << std::endl;
	std::cout << maximum<float>(7.6, 4.5) << std::endl;
	std::cout << maximum<char>('z', 'S') << std::endl;

	int arr[] = { 10, 30, 50, 70, 27, 3, 4, 69 };
	int size = sizeof(arr) / sizeof(int);
	bubbleSort(arr, size);
	std::cout << "Sorted: " << std::endl;
	std::string letters = "dkjashdkjhaskjdhkljnasfkljueiwzfP79";
	char chars[] = { 'd', 'k', 'j', 'a', 's', 'h', 'd', 'k', 'j', 'h', 'a', 's', 'k', 'j', 'd', 'h', 'k', 'l', 'j', 'n', 'a', 's'};


	std::cout << std::endl;
	std::cout << "Characters:" << std::endl;

	int charsSize = sizeof(chars) / sizeof(char);
	Array<char> charArray(chars, charsSize);
	charArray.bubbleSort();
	charArray.print();
	float floats[] = { 37.78f, 12.9f, 32.23f, 9.0f };
	Array<float> floatArray(floats, 4);
	floatArray.bubbleSort();
	floatArray.print();

	system("pause");
}