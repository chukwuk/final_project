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


void get_move(Intrepidstudent &student, Mazelevel &m, char &move)  {
Mazelocation* locate;
int num_p=0; int r_w = 0;
bool x;
Mazelocation* editor;
editor = m.get_location((student.get_row()), student.get_col());

do {
   if (r_w > 0) {
          if (move == 'W' || move == 'A' || move == 'S' || move == 'D') {
          cout << " " << endl;
          cout << "Oops!, The space is not occupable"<<endl;
          }
          if (move == 'U') {
           cout << " " << endl;
          cout << "Oops!, You are not on a ladder"<<endl;
          }
          if (move == 'P') {
             if (num_p <=0 && student.is_p_skills_on()==false) {
           cout << " " << endl;
          cout << "Oops!, You dont have a programming skills"<<endl;
          }
            if (student.is_p_skills_on()==true) {
           cout << " " << endl;
      cout << "Oops!, You already have a programming skills turned on. you have to wait for it to run out before putting on another programming skills"<<endl;
          }

           }

       }
     r_w++;

   move = student.get_move();
//   locate = m.get_location((student.get_row()), student.get_col());
//   next_stage = m.get_location((student.get_row()), student.get_col());
   if (move == 'W' ) {
   locate = m.get_location((student.get_row()-1), student.get_col());
   }
   if (move == 'A' ) {
   locate = m.get_location(student.get_row(), (student.get_col()-1));
   }
    if (move == 'S' ) {
   locate = m.get_location((student.get_row()+1), student.get_col());
   }
   if (move == 'D' ) {
   locate = m.get_location(student.get_row(), (student.get_col()+1));
   }
   if (move == 'U' ) {
   locate = m.get_location(student.get_row(), student.get_col());
   }
   if (move == 'P' ) {
      num_p =  student.get_set_p_skills();

   }
    
    if (move == 'W' || move == 'A' || move == 'S' || move == 'D') {
    x = locate->is_occupable();
    }
    if (move == 'U') {
     x = locate->is_end(); 
   }
   if (move == 'P') {
     if (num_p <= 0 || student.is_p_skills_on()==true) {
      x = false;
     }
     if (num_p > 0 && student.is_p_skills_on()==false) {
       cout<<" "<<endl; cout<<"you just turned on your programming skills"<<endl; cout<<" "<<endl;
      x = true;
     }

   }
    
   } while (x == false);
   if (move == 'W' ) {
   editor->set_has_explorer(false);
   student.set_location((student.get_row()-1), student.get_col());
   locate = m.get_location(student.get_row(), student.get_col());
   locate->set_has_explorer(true);
   }
   if (move == 'A' ) {
   editor->set_has_explorer(false);
   student.set_location(student.get_row(), (student.get_col()-1));
   locate = m.get_location(student.get_row(), student.get_col());
   locate->set_has_explorer(true);
   }
    if (move == 'S' ) {
   editor->set_has_explorer(false);
   student.set_location((student.get_row()+1), student.get_col());
   locate = m.get_location(student.get_row(), student.get_col());
   locate->set_has_explorer(true);
   }
   if (move == 'D' ) {
   editor->set_has_explorer(false);
   student.set_location(student.get_row(), (student.get_col()+1));
   locate = m.get_location(student.get_row(), student.get_col());
   locate->set_has_explorer(true);
   }
   if (move == 'P') {
     student.set_p_skills(false);  
     student.p_skills_on(true); 
   }

}

void trouble_shoot(Intrepidstudent &student, Mazelevel &m, int y, int x) {
    Mazelocation* editor; Mazelocation* locate;
    editor = m.get_location((student.get_row()), student.get_col());
//    editor->set_has_explorer(false);
    locate = m.get_location(y, x);
    if (locate->is_occupable() == true) {
    editor->set_has_explorer(false);
    student.set_location(y, x);
    locate->set_has_explorer(true);   
    }     
}

void clear_all(int MAZE_HEIGHT, int MAZE_WIDTH, Mazelevel &mazelevel_1) {
     Mazelocation* editor;
     for (int i = 0; i < MAZE_HEIGHT; i++) {
         for (int j =0; j < MAZE_WIDTH; j++) {
         editor = mazelevel_1.get_location(i,j);
         editor->clear_all();
     }
     }

}

void set_begin_locate(Mazelevel &mazelevel_1, Intrepidstudent &student,Ta &hunter_ta, int* p_cordy, int* p_cordx) {
   Mazelocation* editor;
   editor = mazelevel_1.get_location((student.get_row()), student.get_col());
   editor->set_has_explorer(true);
   editor = mazelevel_1.get_location((hunter_ta.get_row()), hunter_ta.get_col());
   editor->set_has_ta(true);
   editor = mazelevel_1.get_location((hunter_ta.get_row_1()), hunter_ta.get_col_1());
   editor->set_has_ta(true);
   for (int i = 0; i < 3; i++) {
      editor = mazelevel_1.get_location(p_cordy[i], p_cordx[i]);
      editor->set_has_pskills(true);
   }

}

void set_student(Mazelevel &mazelevel_1, int MAZE_HEIGHT, int MAZE_WIDTH, int &locax, int &locay) {
  Mazelocation* locate;
   for (int i = 0; i < MAZE_HEIGHT; i++) {
        for (int j = 0; j < MAZE_WIDTH; j++) {
            locate = mazelevel_1.get_location(i,j);
            if (locate->get_display_character() == '@') {
                locax = j; locay = i;
            }
        }
   }
}

void set_instructor(Mazelevel &mazelevel_1, int MAZE_HEIGHT, int MAZE_WIDTH, int &locax, int &locay) {
  Mazelocation* locate;
   for (int i = 0; i < MAZE_HEIGHT; i++) {
        for (int j = 0; j < MAZE_WIDTH; j++) {
            locate = mazelevel_1.get_location(i,j);
            if (locate->get_display_character() == '%') {
                locax = j; locay = i;
            }
        }
   }
}



void move_ta_rand(Mazelevel &mazelevel_1, int MAZE_HEIGHT, int MAZE_WIDTH, Ta &hunter_ta)  {
   Mazelocation* editor;
   editor = mazelevel_1.get_location((hunter_ta.get_row()), hunter_ta.get_col());
   editor->set_has_ta(false);
   editor = mazelevel_1.get_location((hunter_ta.get_row_1()), hunter_ta.get_col_1());
   editor->set_has_ta(false);
   hunter_ta.get_move(MAZE_HEIGHT, MAZE_WIDTH, mazelevel_1);
   editor = mazelevel_1.get_location((hunter_ta.get_row()), hunter_ta.get_col());
   editor->set_has_ta(true);
   editor = mazelevel_1.get_location((hunter_ta.get_row_1()), hunter_ta.get_col_1());
   editor->set_has_ta(true);
}

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
  //  cout << p_cordx[2] << p_cordy[2] << endl;

//     delete locate;

}

