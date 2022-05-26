#include <iostream>
using namespace std; 



class Foobar
{
public : 
	void print() const
	{
		cout << " I am foobarred " << endl; 
	}
};
class Integer {

private : 
	int* intptr; 
	Foobar foo;  // important !

public : 
	Integer(int i)
	{
		intptr = new int; *intptr = i; 
	}

	Integer()  // disruptor , like deconstructor 
	{
		delete intptr; 
	}

	void printFoo() const
	{
		foo.print(); 
	}
};
int main()
{
	Integer i(10); 
	i.printFoo(); 


	return 0; 
}