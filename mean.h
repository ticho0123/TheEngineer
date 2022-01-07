#ifndef MEAN_H
#define MEAN_H

#include<iostream>
using namespace std;

typedef struct {
    double jawab,hasil, jml;
    int nilai[10],i,data;
}mean;


void bacaDataMean (mean &A) ;
void tulisMean (mean &A) ;
void generateMean(mean &A);
void bacaJawabanMean(mean &A);
bool cekJawabanMean(mean A);
void meanlur(mean &A, struct account *acc);


#endif // MEAN_H
