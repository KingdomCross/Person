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

void person::setPerson() {
    int x;
    int y;
    cout << "Input name: \n";
    cin >> x;
    name = x;
    cout << "Inut salary: \n";
    cin >> y;
    salary = y;
}

string person::getName() {
    return name;
}

float person::getSalary() {
    return salary;
}

void person::bsort(person **, int n, bool s) {

}

void person::order(person **, person **) {

}
