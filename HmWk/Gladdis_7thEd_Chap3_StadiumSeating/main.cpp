/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 *
 * Created on March 23, 2015, 10:45 AM
 */

#include <iostream>

using namespace std;

// Stadium Seating
//There are three seating categories at a stadium. For a softball game, Class A seats cost
//$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
//many tickets for each class of seats were sold, then displays the amount of income
//generated from ticket sales. Format your dollar amount in xed-point notation, with
//two decimal places of precision, and be sure the decimal point is always displayed.

//Execution Begins Here!
int main(int argc, char** argv) {
   
//Declare variables 
    float ClassA;
    float ClassB;
    float ClassC; //To hold the price of each Class
    ClassA= 15;//In dollars $ 
    ClassB=12;
    ClassC 9;
            
    int numTSEC; //Number of Tickets sold for each Class 
    int amtIn;//Amount of income generate from the ticket sales
    //Calculation 
    amtIn= static_cast<int>(ClassA+ClassB+ClassC)/3;
    //
    return 0;
}

