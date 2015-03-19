/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 * Created on March 18, 2015, 8:44 pm
 * Purpose: Paycheck -> Ternary
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip>//Formatting
#include <fstream>
using namespace std;

//User Libraries 

//Global Constants 

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
//Declare variables
    ofstream out;
    float hrsWrkd;
    float payRate;
    float oRate =1.5f;//Hours Worked (hrs), Pay Rate ($'s/Hour), Multiplicative factor of Payrate
    float oTime = 40.0f;
    float payChk;//Where overtime begins (hour), Gross pay ($'s)
    
    //Open the file
    out.open("Payroll.dat");
    
    //Prompt the user for inputs
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWrkd;
    cout<<"What is your pay rate ($'s/hr)?"<<endl;
    cin>>payRate;
    
    //Calculate the paycheck
    payChk = hrsWrkd<oTime?
        payRate*hrsWrkd:
        payRate*(hrsWrkd+(oRate-1)*(hrsWrkd-oTime));
    
    //Output the results to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours worked = "<<hrsWrkd<<" (hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<" (hr)"<<endl;
    cout<<"Over time rate = "<<oRate<<endl;
    cout<<"Over time begins at "<<oTime<<" (hrs)"<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    
    //Output results to the file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Hours worked = "<<hrsWrkd<<" (hrs)"<<endl;
    out<<"Pay Rate = $"<<payRate<<" (hr)"<<endl;
    out<<"Over time rate = "<<oRate<<endl;
    out<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    out<<"Gross Pay = $"<<payChk<<endl;
    
    //Close the file
    out.close();
    
    return 0;
}

