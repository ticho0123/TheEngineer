#include <time.h>
#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include "bunga.h"
#include "go.h"
#include "ihk.h"
#include "main.h"
#include "nometri.h"
#include "tri.h"
#include "eksponen.h"
#include "Luasjajargenjang.h"
#include "matrix.h"
#include "mean.h"
#include "u4.h"
matrix M;


using namespace std;

#define clr system("cls")
#define database_account "akunlur.dat"


int main()
{
	clr;
	first_page();
	return 0;
}

void first_page()
{
refirst_page:
	int pilihan;
    cout<<"\t=========================================================================================\n";
	cout<<"\t _______________________________________________________________________________________ \n";
	cout<<"\t|                                           		                                |\n";
	cout<<"\t|         1. Registrasi                           		                        |\n";
	cout<<"\t|                                                                                       |\n";
	cout<<"\t|         2. Login                                                                      |\n";
	cout<<"\t|                                                                                       |\n";
	cout<<"\t|         0. Keluar                                                                     |\n";
	cout<<"\t|_______________________________________________________________________________________|\n";
	cout<<endl;
    cout<<"\t==========================================================================================\n";
    cout<<"\t=============================== Anggota Kelompok =========================================\n";
    cout<<"\t==========================================================================================\n";
    cout<<"\t|                                   Engineer                                             |\n";
    cout<<"\t|                                  Kelompok 6                                            |\n";
    cout<<"\t==========================================================================================\n";
    cout<<"\t|          16523237 Rafi Hidayat Tarmizi                                                 |\n";
    cout<<"\t|          19523124 Desylo Santicho                                                      |\n";
    cout<<"\t|          19523204 Muhamad Thanthawi Jauhari                                            |\n";
    cout<<"\t|          19523206 Faris Al Baihaqi                                                     |\n";
    cout<<"\t==========================================================================================\n";
	cout << "\tMasukkan pilihan: ";
	cin >> pilihan;
	cin.ignore();
	switch (pilihan) {
		case 1:
			registrasi();
		break;
		case 2:
			login();
		break;
		case 0:
            cout << endl<<endl;
            cout << "Terima Kasih!\n";
            exit(0);
	}
	clr;
	goto refirst_page;
}

void second_page(struct account *acc)
{
resecond_page:
	int pilihan;
	clr;
		cout<<"\t=========================================================================================\n";
        cout<<"\t================================ Menu Aplikasi ==========================================\n";
		cout<<"\t=========================================================================================\n";
	cout << "\tPoint Anda saat ini: " << acc->point << " point\n\n";
	cout << "\t1. Kalkulator\n";
	cout << "\t2. Mengerjakan soal berdasarkan rumus\n";
	cout << "\t3. Mengerjakan soal acak\n";
	cout << "\t4. Tampilkan high score\n";
	cout << "\t0. Keluar\n";
		cout<<"\t=========================================================================================\n";
	cout << "\tMasukkan pilihan menu: ";
	cin >> pilihan;
	cin.ignore();
	switch (pilihan) {
		case 0:
			return;
			break;
        case 1:
            fourth_page();
            break;
		case 2:
			opt_1(false, acc);
			break;
		case 3:
			opt_1(true, acc);
			break;
		case 4:
			show_high_score();
			break;
	}
	goto resecond_page;
}

