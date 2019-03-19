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
#include "intrepidstudent.hpp"

using namespace std;


Intrepidstudent::Intrepidstudent(int rows, int cols) {
            this->rows = rows;
            this->cols = cols; 
            this->p_skills = 0;
            this->p_on = 0;
//            this->p_skills_2 = 0;
//            this->p_skills_3 = 0;

}


/******************************************************
******************************** Function:data_to_explore
******************************** Description:print out the number that corresponds to the two option the player can play
********************************* Parameters: none
********************************* Pre-Conditions: none
******************************** Post-Conditions: none
************************************************************************************/


void Intrepidstudent::data_to_explore() {
   cout <<" "<<endl; cout<<"Enter between W or A or S or D or U or P"<<endl; cout <<" "<<endl;
   cout <<"Enter (W) if you want to move up"<<endl; cout <<" "<<endl;
   cout <<"Enter (A) if you want to move left"<<endl; cout <<" "<<endl;
   cout <<"Enter (S) if you want to move down"<<endl; cout <<" "<<endl;
   cout <<"Enter (D) if you want to move right"<<endl; cout <<" "<<endl;
   cout <<"Enter (P) if you want to use your programming skills if you have any"<<endl; cout <<" "<<endl;
   cout <<"Enter (U) if you want to move into the next level"<<endl; cout <<" "<<endl;
}


char Intrepidstudent::get_move() {
   int r_w = 0; string uzo; char num_input;
   do {
       if (r_w > 0) {
          cout << " " << endl;
          cout << "Oops!, Invalid Input, Please enter a valid input"<<endl;
       }
       r_w++;
       cout << " " <<endl;
       data_to_explore();
       getline (cin, uzo);
    }  while  ((uzo != "W") && (uzo != "A") && (uzo != "S") && (uzo != "D") && (uzo != "U") && (uzo != "P"));
    num_input = uzo[0];
    return num_input;
}


/*
char Intrepidstudent::get_move() {
     srand(time(0));
     int x = rand() % 4;
     if (x==0) { return 'W'; }
     if (x==1) { return 'A'; }
     if (x==2) { return 'S'; }
     if (x==3) { return 'D'; }

} */


void Intrepidstudent::set_location(int x, int y) {
     this->rows = x;
     this->cols = y;
}

int Intrepidstudent::get_row() {
    return this->rows;
}
int  Intrepidstudent::get_col() {
    return this->cols;
}

void Intrepidstudent::set_p_skills(bool x) {
     if (x == true) {
     this->p_skills++;
     }
     if (x == false) {
     this->p_skills--;
     }
}

void Intrepidstudent::p_skills_on(bool x) {
     if (x == true) {
     this->p_on = 1;
     }
     if (x == false) {
     this->p_on = 0;
     }

}

bool Intrepidstudent::is_p_skills_on() {
     if (p_on==1) {
     return true;
     }
     if (p_on==0) {
     return false;
     }

}

/*void Intrepidstudent::set_p_skills_2(bool x) {
     if (x == true) {
     this->p_skills_2++;
     }
     if (x == false) {
     this->p_skills_2--;
     }

}
void Intrepidstudent::set_p_skills_3(bool x) {
     if (x == true) {
     this->p_skills_3++;
     }
     if (x == false) {
     this->p_skills_3--;
     }

} */

int Intrepidstudent::get_total_p_skills() {
//       this->total_p_skills = this->p_skills_1+this->p_skills_2+this->p_skills_3;
       return this->total_p_skills;
}

void  Intrepidstudent::add_to_total() {
    this->total_p_skills+=p_skills;
}

int Intrepidstudent::get_set_p_skills() {
    return this->p_skills;
}

void Intrepidstudent::zero_pskills() {
    this->total_p_skills = 0;
}
/*int Intrepidstudent::get_set_p_skills_2() {
    return this->p_skills_2;
}
int Intrepidstudent::get_set_p_skills_3() {
    return this->p_skills_3;
}*/

/*int set_p(int rows, int cols, Mazelevel &m, int* &p_cordx, int* &p_cordy) {
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
//     cout << p_cordx[1] << p_cordy[1] << endl;
    do {
         p_cordx[2] = rand() % cols;
         p_cordy[2] =  rand() % rows;
         locate = m.get_location(p_cordy[2],  p_cordx[2]);
     } while(false==locate->is_occupable() || ((p_cordx[0]==p_cordx[2] && p_cordy[0]==p_cordy[2]) || (p_cordx[1]==p_cordx[2] && p_cordy[1]==p_cordy[2]))  );
//     cout << p_cordx[2] << p_cordy[2] << endl;
//
     //delete locate;

} */
