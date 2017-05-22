#include<iostream>
using namespace std;

void Hello(int *pt)
{
	cout << "apple" << endl;
}
void Hello(int p)
{
	cout << "orange" << endl;
}

void main14()
{
	char *pc = nullptr;     // OK
	int  *pi = nullptr;     // OK
	bool   b = nullptr;     // OK. b is false.
	//int    i = nullptr;     // error
	Hello(NULL);//prints orange
	Hello(nullptr);//prints apple
}