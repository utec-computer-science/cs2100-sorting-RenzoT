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

void Sorting::Intercambia(int i, int pmin) {
    int temp;
    temp = myvec[i];
    myvec[i]=myvec[pmin];
    myvec[pmin]=temp;
}

int Sorting::PosMin(int i, int j) {
    int pmin;
    pmin = i;
    for (int k=i+1; k<=j; k++)
        if (myvec[k]<myvec[pmin])
            pmin=k;
    return pmin;
}

//Mandatory
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

void Sorting::SelectionSort() {
    for (int i=0 ; i <= myvec.size()-2;i++)
        Intercambia(i,PosMin(i,myvec.size()-1));
}

void Sorting::BubbleSort() {
    for (int i=0; i <= myvec.size()-2;i++)
        for (int j = myvec.size()-1;j>=i+1;j--)
            if (myvec[j-1]>myvec[j])
                Intercambia(j-1,j);
}