
#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring>
#include <fstream>
#include<algorithm>
#include <stdio.h>

using namespace std; 

class Student {
public : 
	         long int reg; 
	          char name[80], branch[50]; 
	
	         void input() 
	          {
				 cout << " \n Enter name : ";
				 gets_s(name);
				 cout << " \n Enter roll no ";
				 cin >> reg;
				 fflush(stdin); 
				 cout << " Enter Branch : ";
				 gets_s(branch); 

		
	          }

			 void display()
			 {
				 system("CLS"); // system(puse ) ile de yapýlabilir herhangi bir 
				     // tuþa basmadýðý sürece konslodaki yazý kalýr , bir tuþa bstýpý anda ekraný temizlersin 
				 cout << "\t \t display reccords \n"; 
				 cout << "name : " << name; 
				 cout << "Reg no :" << reg; 
				 cout << "Branch : \n" << branch; 
				 
				 system("pause"); 
				 system("cls"); 

			  }

			 bool operator ==(Student a)
			 {
				 if (reg == a.reg)
					 return true;
				 else
					 return false; 
			 }

};

vector <Student> v; 
int search_reg(long int reg, int& i);
void get_file()
{
	Student x; 
	int i = 0; 
	fstream f;
	f.open("collage.txt", ios::in);  // dosya iþlemleri
	 
	if (f)
	{
		f.read((char*)&x, sizeof(class Student));
		while (!f.eof())
		{
			v.push_back(x);
			f.read((char*)&x, sizeof(class Student));

		}
	}

	else
		;
	f.close(); 


}
void bubblesort()
{
	int i, j; 
	Student x; 
	for (i = 0 ; i < v.size(); i++)
		 for (j= 0 ; j<v.size()-1 ; j++)
			 if (v[j].reg > v[j + 1].reg)
			 {

				 x = v[j]; 
				 v[j] = v[j + 1]; 
				 v[j + 1] = x; 
			 }
}

void insert_new()
{
	char ch = 'y'; 
	int ta; 

	while (ch =='y')
	{ 
		fflush(stdin); 
		Student x; 
		x.input(); 
		if (search_reg(x.reg, ta) == 0)
		{
			v.push_back(x);
		}
		else
			cout << "\n THE REGÝSTRATÝON NO . ALREADY EXÝST !! \N CANNOT ADD  " << endl; 
		cout << " press  [Y] to enter more"; 
		cin >> ch; 
		fflush(stdin); 

 	}
}

void write_file()
{
	bubblesort(); 
	fstream f; 
	f.open("collage.txt", ios::out); 
	for (int i = 0; i < v.size(); i++)
	{
		Student x = v[i]; 
		f.write((char*)&x, sizeof(class Student)); 

	  }
	f.close(); 

}

int search_reg(long int reg, int& i)
{
	int ta = 0; 
	for (i = 0; i < v.size(); i++)
	{
		if (v[i].reg == reg)
		{
			ta = 1; 
			break; 
		}

	}
	return ta; 
}

int search_name(char name[], vector <int>& vi)
{
	int i,ta = 0; 
	for (int i = 0; i < v.size(); i++)
	{
		if (strcmp(v[i].name, name) == 0)
		{
			ta = 1; 
			vi.push_back(i); 
		 }

	 }
	return ta; 
}

int search_branch(char branch[], vector <int>& vj)
{
	int i, ta = 0; 
	  
	 for (i = 0 ; i < v.size();i++)
		 if (v[i].branch == branch)
		 {
			 ta = 1; 
			 vj.push_back(i); 
		 }
	 return ta; 

}


void search_and_show()
{
	int ch, i, ta = 0;
	char name[80], branch[50];
	vector <int> vi;
	vector <int> vj; 
	long int reg; 
poi :

	cout << "\n 1.press to search reg no "
		<< " \n press to search name"
		<< " \n press to search branch"; 
	cin >> ch; 

	switch (ch)
	{
	case 1 : 
		cout << " \n enter reg no : " << endl; 
		cin >> reg; 
		if (search_reg(reg, i) == 1)
			v[i].display();

		else
			cout << "\n Record NOT FOUND" << endl; 
		break; 

		
	case 2: 
		cout << "Enter name"; 
		if (search_name(name, vi) == 1)
		{
			for (int j = 0; j < vi.size(); j++)
				v[vj[j]].display();
		}
		else
			cout << "\n Record NOT FOUND"; 
		break; 


	case 3 : 
		cout << "\n Enter a  Branch" << endl; 
		fflush(stdin);
		gets_s(branch); 

		if (search_branch(branch, vj) == 1)
		{
			for (int j = 0; j < vj.size(); j++)
				v[vj[j]].display();
		}
		else
			cout << "\n Record not found" << endl; 
		break; 

	default:
		cout << " \n Wrong chooice !!"; 
       
		goto poi;

	 }
}


