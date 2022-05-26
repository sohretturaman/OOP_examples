#pragma once

#include "book.h"

class Magazine : public Book {
private :
	string author; 
public : 
	static int nMagazine;
	static int GetNumber()
	{
		return nMagazine; 
	}

	Magazine() {
		author = "none"; 
		type = "Magazine"; 
	}

	void Input() {
		Magazine::nMagazine++;
		BaseInput();
		cout << "author :";
		cin.ignore(); 
		getline(cin, author);
	}

	void Display()
	{
		BaseDisplay(); 
		cout << "author :" << author << endl; 
	}

};

int Magazine::nMagazine = 0;


