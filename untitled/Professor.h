//
// Created by mafef on 11/08/2020.
//

#ifndef UNTITLED_PROFESSOR_H
#define UNTITLED_PROFESSOR_H

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

    string toString() const override;

    virtual ~Professor();

};


#endif //UNTITLED_PROFESSOR_H
