//
// Created by mafef on 11/08/2020.
//

#include "Person.h"

Person::Person(){
    this->name = " ";
    this->id = " ";
}

Person::Person(const string& name, string& id){
    this->name = name;
    this->id = id;
}

string Person::getName(){
    return name;
}

void Person::setName(string& name){
    this->name = name;
}

string Person::getId(){
    return id;
}

void Person::setId(string& id){
    this->id = id;
}


string Person::toString() {
    stringstream s;
        s << name << " \n ";
        s << " Id: " << id << endl;
    return s.str();
}

Person::~Person(){
}
