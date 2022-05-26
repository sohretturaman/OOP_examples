#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book {
private :
	string name, publishing_company;
	int size, page, year; 

public:
	string type;
	Book() {
		name = type = publishing_company = "none";
		size = page = year = 0; 
	}

	void BaseInput()
	{
		cout << "name of  this book :"; 
		cin.ignore(); 
		getline(cin, name); 

		cout << " publishing company : "; 
		getline(cin, publishing_company); 
		
		cout << "size of this book "; 
		cin >> size; 

		cout << "number of pages "; 
		cin >> page; 

		cout << "year  ";
		cin >> year; 

	 }

	virtual void Input() {};

	void BaseDisplay()
	{
		cout << "name of this book : " << name; 
		cout << " size of this book :" << size; 
		cout << " number of pages  :" << page; 
		cout << "publishing company :" << publishing_company;
		cout << "year of manufacture : " << year; 
	}

	virtual void Display() {}; // süslu parantezleri unutma

	bool CompareName(string  exname)
	{
		return ((name == exname) ? true: false); // if in line 
	}
};


























/*
What does Cin ignore () do in C++?
The cin. ignore() function is used which is used to ignore or clear one or more characters from the input buffer. To get the idea about ignore() is working, we have to see one problem, and its solution 
is found using the ignore() function*/