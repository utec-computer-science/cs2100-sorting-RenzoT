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
    int PosMin(int i, int j);
    void Intercambia(int i, int pmin);
    void imprimir();
    //Mandatory
    void InsertSort();
    void SelectionSort();

};


#endif //CS2100_SORTING_RENZOT_SORTING_H
