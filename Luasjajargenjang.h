#ifndef Luasjajargenjang_H
#define LUASJAJARGENJANG_H

#include <iostream>
using namespace std;


typedef struct {
	int m1, m2;
	int f, jawaban;
} Jajargenjang;

int hitungLuasjajargenjang(Jajargenjang Jjg);
void generateDataLuasJajargenjang(Jajargenjang &Jjg);
void tulisPertanyaanLuasjajargenjang(Jajargenjang Jjg);
void bacaJawabanLuasjajargenjang(Jajargenjang &Jjg);
bool cekJawabanLuasjajargenjang(Jajargenjang Jjg);
void Jajargenjanglur(Jajargenjang &Jjg, struct account *acc);

#endif

