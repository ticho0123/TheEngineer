#ifndef MAIN_H
#define MAIN_H

struct account {
	char username[64];
	char password[64];
	unsigned int point;
};

void login();
void registrasi();
void first_page();
void second_page(struct account *acc);
void opt_1(bool random, struct account *acc);
void fourth_page();


void save_point(struct account *acc);
void show_high_score();

void hitungsuku();
void hitungjumlahlur();

void perslinlur();
void jajargenjanglurs();
void meanmantab();

#endif
