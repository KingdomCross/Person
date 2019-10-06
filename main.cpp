/**
 * Alex Chheng
 * CECS 282 Lab Assignment 4
 */
#include <iostream>
#include "person.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    int size = 0;
    cout << "Enter the size of array:" << "\n";
    cin >> size;

    person * persPtr[100];

    persPtr[0] = new person("Alex", 0);

    string x = "Might Perfect";
    float y = 0;

    for (int i = 0; size > i; i++){
        cout << "Enter name: \n";
        cin >> x;
        cout << "Enter salary: \n";
        cin >> y;
        persPtr[i] = new person(x, y);
    }

    cout << "--Unsorted\n";
    for(int i = 0; size > i; i++){
        cout << persPtr[i]->getName() << " - " << persPtr[i]->getSalary() << "\n";
    }

    for(int i = 0; size > i; i++){
        persPtr[i]->bsort(persPtr, size, true);
    }

    cout << "--Sorted Name\n";
    for(int i = 0; size > i; i++){
        cout << persPtr[i]->getName() << " - " << persPtr[i]->getSalary() << "\n";
    }

    cout << "--Unsorted Salary\n";
    for(int i = 0; size > i; i++){
        cout << persPtr[i]->getName() << " - " << persPtr[i]->getSalary() << "\n";
    }

    for(int i = 0; size > i; i++){
        persPtr[i]->bsort(persPtr, size, false);
    }

    cout << "--Sorted Salary\n";
    for(int i = 0; size > i; i++){
        cout << persPtr[i]->getName() << " - " << persPtr[i]->getSalary() << "\n";
    }


    return 0;
}