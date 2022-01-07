#ifndef U4_H
#define U4_H

#include <iostream>
using namespace std;

typedef struct {
	int a, b, u4, f, jawaban;
}SukuKeEmpat;

typedef struct {
	int c, d, e, g, h;
}Jumlah12Suku;

typedef struct {
	int k, l, m, o, n;
}PersamaanLinear;

double hitungSukuKeEmpat (SukuKeEmpat Skm);
void generateSukuKeEmpat (SukuKeEmpat &Skm);
void tulisPertanyaanSukuKeEmpat (SukuKeEmpat Skm);
void bacaJawabanSukuKeEmpat (SukuKeEmpat &Skm);
bool cekJawabanSukuKeEmpat (SukuKeEmpat Skm);
void SukuKeEmpatlur(SukuKeEmpat &Skm, struct account *acc);

double hitungJumlah12Suku (Jumlah12Suku Jsu);
void generateJumlah12Suku (Jumlah12Suku &Jsu);
void tulisPertanyaanJumlah12Suku (Jumlah12Suku Jsu);
void bacaJawabanJumlah12Suku (Jumlah12Suku &Jsu);
bool cekJawabanJumlah12Suku (Jumlah12Suku Jsu);
void Jumlah12Sukulur (Jumlah12Suku &Jsu, struct account *acc);

double hitungPersamaanLinear (PersamaanLinear Psl);
void generatePersamaanLinear (PersamaanLinear &Psl);
void tulisPertanyaanPersamaanLinear (PersamaanLinear Psl);
void bacaJawabanPersamaanLinear (PersamaanLinear &Psl);
bool cekJawabanPersamaanLinear (PersamaanLinear Psl);
void PersamaanLinearlur(PersamaanLinear &Psl, struct account *acc);




#endif
