#pragma once

#include "User.h"

class Employee:public User {
private:
	long int salary; 
	string job; 

public : 

	Employee(int id, int phone, string name, string surname, string password,
		long int salary, string job):User(id , phone, name,surname,password) 
	{
		this->job = job;
		this->salary = salary; 

	}

	int getSalary() {
		return salary; 
	 }

	void setSalary(int salary)
	{
		this->salary = salary; 
	}

	string getJob() {
		return job; 
	}

	void setJob( string job) {
		this->job = job; 
	}
};