#include <iostream>
#include "player.h"
using namespace std;

void tambahData(listPlayer &LP){
    // & di '&L' untuk parameter output
    player p;
    cout << "Masukkan nama: ";
    cin >> p.nama;

    LP.list[LP.jml] = p;
    LP.jml = 3;
}
