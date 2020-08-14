//
// Created by mafef on 11/08/2020.
//

#ifndef BASIC_00_EXAMPLE_PROFESSOR_H
#define BASIC_00_EXAMPLE_PROFESSOR_H

#include "Person.h"

class Professor :public Person {

private:

    double salary;

public:

    Professor();
    Professor(double salary);
    Professor(const string& name, string& id, double salary);

    double getSalary();
    void setSalary(double);

    string toString() override;

    virtual ~Professor();

};


#endif //BASIC_00_EXAMPLE_PROFESSOR_H
