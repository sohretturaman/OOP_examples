#pragma once
#include "book.h"

class Novel:public Book {

private:
	string practice, translator, author;
public:
	static int nNovel;
	static int GetNumber()
	{
		return nNovel; 
	}

	Novel()
	{
		type = "Novel"; 
		practice = translator = author = "none"; 
	}

	void Input()
	{
		Novel::nNovel++;
		BaseInput();
		cout << "drill Book :";
		cin.ignore();
		getline(cin, practice);

		cout << "name of translator :";
		getline(cin, translator);

		cout << "name of aouthor :";
		getline(cin, author);

	}

	void Display()
	{
		BaseDisplay(); 
		cout << "name of translator :" << translator << endl; 
		cout << "name of author :" << author << endl; 
	}
		
	

};

int Novel::nNovel = 0;