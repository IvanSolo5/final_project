#include<iostream>
#include<string>
#include<vector>

using namespace std;

#ifndef BURGER_H
#define BURGER_H

class burger 
{
    private:
        string burger_;
        string bdrink_;
       

    public:
        burger();
        burger(string burger, double price);
        vector<string> burgers;
        vector<string> drinks;
        string getBurger();
        string getBdrink();
        double price_;
        double getPrice();
        void displayVector(vector<burger> &);
        void displayDrinks(vector<string> );
        double calcPrice();


};

#endif