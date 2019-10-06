//
// Created by alexc on 9/26/2019.
//

#include "person.h"
#include <string>
#include <iostream>

using namespace std;

person::person(string iname, float isalary) {
    name = iname;
    salary = isalary;
}

void person::setPerson(string x, float y) {
    name = x;
    salary = y;
}

string person::getName() {
    return name;
}

float person::getSalary() {
    return salary;
}

void person::bsort(person ** pPerson, int n, bool s) {
    int j, k;

    if (s == true){
        for(j = 0; j < n - 1; j++){
            for(k = j + 1; k < n; k++){
                orderName(pPerson + j, pPerson + k);
            }
        }
    }
    else if(s == false){
        for(j = 0; j < n - 1; j++){
            for(k = j + 1; k < n; k++){
                orderSalary(pPerson + j, pPerson + k);
            }
        }
    }
}

void person::orderName(person ** pp1, person ** pp2) {
    if((*pp1)->getName() > (*pp2)->getName()){
        person* tempptr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}

void person::orderSalary(person ** pp1, person ** pp2) {
    if((*pp1)->getSalary() > (*pp2)->getSalary()){
        person* tempptr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}
