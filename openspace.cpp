/****************************************
******************** Program:openspace.cpp
********************** Author:Kingsley C. Chukwu
******************** Date: 3/17/2019
******************** Description:contains all the implementaion function in the openspace.hpp.
********************* Input: none
******************* Output: none
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
#include "openspace.hpp"

using namespace std;


Openspace::Openspace(char d_char) : d_char(d_char) { 
         this->anoda_char = ' ';
         this->p_char = ' ';
         this->ta_char = ' ';
} 

void Openspace::clear_all()  {
         this->anoda_char = ' ';
         this->p_char = ' ';
         this->ta_char = ' ';
}


bool Openspace::is_occupable() {
    return true;
}
char Openspace::get_display_character() {
     if (true == Openspace::has_explorer()) {
        return this->anoda_char;
     } else if (false == Openspace::has_explorer() && true == Openspace::has_ta()) {
       return this->ta_char; 
     }  else if (false == Openspace::has_explorer() && false == Openspace::has_ta() && true == Openspace::has_pskills()) {
        return this->p_char;
     } 
     else if (false == Openspace::has_explorer() && false == Openspace::has_ta() && false == Openspace::has_pskills()) {
     return this->d_char;
     } 
/*     else {
    return this->d_char;
    } */
}

void Openspace::set_is_start(bool x) {
    if (x==true) {
    d_char = '@';
   }
}

bool Openspace::is_start() {
    if (d_char=='@') {
       return true;
    }
    else {
    return false;
    }

}

void Openspace::set_is_end(bool x) {
    if (x==true) {
    this->d_char = '^';
   }
}

bool Openspace::is_end() {
    if (this->d_char=='^') {
       return true;
    }
    else {
    return false;
    }

}

void Openspace::set_has_explorer(bool x) {
   if (x == true) {
     this->anoda_char = '*';
   } 
   if (x == false) {
     this->anoda_char = ' ';
   }
    
}


bool Openspace::has_explorer() {
    if (this->anoda_char=='*') {
       return true;
    }
    if (this->anoda_char ==' ') {
    return false;
    }

}

void Openspace::set_has_pskills(bool x) {
     if (x == true) {
     this->p_char = 'P';
  
    } 
     if (x == false) {
//     cout <<" lol "<<endl;
     this->p_char=' ';
   }
  
}

bool Openspace::has_pskills() {
     if (this->p_char=='P') {
       return true;
    }
    if (this->p_char==' ') {
       return false;
    }
  
}

void  Openspace::set_has_ta(bool x) {
      if (x == true) {
     this->ta_char = 'T';
   }
   if (x == false) {
     this->ta_char = ' ';
   }


}

bool Openspace::has_ta() {
     if (this->ta_char=='T') {
       return true;
    }
    if (this->ta_char==' ') {
    return false;
    }

}



