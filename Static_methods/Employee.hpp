//
//  Employee.hpp
//  Static_methods
//
//  Created by newuser on 2/4/16.
//  Copyright © 2016 Static_methods. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include<string>

class Employee
{
public:
    Employee(const std::string &, const std:: string &);
    ~Employee();
    std::string getFirstName()const;
    std::string getLastName()const;
    
    static unsigned int getCount();
    
    
    
private:
    
    std::string firstName;
    std::string lastName;
    
    static unsigned int count;
    
    
    
};

#endif /* Employee_hpp */
