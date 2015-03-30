/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 *
 * Created on March 23, 2015, 10:15 AM
 */

#include <iostream>

using namespace std;

//Write a program that calculates a car's gas mileage. The program should ask the user
//to enter the number of gallons of gas the car can hold, and the number of miles it can
//be driven on a full tank. It should then display the number of miles that may be driven
//per gallon of gas.


//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables 
    int numgal, numM, numMPG;
    //Input
    cout<<" This program calculate the miles per gallon of a ";
    cout <<"car.\n";
    cout<< " How many gallons can the car hold?\n";
    //Output
    cin>> numgal;
    cout<< " How many miles can the car drive on a full tank?\n";
    cin>> numM;
    //Calculation
    numMPG= numM/numgal;
    //Response to user, answering the questions
    cout<< " The number of miles this car can drive per gallon of gas is \n" <<numMPG <<".\n";
    // Exit Stage Right! 
            
    return 0;
}