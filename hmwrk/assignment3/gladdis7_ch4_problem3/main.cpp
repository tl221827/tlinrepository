/* 
 * File:   main.cpp
 * Author: Timothy Lin
 *
 * Created on July 7, 2014, 8:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int month, day, year;
    
    cout<<"enter a month (in numeric form), a day, and a two digit year (**/**/**)\n";
    
    cout<<"enter month: ";
    cin>>month;
    
    cout<<"enter day: ";
    cin>>day;
    
    cout<<"enter year: ";
    cin>>year;
            
   
    if (day + month == year)
        cout<<"the day is magic";
    default :cout<<"the day is not magic";
    
    return 0;
}

