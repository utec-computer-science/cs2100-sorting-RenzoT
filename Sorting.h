//
// Created by Renzo on 1/04/2020.
//

#ifndef CS2100_SORTING_RENZOT_SORTING_H
#define CS2100_SORTING_RENZOT_SORTING_H

#include <vector>
#include <algorithm>
using namespace std;

class Sorting {
private:
    vector<int> myvec;
public:
    Sorting(const vector<int> &myvec);
    int PosMin(int i, int j);
    void Intercambia(int i, int pmin);
    void imprimir();
    void Combinar(int low,int med, int high);
    void Empujar(int prim, int ult);
    int Pivote(int low, int high);
    //Mandatory
    void InsertSort();
    void SelectionSort();
    void BubbleSort();
    void MergeSort(int low, int high);
    void HeapSort();
    void QuickSort(int low, int high);
    //Extra
    void ShellSort();
    void BinSort();


};


#endif //CS2100_SORTING_RENZOT_SORTING_H
