#ifndef SUPPLEM_H
#define SUPPLEM_H





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
<<<<<<< HEAD
#include "mazeperson.hpp"
#include "mazelevel.hpp"
#include "intrepidstudent.hpp"
#include "ta.hpp"
=======
#include "intrepidstudent.hpp"
#include "mazeperson.hpp"
#include "mazelevel.hpp"


>>>>>>> 3ca64790199fbd060cddd5a79d78c390fa643499

using namespace std;

int set_p(int rows, int cols, Mazelevel &m, int* &p_cordx, int* &p_cordy);
<<<<<<< HEAD
void set_begin_locate(Mazelevel &mazelevel_1, Intrepidstudent &student, Ta &hunter_ta, int* p_cordy, int* p_cordx);
void get_move(Intrepidstudent &student, Mazelevel &m, char &move);
void move_ta_rand(Mazelevel &mazelevel_1, int MAZEHEIGHT, int MAZEWIDTH, Ta &hunter_ta); 
void set_student(Mazelevel &mazelevel, int MAZE_HEIGHT, int MAZE_WIDTH, int &locax, int &locay);
void set_instructor(Mazelevel &mazelevel_1, int MAZE_HEIGHT, int MAZE_WIDTH, int &locax, int &locay);
void  clear_all(int MAZE_HEIGHT, int MAZE_WIDTH, Mazelevel &mazelevel_1);
void trouble_shoot(Intrepidstudent &student, Mazelevel &m, int y, int x); 
=======


>>>>>>> 3ca64790199fbd060cddd5a79d78c390fa643499
#endif

