#include <iostream>
#include <fstream>
#include "player.h"
using namespace std;

void ambilData(listmahasiswa &lm, player &p){
    ifstream ifs;
    ifs.open("player.txt");

    ifs >> lm.nama;
    ifs >> lm.nim;
    ifs >> p.nilai;

//    ifs >> LP.jml;
//    for(int i=1; i<LP.jml; i++){
//        ifs >> LP.list[i].nama;
//       ifs >> LP.list[i].nilai;
//    }
}
