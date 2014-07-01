/* 
 * File:   main.cpp
 * Author: Timothy Lin
 *
 * Created on June 30, 2014, 8:44 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int purchase;
    double statetax;
    double countrytax;
    
    purchase = 52;
    statetax = .04;
    countrytax = .02;
    
  cout<<"purchase price "<<purchase<<endl;
  cout<<"state tax "<<statetax*purchase<<endl;
  cout<<"country tax "<<countrytax*purchase<<endl;
  
  cout<<"total tax "<<countrytax*purchase+statetax*purchase;
          
    
    
    
    
    
    
    return 0;
}

//Write a program that computes the total sales tax on a $52 purchase. Assume the state
//sales tax is 4 percent and the county sales tax is 2 percent. Display the purchase price, state
//tax, county tax, and total tax amounts on the screen.