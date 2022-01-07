
#ifndef BUNGA_H
#define BUNGA_H

#include <iostream>

using namespace std;
typedef struct{
	double bunga,n;
	long int hasilbunga,hasilbungas,modal;
	} flat;
void bacabunga( flat &hore, struct account *acc);
double bunga(flat hore);
void tulisbunga(flat hore);
void bungatunggal(flat hore);

#endif
