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
    
   int TtlST, TtlAmt;
   
   //Function Prototype
   double Purc;
   double SalesT;
   double CountyT;
    
    //Calculate the amount of a .04 percent sales tax
    Purc= 52;//two dollars of purchase
    SalesT = 0.04;//Sales tax is 4%
    CountyT= 0.02;//County Tax is 2%
    
    TtlST=52.00/1+0.04;
    //Calculate the County Tax by adding the total to CT
    TtlAmt=TtlST/1+0.02;
    //Display the results
    cout<< "Regular Price: $" << Purc<<endl;
    cout<< "Total Sales Tax: $"<<TtlST<<endl;
    cout<< "Total County Sales Tax: $"<<TtlAmt<<endl;
   
    
    
    
    
    
    
    
    return 0;
    
}

