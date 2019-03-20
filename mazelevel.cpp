/****************************************
 * ******************* Program:mazelevel.cpp
 * ********************* Author:Kingsley C. Chukwu
 * ******************* Date: 3/19/2019
 * ******************* Description:implements all the function in the mazelevel.hpp.
 * ******************** Input: none
 * ****************** Output: none
 * *******************************************************/






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
#include <bits/stdc++.h>


using namespace std;

/******************************************************
 * ******************************** Function:Mazelevel
 * ******************************** Description:it is a parameterized constructor that reads a text file containing the maze 
 * ********************************* Parameters: ifstream , two integers
 * ********************************* Pre-Conditions: a readable file, two integers representing the maze height and width
 * ******************************** Post-Conditions: reads  the maze into a vector of mazelocation
 * ************************************************************************************/


Mazelevel::Mazelevel(ifstream &infile, int MAZE_HEIGHT, int MAZE_WIDTH) : MAZE_HEIGHT(MAZE_HEIGHT), MAZE_WIDTH(MAZE_WIDTH)  {

   for (int i = 0; i < this->MAZE_HEIGHT; i++) {
        vector <Mazelocation* > height;
        string line;
        getline(infile, line);
       for(int j = 0; j < this->MAZE_WIDTH; j++) {
               char c = line[j];
//              cout << c;
           if (c == '#') {
              height.push_back(new Wall);

         } else {
             height.push_back(new Openspace(c)); 
        }
        }
       locations.push_back(height);
//         cout<<endl;
   }
 
}

/******************************************************
 * ******************************** Function:display_maze
 * ******************************** Description:print out each location in the maze
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: none
 * ******************************** Post-Conditions: prints out the maze
 * ************************************************************************************/


void Mazelevel::display_maze() {
     for (int i = 0; i < this->MAZE_HEIGHT; i++) {
       for(int j = 0; j < this->MAZE_WIDTH; j++) {
          cout << (locations[i][j])->get_display_character();
       }
       cout<<endl;
   }

}

/******************************************************
 * ******************************** Function:data_to_explore
 * ******************************** Description:print out the letter that corresponds to the direction the student can move
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: none
 * ******************************** Post-Conditions: none
 * ************************************************************************************/



Mazelocation* Mazelevel::get_location(int rows, int cols) {
             return this->locations[rows][cols];
}

/******************************************************
 * ******************************** Function:data_to_explore
 * ******************************** Description:print out the letter that corresponds to the direction the student can move
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: none
 * ******************************** Post-Conditions: none
 * ************************************************************************************/


vector<string>  return_token(std::string sInput) {
    vector <string> tokens;

    stringstream check1(sInput);

    string intermediate;
    while(getline(check1, intermediate, ' '))
    {
//    std::cout << intermediate << std::endl;
          tokens.push_back(intermediate);
     }
     return tokens;

}

/******************************************************
 * ******************************** Function:data_to_explore
 * ******************************** Description:print out the letter that corresponds to the direction the student can move
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: none
 * ******************************** Post-Conditions: none
 * ************************************************************************************/


Mazelevel::~Mazelevel() {
/*    Mazelocation*** kc = new Mazelocation**[MAZE_HEIGHT];
     for(int j = 0; j < MAZE_HEIGHT; j++) {
         kc[j] = new Mazelocation*[MAZE_WIDTH];

     }
      for (int i = 0; i < MAZE_HEIGHT; i++) {
       for(int j = 0; j < MAZE_WIDTH; j++) {
          kc[i][j]= locations[i][j];
       }
       cout<<endl;
   }*/
    for (int i = 0; i < MAZE_HEIGHT; i++) {
         for(int j = 0; j < MAZE_WIDTH; j++) {
//         Mazelocation* locate;
//        locate = locations[i][j];
       delete this->locations[i][j];
     } 
    }
    
}


