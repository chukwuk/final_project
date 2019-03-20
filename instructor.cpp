/****************************************
 * ******************* Program:instructor.cpp
 * ********************* Author:Kingsley C. Chukwu
 * ******************* Date: 3/19/2019
 * ******************* Description:implements all the function in the instructor.hpp.
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
#include "mazelocation.hpp"
#include "instructor.hpp"

using namespace std;

/******************************************************
 ** ******************************** Function:Mazelevel
 ** ******************************** Description:it is a parameterized constructor that reads a text file containing the maze
 ** ********************************* Parameters: ifstream , two integers
 ** ********************************* Pre-Conditions: a readable file, two integers representing the maze height and width
 ** ******************************** Post-Conditions: reads  the maze into a vector of mazelocation
 * * ************************************************************************************/



Instructor::Instructor(int rows, int cols) {
      this->rows = rows;
      this->cols = cols; 
}

char Instructor::get_move() {

}


void Instructor::set_location(int x, int y) {
     this->rows = x;
     this->cols = y;
}

int Instructor::get_row() {
    return this->rows;
}
int  Instructor::get_col() {
    return this->cols;
}

