/* 
 * File:   main.cpp
 * Author: Esmeralda Loredo
 * //Purpose: Determine if Table created in class agrees with Logic
 * //of the computer
 * 
 * Created on March 18, 2015, 10:18 AM
 */

#include <iostream>

using namespace std;

// User Libraries

// Global Constants
 
// Function Prototypes
 
// Execution Begins here!
int main(int argc, char** argv) {
 
  //Declare variables 
 
 bool x, y;
 
 //Heading
 
 cout<<"x y !x !y x&&y x||y x^y x^y^y x^y^x "
     << "!(x&&y) !x||!y !(x||y) !x&&!y "<<endl;
 
 //Output the first row of the table
 
 x=true; y=true;
 cout<<(x?'T':'F')<< " ";
 cout<<(y?'T':'F' )<<" ";
 cout<<(!x?'T':'F')<<"  ";
 cout<<(!y?'T':'F')<<"  ";
 cout<<(x&&y?'T':'F')<<"    ";
 cout<<(x||y?'T':'F')<<"    ";
 cout<<(x^y?'T':'F')<<"   ";
 cout<<(x^y^y?'T':'F')<<"     ";
 cout<<(x^y^x?'T':'F')<<"     ";
 cout<<(!(x&&y)?'T':'F')<<"       ";
 cout<<(!x||!y?'T':'F')<<"      ";
 cout<<(!(x||y)?'T':'F')<<"       ";
 cout<<((!x&&!y)?'T':'F')<<"      ";
 
 cout<<endl;
 
 //Output second row.
 x=true, y=false;
 cout<<(x?'T':'F')<< " ";
 cout<<(y?'T':'F' )<<" ";
 cout<<(!x?'T':'F')<<"  ";
 cout<<(!y?'T':'F')<<"  ";
 cout<<(x&&y?'T':'F')<<"    ";
 cout<<(x||y?'T':'F')<<"    ";
 cout<<(x^y?'T':'F')<<"   ";
 cout<<(x^y^y?'T':'F')<<"     ";
 cout<<(x^y^x?'T':'F')<<"     ";
 cout<<(!(x&&y)?'T':'F')<<"       ";
 cout<<(!x||!y?'T':'F')<<"      ";
 cout<<(!(x||y)?'T':'F')<<"       ";
 cout<<((!x&&!y)?'T':'F')<<"      ";
  
 cout<<endl;
 
 //Output third row
 x=false, y=true;
 cout<<(x?'T':'F')<< " ";
 cout<<(y?'T':'F' )<<" ";
 cout<<(!x?'T':'F')<<"  ";
 cout<<(!y?'T':'F')<<"  ";
 cout<<(x&&y?'T':'F')<<"    ";
 cout<<(x||y?'T':'F')<<"    ";
 cout<<(x^y?'T':'F')<<"   ";
 cout<<(x^y^y?'T':'F')<<"     ";
 cout<<(x^y^x?'T':'F')<<"     ";
 cout<<(!(x&&y)?'T':'F')<<"       ";
 cout<<(!x||!y?'T':'F')<<"      ";
 cout<<(!(x||y)?'T':'F')<<"       ";
 cout<<((!x&&!y)?'T':'F')<<"      ";
 
 cout<<endl;
 
 //Output fourth row
 x=false, y=false;
 cout<<(x?'T':'F')<< " ";
 cout<<(y?'T':'F' )<<" ";
 cout<<(!x?'T':'F')<<"  ";
 cout<<(!y?'T':'F')<<"  ";
 cout<<(x&&y?'T':'F')<<"    ";
 cout<<(x||y?'T':'F')<<"    ";
 cout<<(x^y?'T':'F')<<"   ";
 cout<<(x^y^y?'T':'F')<<"     ";
 cout<<(x^y^x?'T':'F')<<"     ";
 cout<<(!(x&&y)?'T':'F')<<"       ";
 cout<<(!x||!y?'T':'F')<<"      ";
 cout<<(!(x||y)?'T':'F')<<"       ";
 cout<<((!x&&!y)?'T':'F')<<"      ";
 
 cout<<endl;
 
 //Exit Stage Right!   
 
    return 0;
}
