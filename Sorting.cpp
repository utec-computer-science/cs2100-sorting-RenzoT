//
// Created by Renzo on 1/04/2020.
//

#include "Sorting.h"

Sorting::Sorting(const vector<int> &myvec) : myvec(myvec) {}

void Sorting::imprimir() {
    for (int i=0;i<myvec.size();i++){
        cout << myvec[i] << " ";
    }
}

void Sorting::InsertSort() {
    for (int i=1; i <= myvec.size(); i++){
        int x = myvec[i], j=i-1;
        while (j>=0 && x<myvec[j]){
            myvec[j+1]= myvec[j];
            j--;
        }
        myvec[j+1] = x;
    }
}
