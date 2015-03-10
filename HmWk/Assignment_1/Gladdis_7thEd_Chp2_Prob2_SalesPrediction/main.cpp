/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 *
 * Created on March 9, 2015, 8:42 PM
 */

#include <iostream>
///Begin Execution Here!
using namespace std;

///62 percent of total sales
///4.6 million in sales this year
///East Coast sales division 
int main(int argc, char** argv) {
///Declare variables 
    int TtlSles, pTtlSls;
    //Amount of sales this year
    double Sales = 4.6e6;
    //Calculate and display 62% of total sales
    TtlSles= Sales *.62;
    //Output Variables 
    cout<<"The East Coast division will generate $"<<TtlSles<< 
            " If they make $4.6 million this year."<<endl;
    //Exit Right Stage!
    return 0;
}

