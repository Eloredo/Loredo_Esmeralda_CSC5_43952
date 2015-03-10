/* //Restaurant Bill
 * File:   main.cpp
 * Author: Esmeralda Loredo
 *
 * Created on March 10, 2015, 12:01 AM
 */

#include <iostream>

using namespace std;
//Write a program that computes the tax on a restaurant bill 
//For a patron with a $44.50 meal charge
//Tax 6.75 percent
//Tip 15% of the total after adding the tax
//Display the meal cost, tax amount, tip, & total bill
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
    int mCost, total, totalWT; 
    double taxAmt;
    double tip;
    double totalB;
    
    mCost=44.50;//Meal Charge
    taxAmt=0.0675;//Percent of Tax
    tip=0.15;//Percent of tip after adding the tax
    //Calculate and display transaction 
    total= mCost*(taxAmt);//Total meal cost w/tax
    totalWT=mCost*(tip);//Total meal cost w/ tip
    totalB= mCost+total+totalWT;//Grand total w/ tax + tip
    
    cout<< "Meal Cost: $"<<mCost<<endl;
    cout<< "Tax Amount: $"<<total<<endl;
    cout<< "Tip: "<<tip<<"%"<<" ="<<6.68<<endl;
    cout<< "Total Bill: $"<<totalB<<endl;
   
    //Exit Stage Right!
    return 0;
}

