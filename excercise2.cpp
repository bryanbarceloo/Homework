//
//  main.cpp
//  Exercise1
//
//  Created by Bryan Barcelo on 9/4/20.
//  Copyright © 2020 Bryan Barcelo. All rights reserved.
//
//  Chapter 3, Excercise 2 :
//  Write a Program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number of miles.

#include <iostream>
#include <string>
using namespace std;

int main() {
    std::cout << "Please input the number you wish to convert: \n";
    const double km_mile = 1.60934;
    int dis = 1;
    while (dis != 0) {
        cout << "Enter distance in miles: ";
        cin >> dis;
        cout << dis << " mi is aprox. " << dis * km_mile << " km" << endl;

    }
    
}



