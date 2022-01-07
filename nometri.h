#ifndef NOMETRI_H
#define NOMETRI_H
#include <iostream>
using namespace std;
typedef struct {
	double tann;
	double x2;
	double jawaban;
} trigonometri2;

double hitungtantrigonometri(trigonometri2 trx);
void generatetantrigonometri(trigonometri2 &trx);
void tulisPertanyaantantrigonometri(trigonometri2 trx);
void bacaJawabantantrigonometri(trigonometri2 &trx);
bool cekJawabantantrigonometri(trigonometri2 trx);
void tanlur(trigonometri2 trx, struct account *acc);

#endif
