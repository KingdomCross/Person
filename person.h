//
// Created by alexc on 9/26/2019.
//

#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H

#include <string>

using namespace std;
class person {
    string name = "";
    float salary = 0;
public:
    person(string iname, float isalary);
    void setPerson();
    string getName();
    float getSalary();
    void bsort(person **, int n, bool s);
    void order(person**, person**);
};


#endif //PERSON_PERSON_H
