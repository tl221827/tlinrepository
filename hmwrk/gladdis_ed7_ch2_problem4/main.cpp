/* 
 * File:   main.cpp
 * Author: Timothy Lin
 *
 * Created on June 30, 2014, 8:55 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double meal;
    double tax;
    double tip;
    
    meal = 44.50;
    tax = .0675;
    tip = .15;
    
    cout<<"meal cost "<<meal<<endl;
    cout<<"tax amount "<<meal*tax<<endl;
    cout<<"tip amount "<<meal*tip<<endl;
    cout<<"total amount "<<meal*tip+meal*tip+meal;
    
    
    return 0;
}

//Write a program that computes the tax and tip on a restaurant bill for a patron with a
//44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 15
//percent of the total after adding the tax. Display the meal cost, tax amount, tip amount,
//and total bill on the screen.