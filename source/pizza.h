/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simaon Mai
/// CS2 Final Project
/// Purpsoe: Create an pizza store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include "store.h"


using namespace std;

#ifndef PIZZA
#define PIZZA


class pizza
{
     private:
        string pizza_;
        string pdrink_;
       

    public:
        pizza();
        pizza(string pizza, double price);
        vector<string> pizzas; ///
        vector<pizza> porders; ///
        string getPizza(); ///
        string getPdrink();///
        double pprice_, pdrinkPrice_;
        double getPrice();
        void selectPizza();
        void displayVectorP(vector<pizza> &); //
        double calcPrice();
        void selectDrink();
        void displayOrder();
        void displayDrinksP(vector<string> p);
        void receiptOutput();
    
};

#endif 
