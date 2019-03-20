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
 ** ******************************** Function:Instructor
 ** ******************************** Description:it is a parameterized constructor that initializes the location of the instructor
 ** ********************************* Parameters:  two integers
 ** ********************************* Pre-Conditions: two integers for the index in column and row
 ** ******************************** Post-Conditions:  none
 * * ************************************************************************************/



Instructor::Instructor(int rows, int cols) {
      this->rows = rows;
      this->cols = cols; 
}

/******************************************************
********************************** Function:get_move
*********************************** Description:dummy function
************************************ Parameters:  none
*********************************** Pre-Conditions: none
*********************************** Post-Conditions:  none
**************************************************************************************/



char Instructor::get_move() {

}

/******************************************************
*********************************** Function:set_location
************************************ Description:set a new location for the instructor
************************************* Parameters:  two integers
************************************ Pre-Conditions: pass two integer for the index in the column and row respectively
************************************ Post-Conditions:  sets a new location
***************************************************************************************/



void Instructor::set_location(int x, int y) {
     this->rows = x;
     this->cols = y;
}

/******************************************************
 * ********************************** Function:get_row
 * *********************************** Description:returns the instructor position in the row
 * ************************************ Parameters:  none
 * *********************************** Pre-Conditions: none
 * *********************************** Post-Conditions: returns the instructor position in the row
 * **************************************************************************************/



int Instructor::get_row() {
    return this->rows;
}

/******************************************************
 * ********************************** Function:get_col
 * *********************************** Description:returns the instructor position in the column
 * ************************************ Parameters:  none
 * *********************************** Pre-Conditions: none
 * *********************************** Post-Conditions:  returns the instructor position in the column
 * **************************************************************************************/


int  Instructor::get_col() {
    return this->cols;
}

