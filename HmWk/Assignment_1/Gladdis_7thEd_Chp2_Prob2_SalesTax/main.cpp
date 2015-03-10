/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 *
 * Created on March 9, 2015, 10:54 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

//Compute the total sales tax on a $52 purchase
//Assume sale tax is 4% and the county tax is 2% 

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables 
    
   int gTotal, tAmount,tRate, rate;
   
   //Function Prototype
   double Total;
   double sTax;
   double cTax;
    
    //Calculate the amount of a .04 percent sales tax
    Total= 52.00;//two dollars of purchase
    sTax = 0.04;//Sales tax is 4%
    cTax= 0.02;//County Tax is 2%
    tRate=rate/100;
    //Calculate the County Tax by adding the total to CT
    Total=52.00;
    sTax=Total*0.04;
    cTax=Total*0.02;
    gTotal=52.00+sTax+cTax;
    //Display the results
    cout<< "Regular Price: $" <<Total<<endl;
    cout<< "Total Sales Tax: $"<<sTax<<endl;
    cout<< "Total County Sales Tax: $"<<cTax<<endl;
    cout<< "Grand Total: $" <<gTotal<<endl;
    
    //Exit Right Stage   
    return 0;
    
}

