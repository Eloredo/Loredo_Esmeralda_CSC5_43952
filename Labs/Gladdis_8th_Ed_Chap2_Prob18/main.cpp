/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 *
 * Created on March 4, 2015, 8:30 AM
 */

#include <iostream>
using namespace std;

 //Global Constants 
 unsigned char CNVPCT=100;
 
 //Function Prototypes
 
 //Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short nCust, nEDrnks, nCDrnks;
    unsigned char pEDrnks, pCDrnks;
    nCust=16500;//Number of Customers
    pEDrnks=15;//Percentage Energy Drinks
    pCDrnks=58;//Percentage out of Energy Drinkers prefer Citric 
    //Process /Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
    //Output Everything
    cout<<"Customer Survey Problem"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Number of Customers =" <<nCust<<endl;
    cout<<"Percentage Energy Drinkers ="<<static_cast<short>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers ="<<static_cast<short>(pEDrnks)<<"%"<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Number of Energy Drinkers =" <<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers ="<<nCDrnks<<endl;
    //Exit Stage Right!
    return 0;
}