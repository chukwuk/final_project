/****************************************
****************** Program:intrepidstudent.hpp
******************** Author:Kingsley C. Chukwu
****************** Date: 3/19/2019
****************** Description:contains all the function prototype in the intrepidstuent.hpp.
******************* Input: none
***************** Output: none
******************************************************/




#ifndef INTREPIDSTUDENT_H
#define INTREPIDSTUDENT_H



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
#include "mazeperson.hpp"
#include "mazelevel.hpp"

using namespace std;

class Intrepidstudent : public Mazeperson {
private:
int p_skills;
//int p_skills_2;
//int p_skills_3;
int total_p_skills;
int p_on;
public:
Intrepidstudent(int rows, int cols);
virtual char get_move();
virtual void set_location(int x, int y);
virtual void set_p_skills(bool x);
virtual void  add_to_total();
//virtual void set_p_skills_2(bool x);
//virtual void set_p_skills_3(bool x);
virtual int get_total_p_skills();
virtual int get_set_p_skills();
//virtual int get_set_p_skills_2();
//virtual int get_set_p_skills_3();
virtual int get_row();
virtual int get_col();
virtual void data_to_explore();
virtual void zero_pskills();
void p_skills_on(bool x);
bool is_p_skills_on();
};
//int set_p(int rows, int cols, Mazelevel &m, int* &p_cordx, int* &p_cordy);
#endif

