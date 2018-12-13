/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simon Mai
/// CS2 Final Project
/// Purpsoe: Create a buger store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include "store.h"

using namespace std;

#ifndef BURGER
#define BURGER


class burger
{
     private:
        string burger_;
        string bdrink_;
       

    public:
        burger();
        burger(string burger, double price);
        vector<string> burgers;
        vector<burger> orders;
        string getBurger();
        string getBdrink();
        double price_, drinkPrice_;
        double getPrice();
        void selectBurger();
        void displayVector(vector<burger> &);
        double calcPrice();
        void selectDrink();
        void displayOrder();
        void displayDrinks(vector<string> d);
        void receiptOutput();
        

};

#endif
