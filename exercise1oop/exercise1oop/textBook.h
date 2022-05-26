#pragma once

#include "book.h"

class TextBook : public Book  {
private :
	string practice;
	int republish; 
public:
	static int nTextBook;
	static int GetNumber() {
		return nTextBook; 
	}

	TextBook()
	{
		type = "Text Book"; 
		practice = "none"; 
		republish = 0;
	}

	void Input()
	{
		TextBook::nTextBook++; 
		BaseInput(); 
		cout << "Drill book : "; 
		cin.ignore(); 
		getline(cin, practice); 
		cout << "republish time "; 
		cin >> republish; 
	}

	void Display()
	{
		BaseDisplay(); 
		cout << " drill Book  :" << practice << endl; 
		cout << "republish time : " << republish << endl; 
	}


};

int TextBook::nTextBook = 0; 