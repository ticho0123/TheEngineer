#ifndef GO_H
#define GO_H
#include <iostream>
using namespace std;
typedef struct {
	double sinn;
	double x1;
	double jawaban;
} trigonometri1;

double hitungsintrigonometri(trigonometri1 trs);
void generatesintrigonometri(trigonometri1 &trs);
void tulisPertanyaansintrigonometri(trigonometri1 trs);
void bacaJawabansintrigonometri(trigonometri1 &trs);
bool cekJawabansintrigonometri(trigonometri1 trs);
void sinnlur(trigonometri1 trs, struct account *acc);

#endif
