#include <iostream>
#include "person.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    //person my_person("Alex", 25);
    //my_person.setPerson();
    int arr[5];
    int *p = arr;
    cout << "Enter array elements \n";
    for(int i = 0; i < 5; i++){
        cin >> *(p + i);
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < (5 - i - 1); j++){
            if (*(p + j) > *(p +(j + 1))){
                int t = *(p + j);
                *(p + j) = *(p +(j + 1));
                *(p +(j + 1)) = t;
            }
        }
    }
    cout << "\nArray after sorting are \n";
    for(int i = 0; i < 5; i++){
        cout << *(p + i) << " ";
    }

    int *dArray;
    dArray = new int[];
    return 0;
}