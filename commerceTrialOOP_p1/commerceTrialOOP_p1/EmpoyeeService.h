
#include "Result.h"
#include "User.h"
#include "Employee.h"
#include <list>



 public __interface EmpoyeeService 
{


    Result add(Employee employee);
    list<Employee> listEmployees();
    void  upload(Employee employee); 
    void  deleting (Employee employee); 

};


 

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
};


module; //begins global module fragment

#include <iostream>

export module DefaultPrinter;

export struct DefaultPrinter
{
    void print_element(int e)
    {
        std::cout << e << " ";
    }

    void print_separator()
    {
        std::cout << ", ";
    }

    void print_eol()
    {
        std::cout << '\n';
    }
};
*/