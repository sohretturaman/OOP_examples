
#include "Result.h"
#include "User.h"
#include "Employee.h"
#include <list>



public __interface UserService {

    Result add(User user); 
    list<User> userList();
    void deleting(User user); 
    void upload(User user); 

};


/*
export void helloworld() {
    cout << "hello w ";
}

*/

/*

module;
#include <iostream>
import DefaultPrinter;

export module TabbedPrinter;

export struct TabbedPrinter : DefaultPrinter
{
    void print_separator()
    {
        std::cout << "\t";
    }
};*/