//
// Created by fabiana on 12/08/2020.
//

#include "Course.h"

Course::Course(){
    this->nrc = "";
}
Course::Course(const string& nrc){
    this->nrc =nrc;
}

void Course::setNrc(string& nrc) {
    this->nrc = nrc;
}

string Course::getNrc(){
    return nrc;
}

string Course::toString()	{
    stringstream s;
    s << "NRC: " << nrc << endl;
    return s.str();
}