#ifndef TRI_H
#define TRI_H
#include <iostream>
using namespace std;
typedef struct {
	double coss;
	double x;
	double jawaban;
} trigonometri;
double hitungcostrigonometri(trigonometri tr);
void generatecostrigonometri(trigonometri &tr);
void tulisPertanyaancostrigonometri(trigonometri tr);
void bacaJawabancostrigonometri(trigonometri &tr);
bool cekJawabancostrigonometri(trigonometri tr);
void coslur(trigonometri tr, struct account *acc);
void trigonometricuy(trigonometri tr);

#endif
