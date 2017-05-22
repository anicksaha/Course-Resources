#include<iostream>
#include<Windows.h>
#include<future>
using namespace std;
int AddFun(int x, int y)
{
	for (size_t i = 0; i < 10; i++)
	{
		cout << "AddFun job i=" << i << endl;
		Sleep(1000);
	}

	return x + y;
}

int SubFun(int x, int y)
{
	for (size_t i = 0; i < 10; i++)
	{
		cout << "SubFun job i=" << i << endl;
		Sleep(1000);
	}

	return x - y;
}
void main_4_1()
{
	future<int> f1 = async(AddFun, 10, 20);
	//future<int> f2 = async(SubFun);
	for (size_t i = 0; i < 10; i++)
	{
		cout << "Main job i=" << i << endl;
		Sleep(1000);
	}
	int result = f1.get();
	cout << "result=" << result << endl;
}