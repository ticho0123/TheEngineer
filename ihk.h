#ifndef IHK_H
#define IHK_H
#include <iostream>
using namespace std;
typedef struct{
	double a,t, hasil,lm;
	} rumus;
void bacaihk( rumus &enak, struct account *acc);
double ihk(rumus enak);
void tulisihk (rumus enak);
void segitigalurrr(rumus enak);

#endif
