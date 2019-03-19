/****************************************
******************* Program:implementation.cpp
********************* Author:Kingsley C. Chukwu
******************* Date: 3/17/2019
******************* Description:combines all the classes to play the game.
******************** Input: none
****************** Output: none
*******************************************************/


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
#include "openspace.hpp"
#include "mazelevel.hpp"
#include "wall.hpp"
#include "intrepidstudent.hpp"
#include "ta.hpp"
#include "supplem.hpp"
#include "instructor.hpp"

using namespace std;

int main(int argc, char* argv[] ) {
   char move; int repeter = 0;
   int MAZE_HEIGHT; 
   int MAZE_WIDTH;
   int NUM_LEVEL;
   Intrepidstudent student(4,4);
   while (repeter == 0) {
   if (argc!=2) { cout <<" "<<endl; cout <<"Invalid argument, Please input just one argument"<<endl; cout<<" "<<endl;  return 0;  }
//
   ifstream infile(argv[1]);
   if  (!infile) {
   cout <<" "<< endl; cout <<"Uh no!!! "<< argv[1]<<" could not be opened for reading!"<<endl; cout <<" "<<endl;
   return 0;
   }

//   infile.open("maze.txt");
   string line; 
   getline(infile, line);
   vector<string> tokens;
   tokens =  return_token(line);    
   NUM_LEVEL =  atoi((tokens[0]).c_str()); MAZE_WIDTH = atoi((tokens[1]).c_str());  MAZE_HEIGHT = atoi((tokens[2]).c_str());
   for (int k = 0; k < NUM_LEVEL;k++) {
   cout <<" "<<endl; cout <<"Welcome to mazelevel "<<k+1<<endl; cout <<" "<<endl;
   Mazelevel mazelevel_1(infile, MAZE_WIDTH, MAZE_HEIGHT);
   int* p_cordx = new int [3];
   int* p_cordy = new int [3];
   set_p(MAZE_HEIGHT, MAZE_WIDTH, mazelevel_1, p_cordx, p_cordy);
 //  cout << p_cordx[0] << p_cordy[0] <<endl;
   int locax; int locay; int x_inst=0;; int y_inst=0; Instructor instructor(2,3);
//   mazelevel_1.display_maze();
   set_student(mazelevel_1, MAZE_HEIGHT,MAZE_WIDTH, locax, locay);
   if (k == (NUM_LEVEL-1)) {
   set_instructor(mazelevel_1, MAZE_HEIGHT,MAZE_WIDTH, x_inst, y_inst); instructor.set_location(y_inst, x_inst);}
   student.set_location(locay, locax);  Ta hunter_ta(MAZE_HEIGHT, MAZE_WIDTH, mazelevel_1);    int count = 0; int count_troubleshoot = 0; 
   student.p_skills_on(false); student.zero_pskills();
   set_begin_locate(mazelevel_1, student,hunter_ta, p_cordy, p_cordx);
   while (true) {
   count_troubleshoot++;
   //The commented line below is used to trouble shoot. The trouble shooter has to input the exact location where he want the student to be
   //in the maze. y is the row and x is column
//   if (count_troubleshoot > 1) { int x; int y; cin >>y; cin >> x; trouble_shoot(student, mazelevel_1, y, x); }
   mazelevel_1.display_maze();
    //picks up the programming skills if the student is in the same space as the programming skills
    Mazelocation* editor_1; editor_1 = mazelevel_1.get_location(student.get_row(), student.get_col());
   if (editor_1->has_pskills() == true) { editor_1->set_has_pskills(false); student.set_p_skills(true);  cout<<"You just picked up a programming skill"<<endl; }
// check if the TA is adjacent to the player and checks if the player has his programming skill on. adjacent include both row and column
   if ((student.get_row() == hunter_ta.get_row()) || (student.get_col() == hunter_ta.get_col()) || (student.get_row() == hunter_ta.get_row_1()) || (student.get_col() == hunter_ta.get_col_1())) {
   if ((student.is_p_skills_on()==false) ) {
   clear_all(MAZE_HEIGHT, MAZE_WIDTH, mazelevel_1); 
   student.set_location(locay, locax);
   set_p(MAZE_HEIGHT, MAZE_WIDTH, mazelevel_1, p_cordx, p_cordy);
   move_ta_rand(mazelevel_1, MAZE_HEIGHT, MAZE_WIDTH, hunter_ta);
   set_begin_locate(mazelevel_1, student,hunter_ta, p_cordy, p_cordx);
   student.zero_pskills();
   cout <<" "<<endl; cout<<"The level is reset. so sad!!!"<<endl; cout<<" "<<endl; mazelevel_1.display_maze();
   }
   } 
   get_move(student,mazelevel_1,move); //asks the player for input where he wants the student to move
   //counts the number of turns for the student when the programming skills is on
   if ((student.is_p_skills_on()==true) && count <=10 ) {
       count++;
       if (count >=11) {
          student.p_skills_on(false);
          count = 0;
         cout<<" "<<endl; cout<<"You just completed 10 turns, so your programming skills is turned off. so sad!!"<<endl;
       }
   }
   Mazelocation* ending; ending = mazelevel_1.get_location(student.get_row(), student.get_col());
   if (k < NUM_LEVEL-1) {
   if (move == 'U' && true == ending->is_end() )  { 
        student.add_to_total();
      cout<<""<<endl; cout<<"Mazelevel " <<k+1<<"  is finished, you are moving into the level "<<k+2<<endl;  break;} }
   if (k == NUM_LEVEL-1) {
   if (student.get_row() == instructor.get_row())  {
     student.add_to_total();
     if (student.get_total_p_skills()>=3) {
       repeter = 1;
   }
     if (student.get_total_p_skills()<3) {
       repeter = 0;
   }
      break;
   }
   }
   move_ta_rand(mazelevel_1, MAZE_HEIGHT, MAZE_WIDTH, hunter_ta);
    mazelevel_1.display_maze();
  }
  delete [] p_cordx;
  delete [] p_cordy;
  }
  if (repeter == 0) {cout <<" "<<endl; cout <<"You dont have enough programming skills to escape the maze. so sad!!! you have start all over again"<<endl;
  cout <<" "<<endl;  }
  if (repeter == 1) {
     cout <<" "<<endl; cout<<"You have enough programming skills to escape the CS162 maze. Congratulations. hahahahah!!!"<<endl; cout <<" "<<  endl;
  }
  }
  cout <<" "<<endl; cout <<"Thank you for playing the game"<<endl; cout <<" "<<endl;
  return 0;
}

