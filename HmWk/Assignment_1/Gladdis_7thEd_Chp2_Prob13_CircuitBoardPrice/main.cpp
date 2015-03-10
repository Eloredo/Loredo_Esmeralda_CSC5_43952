/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 *
 * Created on March 9, 2015, 7:48 PM
 */

#include <iostream>

using namespace std;
 
 //Function Prototypes
 
 //Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short nCirBds,PCB, RTPcb, ProfMar, Selpric;
    nCirBds= 1.00;//Number of Circuit Boards
    PCB= 12.67;//Price of Circuit Board
    Selpric= 0.40;// 40% of profit margin
    
    //Process /Calculate
    RTPcb=(12.67/.40); //The total cost of product with profit at 40%
    ProfMar= RTPcb-12.67;//The Profit margin of product at 40%
    
    //Output Everything
    cout<<"The cost of the Circuit Board: "<<endl;
    cout<<"The cost of the Circuit Board without percent profit is: $ "<<PCB<<endl;
    cout<<"Number of Circuit boards = " <<nCirBds<<endl;
    cout<<"The retail cost at a electronic store: $"<<static_cast<short>(RTPcb)<<endl;
    cout<<"The profit margin of 40% is: $ "<<static_cast<short>(ProfMar)<<endl;
    
    //Exit Stage Right!
    return 0;
}

