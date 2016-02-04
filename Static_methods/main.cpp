//
//  main.cpp
//  Static_methods
//
//  Created by newuser on 2/4/16.
//  Copyright © 2016 Static_methods. All rights reserved.
//

#include <iostream> 
#include "Employee.hpp"
using namespace std;



int main(int argc, const char * argv[]) {
   
    
    cout<<"Number of employees before instantiation of any objects"
        << Employee::getCount() <<endl;
    
    //creates and destroys Employee objects before main terminates
    //in this scope
    
    {
        Employee e1("Johnny", "Batman");
        Employee e2("Aflack", "Jones");
        
        cout<<"\nNumber of employees after objects are terminated is"
        <<Employee::getCount();
        
        cout<<"\n\nEmployee 1:"
            <<e1.getFirstName() << " " << e1.getLastName()<<"\n\n";
        cout<<"\n\nEmployee 2:"
            << e2.getFirstName()<< " " << e2.getLastName()<<"\n\n";
        
        
        
        
        
    }
    
    cout<<"\nNumber of employees after objects are deleted is"
    <<Employee::getCount() <<endl;
    
       return 0;
}
