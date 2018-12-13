/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simon Mai
/// CS2 Final Project
/// Purpsoe: Create an taco store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include "store.h"


using namespace std;

#ifndef TACO
#define TACO


class taco
{
     private:
        string taco_;
        string tdrink_;
       

    public:
        taco();
        taco(string taco, double price);
        vector<string> tacos;
        vector<taco> torders;
        string getTaco();
        string getTdrink();
        double tprice_, tdrinkPrice_;
        double getPrice();
        void selectTaco();
        void displayVectorT(vector<taco> &);
        double calcPrice();
        void selectDrink();
        void displayOrder();
        void displayDrinksT(vector<string> d);
        void receiptOutput();
    
};

#endif 
