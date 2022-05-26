#include "textBook.h"
#include"book.h"
#include "novel.h"
#include "magazine.h"


int main()
{
	Book *book[100];
	TextBook tbook[100]; 
	Novel nov[100]; 
	Magazine mag[100]; 

	cout << " # Import Books  #" << endl;

	int n; cout << " Number of Books";
	cin >> n; 

	for (int i = 0; i < n; i++)
	{
		cout << "1.Text book " << endl << "2.Novel" << endl << "3.Magazine " << endl; 

		int sw; cin >> sw;
		if (sw == 1)
			book[i] = &tbook[i];
		else if (sw == 2)
			book[i] = &nov[i]; 
		else if (sw == 3)
			book[i] = &mag[i]; 
		book[i]->Input(); 
			

	}

	cout << " Number of imported books " << endl; 
	cout << "Textbook : " << TextBook::GetNumber() << endl; 
	cout << " Novel : " << Novel::GetNumber() << endl; 
	cout << "Magazine : " << Magazine::GetNumber() << endl; 

	cout << "Details of all books " << endl; 
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". " << endl; 
		book[i]->Display(); 
	  }


	cout << " find book" << endl; 
	string exname; 
	cout << "name of book you want to find ";
	cin.ignore(); getline(cin, exname); 
	int check = 0; 

	for (int i = 0; i < n; i++)
	{
		if (book[i]->CompareName(exname))
		{
			cout << check + 1 << "." << endl;
			cout << "type of book :" << book[i]->type << endl; 
			book[i]->Display(); 
			check++; 

		 }
	  }
	
	if (check == 0)
		cout << "NO DATA " << endl; 
	return 0; 
}











