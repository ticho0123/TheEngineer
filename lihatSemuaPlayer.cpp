#include <iostream>
#include "player.h"
using namespace std;

void lihatSemua(listPlayer LP){
    for(int i=1; i<LP.jml; i++){
        cout << i << ". ";
        cout << LP.list[i].nama << " ";
        cout << LP.list[i].nilai << " " << endl;
    }
}
