#include <iostream>
#include <fstream>
#include "player.h"
using namespace std;

void simpanData(listmahasiswa lm, player p){
    ofstream ofs;
    ofs.open("player.txt");

//    ofs << LP.jml << endl;
    ofs << lm.nama << endl;
    ofs << lm.nim << endl;
    ofs << p.nilai << endl;
//    for(int i=1; i<LP.jml; i++){
//        ofs << LP.list[i].nama << endl;
//        ofs << LP.list[i].nilai << endl;
//    }
}
