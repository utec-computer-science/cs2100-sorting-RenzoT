//
// Created by Renzo on 1/04/2020.
//

#ifndef CS2100_SORTING_RENZOT_SORTING_H
#define CS2100_SORTING_RENZOT_SORTING_H

#include <vector>
using namespace std;

class Sorting {
private:
    vector<int> myvec;
public:
    Sorting(const vector<int> &myvec);
    void imprimir();
    //Mandatory
    void InsertSort();

};


#endif //CS2100_SORTING_RENZOT_SORTING_H
