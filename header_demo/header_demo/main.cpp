#include <iostream>

#include "MyInteger.h"

using namespace std;
int main()
{
	MyInteger m;
	m.set(88);

	cout << "the contents : " << m.get() << endl;
	cout << "hello world" << endl;

	cin.get();
}