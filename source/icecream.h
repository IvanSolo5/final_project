/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simaon Mai
/// CS2 Final Project
/// Purpsoe: Create an ice cream store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include "store.h"


using namespace std;

#ifndef ICECREAM
#define ICECREAM


class icecream
{
     private:
        string icecream_;
        string idrink_;
       

    public:
        icecream();
        icecream(string icecream, double price);
        vector<string> icecreamlist;
        vector<icecream> iceorders;
        string getIcecream();
        string getIdrink();
        double iprice_, idrinkPrice_;
        double getPrice();
        void selectIcecream();
        void displayVectorI(vector<icecream> &);
        double calcPrice();
        void selectDrink();
        void displayOrder();
        void displayDrinksI(vector<string> z);
        void receiptOutput();
    
};

#endif 
