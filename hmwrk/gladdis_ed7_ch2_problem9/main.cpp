/* 
 * File:   main.cpp
 * Author: Timothy Lin
 *
 * Created on June 30, 2014, 9:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int board;
    double profit;
    
    board = 12.67;
    profit= .4;
    
    
    cout<<"sale price "<<board*profit+board<<endl;
    
    return 0;
}

//An electronics company sells circuit boards at a 40 percent profit. Write a program that
//calculates the selling price of a circuit board that costs them $12.67 to produce. Display
//the result on the screen.