#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include <vector>
#include "mazelocation.hpp"
#include "supplem.hpp"
#include "mazeperson.hpp"
#include "mazelevel.hpp"



using namespace std;







int set_p(int rows, int cols, Mazelevel &m, int* &p_cordx, int* &p_cordy) {
    Mazelocation* locate;
    srand(time(0));
    do {
         p_cordx[0] = rand() % cols;
         p_cordy[0] =  rand() % rows;
         locate = m.get_location(p_cordy[0],  p_cordx[0]);
     } while(false==locate->is_occupable());
//     cout << p_cordx[0] << p_cordy[0] << endl;
    do {
         p_cordx[1] = rand() % cols;
         p_cordy[1] =  rand() % rows;
         locate = m.get_location(p_cordy[1],  p_cordx[1]);
     } while(false==locate->is_occupable() || (p_cordx[0]==p_cordx[1] && p_cordy[0]==p_cordy[1]));
//    cout << p_cordx[1] << p_cordy[1] << endl;
    do {
         p_cordx[2] = rand() % cols;
         p_cordy[2] =  rand() % rows;
         locate = m.get_location(p_cordy[2],  p_cordx[2]);
     } while(false==locate->is_occupable() || ((p_cordx[0]==p_cordx[2] && p_cordy[0]==p_cordy[2]) || (p_cordx[1]==p_cordx[2] && p_cordy[1]==p_cordy[2]))  );
    cout << p_cordx[2] << p_cordy[2] << endl;

//     delete locate;

}

