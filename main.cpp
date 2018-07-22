#include "Student.hpp"
#include "Base.hpp"

#include <assert.h>
#include <iostream>

int main(){

    Base base;
   
    
    Student s1("Jan", "Kowalski", 123, 5.4);
    Student s2 = {"Adam", "Nowak", 222, 3.2};
    Student s3 = {"Maria", "Nowak", 111, 4.0};

    base.AddNewStudent(s1);
    base.AddNewStudent(s2);
    base.AddNewStudent(s3);
    
    base.SortByIndex();
    base.DisplayBase();
   

    
}
