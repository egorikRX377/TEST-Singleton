#include <iostream>
#include <Windows.h>



using namespace std;


class Singleton
{
private:
	Singleton() = default;
public:
	static Singleton& getInstance()
	{
		static Singleton instance;
		return instance;
	}
	void printInfo()
	{
		cout << "THIS IS SINGLETON!" << endl;
	}
};



int main()
{
	Singleton& example1 = Singleton::getInstance();
	example1.printInfo();

	Singleton& example2 = Singleton::getInstance();
	example2.printInfo();

	cout << &example1 << endl;
	cout << &example2 << endl;

	if (&example1 == &example2)
	{
		cout << "TRue" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	return 0;
}