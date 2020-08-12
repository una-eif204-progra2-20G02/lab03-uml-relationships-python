//
// Created by mafef on 11/08/2020.
//


#include "Professor.h"

Professor::Professor(){
    this->salary = 0.0;
}

Professor::Professor(double salary) {
    this->salary = salary;
}

Professor::Professor(const string& name, string& id, double ) : Person (name, id){
    this->salary = salary;
}

double Professor::getSalary(){
    return salary;
}

void Professor::setSalary(double salary){
    this->salary = salary;
}

string Professor::toString() const{
    stringstream s;
    s << "Professor :\n" << Person::toString() << "Salary: " << getSalary() << endl;
    return s.str();
}


Professor::~Professor(){

}
