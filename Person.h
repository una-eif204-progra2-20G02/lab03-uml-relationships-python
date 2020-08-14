//
// Created by mafef on 11/08/2020.
//

#ifndef BASIC_00_EXAMPLE_PERSON_H
#define BASIC_00_EXAMPLE_PERSON_H

#include <iostream>
#include <string>
#include <sstream>
#include <ostream>
using namespace std;

class Person {

private:

    string name;
    string id;

public:

    Person();
    Person(const string& name, string& id);


    string getName();
    void setName(string& name);
    string getId();
    void setId(string& id);
    virtual string toString();

    virtual ~Person();

};


#endif //BASIC_00_EXAMPLE_PERSON_H
