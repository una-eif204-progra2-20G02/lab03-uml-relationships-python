//
// Created by diana on 12/8/2020.
//

#include "Student.h"

Student::Student() {
    carnet = "";
}

Student::Student(string &name, string &id, string carnet) : Person(name, id){
    this->carnet = carnet;
}

void Student::setCarnet(string carnet) {
this->carnet = carnet;
}

string Student::getCarnet() {
    return carnet;
}

string Student::toString() {
    stringstream s;
    s << Person::toString();
    s << "Carnet: " << carnet << endl;
    return s.str();
}

