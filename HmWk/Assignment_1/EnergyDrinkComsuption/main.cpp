/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 * Make a survey on energy drinks 
 * Created on March 8, 2015, 11:47 PM
 * Global Constants
 */


#include <iostream>

using namespace std;

unsigned char CNVPCT=100;
//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables 
    unsigned short nCust, nEDrnks, nCDrnks;
    unsigned char pEDrnks, pEDrnksPW, pCDrnks;
    nCust= 12467;//Number of Customers
    pEDrnks = 22;//Percentage of Energy Drinks consumers 
    pEDrnksPW = 14;//Percentage of Energy Drinkers purchase one or more per week
    pCDrnks = 64;//Percentage of Energy Drinkers consumers who prefer Citrus 
    //Process /Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
    //Output Everything
    cout<<"Customer Survey on Energy Drink Consumption"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Number of Customers =" <<nCust<<endl;
    cout<<"Number of Energy drinkers who purchase one or more per week ="<<static_cast<short>(pEDrnksPW)<<"%"<<endl;
    cout<<"Percentage Energy Drinkers ="<<static_cast<short>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers ="<<static_cast<short>(pCDrnks)<<"%"<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Number of Energy Drinkers =" <<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers ="<<nCDrnks<<endl;
    //Exit Stage Right!
    return 0;
}

