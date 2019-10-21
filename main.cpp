#include <iostream>

int main()
{
	{
		std::shared_ptr<std::string> sharedString = std::make_shared<std::string>("Shared sample");
		std::weak_ptr<std::string> secondWeak = sharedString;
		{
			std::unique_ptr<std::string> uniquePtr = std::make_unique<std::string>("Sample string");
			// std::string* ptr = uniquePtr; Not possible!
			std::shared_ptr<std::string> sharedPtr = sharedString;
			std::weak_ptr<std::string> weakPtr = secondWeak;
		}
	}

	system("pause");
}