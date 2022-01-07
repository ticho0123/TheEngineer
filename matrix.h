#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

typedef struct {
    int matrix1[10][10], matrix2[10][10], hasil[10][10], jawaban[10][10], a, b, i, j, data1, data2, skalar, dif[10][10];
} matrix;

typedef struct {
    string nama;
    int nilai;
} pemain;

typedef struct {
    pemain list[3];
    int jml;
} listPemain;
//operasi penghitungan
//penjumlahan
void hitungPenjumlahan(matrix M, struct account *acc);
void generatePenjumlahan(matrix &M);
void tulisSoalPenjumlahan(matrix M);
void bacaJawabanPenjumlahan(matrix &M);
bool cekJawabanPenjumlahan(matrix M);
void penjumlahanmatrixlur(matrix &M, struct account *acc);
//pengurangan
void hitungPengurangan(matrix M);
void generatePengurangan(matrix &M);
void tulisSoalPengurangan(matrix M);
void bacaJawabanPengurangan(matrix &M);
bool cekJawabanPengurangan(matrix M);
void penguranganmatrixlur( matrix &M, struct account *acc);
//perkalian skalar
void hitungPerkalian(matrix M);
void generatePerkalian(matrix &M);
void tulisSoalPerkalian(matrix M);
void bacaJawabanPerkalian(matrix &M);
bool cekJawabanPerkalian(matrix M);
void perkalianmatrixlur(matrix &M, struct account *acc);
//transpose
void hitungTranspose(matrix M);
void generateTranspose(matrix &M);
void tulisSoalTranspose(matrix M);
void bacaJawabanTranspose(matrix &M);
bool cekJawabanTranspose(matrix M);
void transposematrixlurr(matrix &M, struct account *acc);

void pengurangan(matrix &M);
void penjumlahan(matrix &M);
void perkalianSkalar(matrix &M);
void transpose(matrix &M);


#endif