void show()
{
	int i;
	for (i = 0; i < v.size(); i++)
		v[i].display(); 
}

void delete_data()
{
	int i, j; 
	long int reg; 
	vector <Student>::iterator p = v.begin(); 
	cout << "\n Enter Reg No : "; 
	cin >> reg; 

	if (search_reg(reg, i) == 1)
	{
		Student x = v[i]; 
		cout << "\n The following data being deleted "; 
		x.display(); 
		p += i; 
		v.erase(p, p + 1); 
	 }


}

void edit_data()
{
	int i, j;
	long int reg; 
	vector <Student> vi; 
	cout << "\n Enter Reg NO: " << endl; 
	cin >> reg; 

	if (search_reg(reg, i) == 1)
	{
		cout << "Enter new data : ";
		fflush(stdin); 
		v[i].input(); 

	 }
}


int main()
{
	int i = 1; 
	get_file(); 

	while (i)
	{
		system("CLS");
		cout << "\t\t-----------------------------------------------\n";
		cout << "\t\t     Gosavi Polytechnic Management System\n";
		cout << "\t\t----------------------------------------------\n";
		cout << "\n\t\t\tEnter <1> to Add new student"
			<< "\n\t\t\tEnter <2> to Display all student"
			<< "\n\t\t\tEnter <3> to Remove student"
			<< "\n\t\t\tEnter <4> to Edit student"
			<< "\n\t\t\tEnter <5> to Search student"
			<< "\n\t\t\tEnter <0> to Exit\n";
		cout << "\n\n\t\t\tEnter Your Choice:";


		cin >> i; 

		switch(i)
		{
		case 1 : 
			insert_new(); 
			break; 

		case 2 : 
			show(); 
			break; 

		case 3 : 
			delete_data(); 
			break; 

		case 4 : 
			edit_data(); 
			break; 

		case 5 : 
			search_and_show();

		case 0 : 
			write_file();
			break;

		default:
			cout << " \n Wrong Choice !!! \n Try Again"; 
		}
	}



	return 0; 

}



/*
   overloading 
#include <iostream>
using namespace std;

class Distance {
   private:
	  int feet;             // 0 to infinite
	  int inches;           // 0 to 12

   public:
	  // required constructors
	  Distance() {
		 feet = 0;
		 inches = 0;
	  }
	  Distance(int f, int i) {
		 feet = f;
		 inches = i;
	  }

	  // overload function call
	  Distance operator()(int a, int b, int c) {
		 Distance D;

		 // just put random calculation
		 D.feet = a + c + 10;
		 D.inches = b + c + 100 ;
		 return D;
	  }

	  // method to display distance
	  void displayDistance() {
		 cout << "F: " << feet << " I:" << inches << endl;
	  }
};

int main() {
   Distance D1(11, 10), D2;

   cout << "First Distance : ";
   D1.displayDistance();

   D2 = D1(10, 10, 10); // invoke operator()
   cout << "Second Distance :";
   D2.displayDistance();

   return 0;
}

*/

/* gets function using it reads a line from stdin

#include <stdio.h>

int main () {
   char str[50];

   printf("Enter a string : ");
   gets(str);

   printf("You entered: %s", str);

   return(0);
}*/

/*

vector <int > v6 ;
v6.insert(v6.begin(),5 ); // baþa eklem yapar
v6.insert(v6.end(),10); // sona ekleme yapor
v6.insert(v6.begin(),7); 

print(v6);
v6.push_back(88); // SONA BÝR EKLEME YAPAR
v6.pop_back(); // SON EKLEDÝÐÝN ELMANI ÇIKARIR

cout << v6.front() << "\t "; // baþtaki degeri gostetrir
 cout << v6.back(); // sondaki degeri gosterir

 v6.erase(v6.begin()+1, v6.end()-1);
 print(v6);

 cout << v6.size() << endl  ;  ; // kaç elaman olduðunu söyler

 cout << v6.capacity() << endl ; // kapasiteyi verir


 template <typename T >
void print ( vector <T> &v )
{
	typename vector <T> ::iterator i = v.begin();
	while (i != v.end())
	 cout << *i++ << " ";
	 cout << endl ;
}



*/