void fourth_page()
{
refourth_page:
	int pis;
	clr;
		cout<<"\t=========================================================================================\n";
        cout<<"\t=============================== Menu Kalkulator =========================================\n";
		cout<<"\t=========================================================================================\n";
		cout << "\t PJ : Desylo Santicho || 19523124\n";
        cout << "\t1. Trigonometri\n";
        cout << "\t2. Pythagoras segitiga siku-siku\n";
        cout << "\t3. bunga tunggal\n"<< endl;
        cout << "\t PJ : Rafi Hidayat Tarmizi || 16523237\n";
        cout << "\t4. Penjumlahan Matrix\n";
        cout << "\t5. Pengurangan Matrix\n";
        cout << "\t6. Matrix Perkalian Skalar\n";
        cout << "\t7. Transpose Matrix\n"<< endl;
        cout << "\t PJ : Faris Al Baihaqi || 19523206\n";
        cout << "\t8. aritmatika suku\n";
        cout << "\t9. aritmatika jumlah\n";
        cout << "\t10. persamaan linear\n"<< endl;
        cout << "\t PJ : Muhamad Thanthawi Jauhari || 19523204\n";
        cout << "\t11. Mean\n";
        cout << "\t12. Eksponen\n";
        cout << "\t13. Luas Jajargenjang\n\n";
        cout << "\t0. Keluar\n";
		cout<<"\t=========================================================================================\n";
        cout << "\tMasukkan pilihan menu: ";
        cin >> pis;
        cin.ignore();
        switch (pis) {
            case 0:
                return;
                break;
			case 1:
			    trigonometri tr;
			    trigonometricuy(tr);
			    break;
            case 2:
                rumus enak;
                segitigalurrr(enak);
                break;
            case 3:
                flat hore;
                bungatunggal(hore);
                break;
            case 4:
                matrix M;
                penjumlahan(M);
                break;
            case 5:
                pengurangan(M);
                break;
            case 6:
                perkalianSkalar(M);
                break;
            case 7:
                transpose(M);
                break;
            case 8:
                hitungsuku();
                break;
            case 9:
                hitungjumlahlur();
                break;
            case 10:
                perslinlur();
                break;
            case 11:
                meanmantab();
                break;
            case 12:
                eksponenslurr();
                break;
            case 13:
                jajargenjanglurs();
                break;
	}
	clr;
	goto refourth_page;
}


void registrasi()
{
	char x;
	FILE *handle;
	char cpassword[64];
	struct account acc;
	acc.point = 0;
	memset(&acc, '\0', sizeof(acc));
	cout << "\tBuat username Anda: ";
	fgets(acc.username, 64, stdin);
create_password:
	cout << "\tBuat password Anda: ";
	fgets(acc.password, 64, stdin);
	cout << "\tKetik ulang password: ";
	fgets(cpassword, 64, stdin);

	acc.username[strlen(acc.username) - 1] = '\0';
	acc.password[strlen(acc.password) - 1] = '\0';
	cpassword[strlen(cpassword) - 1] = '\0';

	if (!strcmp(acc.password, cpassword)) {
		handle = fopen(database_account, "ab");
		fwrite(&acc, sizeof(acc), 1, handle);
		fclose(handle);
		cout << "\tRegistrasi berhasil!\n";
		cout << "\tTekan enter untuk melanjutkan!\n";
		x = getchar();
	} else {
		cout << "\tKetik ulang password salah, ulangi membuat password\n\n";
		goto create_password;
	}
}

void login()
{
	FILE *handle;
	bool ok = false;
	struct account acc, in;
	handle = fopen(database_account, "rb");
	cout << "\tMasukkan username: ";
	fgets(in.username, 64, stdin);
	cout << "\tMasukkan password: ";
	fgets(in.password, 64, stdin);
	in.username[strlen(in.username) - 1] = '\0';
	in.password[strlen(in.password) - 1] = '\0';
	while (!feof(handle)) {
		if (fread(&acc, sizeof(acc), 1, handle) == 0) {
			break;
		}
		// printf("\"%s\" = \"%s\"\n", in.username, acc.username);
		// printf("\"%s\" = \"%s\"\n\n", in.password, acc.password);
		if ((!strcmp(in.username, acc.username)) &&
			(!strcmp(in.password, acc.password))) {
			ok = true;
			break;
		}
	}
	fclose(handle);
	if (ok) {
		cout << "\tLogin berhasil! Tekan Enter Untuk ke Menu Selanjutnya\n";
		getch();
		second_page(&acc);
	} else {
		cout << "\tLogin gagal\n";
	}
}

