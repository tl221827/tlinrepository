/* 
 * File:   main.cpp
 * Author: Timothy Lin
 *
 * Created on July 7, 2014, 7:28 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    int number;
    
    cout<<"write a number from 1-10 youd would like to see in its roman numeral\n"<<"number: ";
    cin>>number;
    

    switch (number)
    {
        case 1:cout<<"roman numeral: I\n";
                break;
        case 2:cout<<"roman numeral: II\n";
                break;               
        case 3:cout<<"roman numeral: III\n";
                break;               
        case 4:cout<<"roman numeral: IV\n";
                break;                
        case 5:cout<<"roman numeral: V\n";
                break;
        case 6:cout<<"roman numeral: VI\n";
                break;
        case 7:cout<<"roman numeral: VII\n";
                break;
        case 8:cout<<"roman numeral: VIII\n";
                break;
        case 9:cout<<"roman numeral: IX\n";
                break;           
        case 10:cout<<"roman numeral: X\n";
                break;       
        default: cout<<"only numbers 1-10\n";
        
        
    }

   
    
    return 0;
}

