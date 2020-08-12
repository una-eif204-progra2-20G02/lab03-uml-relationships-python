//
// Created by mafef on 11/08/2020.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

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
    virtual string toString() const;

    virtual ~Person();

};


#endif //UNTITLED_PERSON_H