void opt_1(bool random, struct account *acc)
{
    clr;
	int pilihan;
re_opt_1:
	if (random) {
		srand(time(NULL));
		pilihan = (rand() % 12) + 1;
	} else {
		cout<<"\t=========================================================================================\n";
        cout<<"\t================================ Pilihan Soal ===========================================\n";
		cout<<"\t=========================================================================================\n";
        cout << "\t PJ : Desylo Santicho || 19523124\n";
        cout << "\t1. Bunga Tunggal" << endl;
        cout << "\t2. Pythagoras Segitiga Siku-siku" << endl;
        cout << "\t3. Trigonometri (mencari nilai cos)" << endl;
        cout << "\t4. Trigonometri (mencari nilai sin)" << endl;
        cout << "\t5. Trigonometri (mencari nilai tan)" << endl<< endl;
        cout << "\t PJ : Rafi Hidayat Tarmizi || 16523237\n";
		cout << "\t6. Penjumlahan Matrix" << endl;
        cout << "\t7. Pengurangan Matrix" << endl;
        cout << "\t8. Matrix Perkalian Skalar" << endl;
		cout << "\t9. Transpose Matrix" << endl<< endl;
        cout << "\t PJ : Faris Al Baihaqi || 19523206\n";
		cout << "\t10. Aritmatika suku " << endl;
		cout << "\t11. Aritmatika Jumlah " << endl;
		cout << "\t12. Persamaan Variabel " << endl<< endl;
        cout << "\t PJ : Muhamad Thanthawi Jauhari || 19523204\n";
        cout << "\t13. Hitung Luas Jajargenjang" << endl;
        cout << "\t14. Eksponen" << endl;
        cout << "\t15. Mencari Mean" << endl<< endl;
		cout << "\t0. Keluar\n";
		cout<<"\t=========================================================================================\n";
		cout << "\tMasukkan pilihan soal: ";
		cin >> pilihan;
	}
	switch (pilihan) {
		case 0:
			return;
			break;
		case 1:
			flat hore;
			bacabunga(hore, acc);
			break;
		case 2:
			rumus enak;
			bacaihk(enak, acc);
			break;
		case 3:
			trigonometri tr;
			coslur(tr, acc);
			break;
		case 4:
			trigonometri1 trs;
			sinnlur(trs, acc);
			break;
		case 5:
			trigonometri2 trx;
			tanlur(trx, acc);
			break;
        case 6:
            penjumlahanmatrixlur(M,acc);
            break;
        case 7:
            penguranganmatrixlur(M,acc);
            break;
        case 8:
            perkalianmatrixlur(M,acc);
            break;
        case 9:
            transposematrixlurr(M,acc);
            break;
        case 10:
            SukuKeEmpat Skm;
            SukuKeEmpatlur(Skm,acc);
            break;
        case 11:
            Jumlah12Suku Jsu;
            Jumlah12Sukulur(Jsu,acc);
            break;
        case 12:
            PersamaanLinear Psl;
            PersamaanLinearlur(Psl,acc);
            break;
        case 13:
            Jajargenjang Jjg;
            Jajargenjanglur(Jjg,acc);
            break;
        case 14:
            Eksponen Eks;
            Eksponenlur(Eks,acc);
            break;
        case 15:
            mean A;
            meanlur(A,acc);
            break;
		default:
			cout << "Pilihan tidak tersedia\n";
			break;
	}
	if (random) {
		cin.ignore();
		return;
	}
	goto re_opt_1;
}

void save_point(struct account *in)
{
	FILE *handle;
	bool ok = false;
	struct account acc;
	handle = fopen(database_account, "rb+");
	while (!feof(handle)) {
		if (fread(&acc, sizeof(acc), 1, handle) == 0) {
			break;
		}
		// printf("\"%s\" = \"%s\"\n", in.username, acc.username);
		// printf("\"%s\" = \"%s\"\n\n", in.password, acc.password);
		if ((!strcmp(in->username, acc.username)) &&
			(!strcmp(in->password, acc.password))) {
			fseek(handle, ftell(handle) - sizeof(struct account), SEEK_SET);
			fwrite(in, sizeof(struct account), 1, handle);
			ok = true;
			break;
		}
	}
	fclose(handle);
}

void show_high_score()
{
	clr;
    cout<<"=========================================================================================\n";
	FILE *handle;
	struct account acc, arr[100];
	int i = 1, p = 0, sorted[100];
	memset(sorted, '\0', sizeof(sorted));
	handle = fopen(database_account, "rb+");
	while (!feof(handle)) {
		if (fread(&acc, sizeof(acc), 1, handle) == 0) {
			break;
		}
		arr[p] = acc;
		sorted[p] = acc.point;
		p++;
		i++;
	}
	fclose(handle);

	sort(sorted, sorted + sizeof(int), greater<int>());

	for (int k = 0, i = 0; i < p; i++) {
		for (int j = 0; j < p; j++) {
			if (sorted[i] == arr[j].point) {
				cout << (k + 1) << ". (" << arr[j].point << " point) " << arr[j].username << endl;
				arr[j].point = -1;
				k++;
			}
		}
	}
	    cout<<"=========================================================================================\n";
	cout << "Tekan enter untuk melanjutkan!\n";
	fgets(acc.username, 10, stdin);
	clr;
}






