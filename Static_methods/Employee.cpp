//
//  Employee.cpp
//  Static_methods
//
//  Created by newuser on 2/4/16.
//  Copyright © 2016 Static_methods. All rights reserved.
//

#include "Employee.hpp"
#include <iostream>
using namespace std;

unsigned int Employee::count = 0;

unsigned int Employee::getCount()
{
    
    return count;
    
}

Employee::Employee(const string &first, const string &last) : firstName(first), lastName(last)
{
    ++count;
    cout<<"Employee constructor for" <<firstName
    << ' ' <<lastName << "called" <<endl;
    
    
    
    
    
}


Employee::~Employee()
{
    cout<<"Employee destructor called to deallocate objects"<<firstName
    <<' ' <<lastName <<endl;
    
    //decrement static count of employees
    --count;
}

string Employee::getFirstName()const
{
    return firstName;
    
}

string Employee::getLastName()const
{
    return lastName;
}



