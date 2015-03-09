/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo 
 *
 * Created on March 9, 2015, 8:34 AM
 */

#include <iostream>

using namespace std;
//Execution Starts Here!
int main(int argc, char** argv) {
    
//Declare Variables 
unsigned short nStocks, TtlAmntS, AmntComm, TtlAmntP, AmntPS, pComm;

//Kathryn has 600 shares at a price of $21.77 per share
nStocks=600;//Number of Stocks

//Output Everything
cout<<"Summary invoice of Stock Transactions"<<endl;
cout<<"Number of Stocks: " <<nStocks<<endl;
TtlAmntS=nStocks*21.77;//21.77 is The cost per share in $ 
cout<<"Amount paid for the stock alone w/o commission: $"<<TtlAmntS<<endl;
AmntComm=TtlAmntS*.02;//.02 is the Percentage of Commission to Broker
cout<<"Amount paid for commission: $"<<AmntComm<<endl;
TtlAmntP=TtlAmntS+AmntComm;
cout<<"Total amount paid w/ stock and commission:$"<<(TtlAmntP)<<endl;
    //Exit Stage Right!

    return 0;
}

