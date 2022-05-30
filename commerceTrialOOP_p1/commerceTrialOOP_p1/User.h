#pragma once


#include <iostream>;
#include <string>

using namespace std;

 class User {
private:
	int id;
	int phone;
	string name;
	string surname;
	string password;

public:

	//User();

	User(int id, int phone, string name, string surname, string password)
	{

		this->id = id;;
		this->name = name;
		this->phone = phone;
		this->surname = name;
		this->password = password;
	}

	int getId() {
		return id;
	}
	void setId(int id) {
		this->id = id;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int  getPhone() {
		return phone;
	}
	void setPhone(int phone) {
		this->phone = phone;
	}

	string getSurname() {
		return surname;
	}

	void setSurname(string surname) {
		this->surname = surname;
	}
	string getPassword() {
		return password;
	}
	void setPassword(string  password) {
		this->password = password;
	}


};