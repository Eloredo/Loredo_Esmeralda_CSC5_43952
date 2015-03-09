/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 *
 * Created on February 23, 2015, 9:56 AM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!


int main(int argc, char** argv) {
    //Declare Variables 
    //Inputs:
    //   payRate -> $'s/hr
    //   Hours Worked = hrsWrkd -> hrs
    //Output: 
    //   Gross Pay Check Amount = payChk -> $'s
    float payRate,hrsWrkd,payChk;
    //Prompt the user for inputs
    cout<<"This program calculates your Gross Paycheck."<< endl;
    cout <<"Input your Pay Rate as $XX.XX, provide the X's."<<endl;
    cin>>payRate;
    cout<<"Input your hours worked this pay period."<<endl;
    cout<< "FormatXXX.XX, provide the X's."<<endl;
    cin>>hrsWrkd;
    //Calculate the paycheck
    payChk=payRate*hrsWrkd;
    //Output the results
    cout<<"$"<<payChk<<"="<<payRate<<"/hr*"<<hrsWrkd<<"(hrs)"<<endl;
    //Exit Stage Right!
    
    
    
    
    return 0;
}

