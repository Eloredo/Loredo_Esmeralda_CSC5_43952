/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 * Created on March 30, 2015, 10:18 AM
 * Purpose: Find a four digit number that passe the condition
 */
//System Libraries
#include <iostream>
using namespace std;

//User LIbraries

//Global COnstants

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
        //Loop for all possible digits
    for(int d1000=0;d1000<=9;d1000++){
        for (int d100=0;d100<=9;d100++){
            for (int d10=0;d10<=9;d10++){
                for(int d1=0; d1<=9;d1++){
                    if((d1000==3*d10) &&
                      (d1%2 == 1) &&
                      ((d1000+d100+d10+d1)==27)){
                        cout<<"The Address Number = ";
                        cout<<d1000<<d100<<d10<<d1<<endl;
                    }
                }
            }
        }
    }
    return 0;
}

