/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 * Created on March 25, 2015, 8:29 AM
 * Purpose: Cable Bill problem
 */
//System Libraries
#include <iostream>//I/O standard
#include <iomanip>//Formatting
#include <fstream>//I/O File
using namespace std;

//User LIbraries 

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;//Output the results in a file
    float vwdHrs; //Hours viewed (hrs)
    char package;//Package AaBbCc
    const int SIZE=40; //Max size of name = 39 characters
    char name[SIZE]; //Name of customer  
    float bill; //Cable bill in $'S
    //Open  File
    out.open("Cable.dat");
    //Prompt the user for input
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your package A,B,C"<<endl;
    cin>>package;
    cout<<"What is the customer's name?"<<endl;
    cin.ignore();
    cin.getline(name,SIZE);
    
    //Calculate Paycheck
    switch (package) {
        case 'A':
        case 'a':{ 
            bill=9.95;
            if(vwdHrs>10)bill+2*(vwdHrs-10);
            break;
        }       
        case 'B':
        case 'b':{
            bill=14.95;
            if(vwdHrs>20)bill+=(vwdHrs-20);
            break;
        }
        case 'C':
        case 'c':{
            bill=19.95;
            break;
        }      
    
        default: cout<<"Wrong Package Chosen"<<endl;
    };
   //Output the results to the file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Your Cable Bill From CSC5 RCC Programming Class"<<endl;
    out<<"Customer Name: "<<name<<endl;
    out<<"Package: " <<package<<endl;
    out<<"Hours Viewed: "<<vwdHrs<<endl;
    out<<"Amount Owed: $"<<bill<<endl;
    //Close the file
    out.close ();
        return 0;
}
