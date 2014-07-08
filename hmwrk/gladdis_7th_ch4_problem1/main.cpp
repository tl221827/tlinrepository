/* 
 * File:   main.cpp
 * Author: Timothy Lin
 *
 * Created on July 7, 2014, 6:43 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

int number1, number2;

cout<<"type two numbers"<<endl;
cin>>number1>>number2;

if (number1 > number2)
        cout<<"the larger number is "<<number1<<endl<<"the smaller number is "<<number2<<endl;


if (number2 > number1)
        cout<<"the larger number is "<<number2<<endl<<"the smaller number is "<<number1<<endl;


if (number1 == number2)    
        cout<<"the numbers equal the same!"<<endl;

    
    return 0;
}

