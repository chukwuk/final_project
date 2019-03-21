/****************************************
******************* Program:intrepidstudent.cpp
********************* Author:Kingsley C. Chukwu
******************* Date: 3/19/2019
******************* Description:implements all the function in the intrepidstudent.hpp.
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
#include "mazelocation.hpp"
#include "intrepidstudent.hpp"

using namespace std;

/******************************************************
********************************* Function:intrepidstudent
********************************* Description:it is paramaterized constructor which initialize the location of the student
********************************** Parameters: two integers
********************************** Pre-Conditions: pass two integer arguments for the row index and column index
********************************* Post-Conditions: initialize the location of the student
*************************************************************************************/



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
******************************** Description:print out the letter that corresponds to the direction the student can move
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

/******************************************************
******************************** Function:get_move
******************************** Description:accepts a character corresponding to the direction, which the player wants the student to move
********************************* Parameters: none
********************************* Pre-Conditions: must enter a valid character
******************************** Post-Conditions: returns the character entered by the user
************************************************************************************/

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
       cin >> uzo;
//       getline (cin, uzo);
    }  while  ((uzo != "W") && (uzo != "A") && (uzo != "S") && (uzo != "D") && (uzo != "U") && (uzo != "P"));
    num_input = uzo[0];
    return num_input;
}


/******************************************************
 * ******************************** Function:set_location
 * ******************************** Description:sets he new locatiion of the student
 * ********************************* Parameters: two integer  value
 * ********************************* Pre-Conditions: pass two integer argument for the row index and column index
 * ******************************** Post-Conditions: set the location of the student
 * ************************************************************************************/

void Intrepidstudent::set_location(int x, int y) {
     this->rows = x;
     this->cols = y;
}

/******************************************************
 * ******************************** Function:get_move
 * ******************************** Description:move the students to direction corresponding to the letter entered by the player
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: must enter a valid character
 * ******************************** Post-Conditions: moves the student
 * ************************************************************************************/

int Intrepidstudent::get_row() {
    return this->rows;
}
/******************************************************
 * ******************************** Function:get_move
 * ******************************** Description:move the students to direction corresponding to the letter entered by the player
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: must enter a valid character
 * ******************************** Post-Conditions: moves the student
 * ************************************************************************************/

int  Intrepidstudent::get_col() {
    return this->cols;
}

/******************************************************
 * ******************************** Function:get_move
 * ******************************** Description:move the students to direction corresponding to the letter entered by the player
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: must enter a valid character
 * ******************************** Post-Conditions: moves the student
 * ************************************************************************************/

void Intrepidstudent::set_p_skills(bool x) {
     if (x == true) {
     this->p_skills++;
     }
     if (x == false) {
     this->p_skills--;
     }
}
/******************************************************
 * ******************************** Function:get_move
 * ******************************** Description:move the students to direction corresponding to the letter entered by the player
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: must enter a valid character
 * ******************************** Post-Conditions: moves the student
 * ************************************************************************************/


void Intrepidstudent::p_skills_on(bool x) {
     if (x == true) {
     this->p_on = 1;
     }
     if (x == false) {
     this->p_on = 0;
     }

}


/******************************************************
 * ******************************** Function:get_move
 * ******************************** Description:move the students to direction corresponding to the letter entered by the player
 * ********************************* Parameters: none
 * ********************************* Pre-Conditions: must enter a valid character
 * ******************************** Post-Conditions: moves the student
 * ************************************************************************************/


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


/******************************************************
 * ******************************** Function:get_move
 ** ******************************** Description:move the students to direction corresponding to the letter entered by the player
 ** ********************************* Parameters: none
 ** ********************************* Pre-Conditions: must enter a valid character
 * * ******************************** Post-Conditions: moves the student
 ** ************************************************************************************/



int Intrepidstudent::get_total_p_skills() {
//       this->total_p_skills = this->p_skills_1+this->p_skills_2+this->p_skills_3;
       return this->total_p_skills;
}


/******************************************************
 *  * ******************************** Function:get_move
 *   * ******************************** Description:move the students to direction corresponding to the letter entered by the player
 *    * ********************************* Parameters: none
 *     * ********************************* Pre-Conditions: must enter a valid character
 *      * ******************************** Post-Conditions: moves the student
 *       * ************************************************************************************/



void  Intrepidstudent::add_to_total() {
    this->total_p_skills+=p_skills;
}

/******************************************************
 *  * ******************************** Function:get_move
 *   * ******************************** Description:move the students to direction corresponding to the letter entered by the player
 *    * ********************************* Parameters: none
 *     * ********************************* Pre-Conditions: must enter a valid character
 *      * ******************************** Post-Conditions: moves the student
 *       * ************************************************************************************/



int Intrepidstudent::get_set_p_skills() {
    return this->p_skills;
}


/******************************************************
 *  * ******************************** Function:get_move
 *   * ******************************** Description:move the students to direction corresponding to the letter entered by the player
 *    * ********************************* Parameters: none
 *     * ********************************* Pre-Conditions: must enter a valid character
 *      * ******************************** Post-Conditions: moves the student
 *       * ************************************************************************************/



void Intrepidstudent::zero_pskills() {
    this->total_p_skills = 0;
}
/*int Intrepidstudent::get_set_p_skills_2() {
    return this->p_skills_2;
}
int Intrepidstudent::get_set_p_skills_3() {
    return this->p_skills_3;
}*/


