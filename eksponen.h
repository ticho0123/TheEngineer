#ifndef EKSPONEN_H
#define EKSPONEN_H

#include <iostream>
using namespace std;


typedef struct {
	int m1, m2;
	int f, jawaban;
} Eksponen;

int hitungEksponen(Eksponen Eks);
void generateDataEksponen(Eksponen &Eks);
void tulisPertanyaanEksponen(Eksponen Eks);
void bacaJawabanEksponen(Eksponen &Eks);
bool cekJawabanEksponen(Eksponen Eks);
void Eksponenlur(Eksponen Eks, struct account *acc);

void eksponenslurr();

#endif

