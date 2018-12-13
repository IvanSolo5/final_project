/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simon Mai
/// CS2 Final Project
/// Purpsoe: Create a Chinese store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include "store.h"


using namespace std;

#ifndef CHINESE
#define CHINESE


class chinese
{
     private:
        string chinese_;
        string cdrink_;
       

    public:
        chinese();
        chinese(string chinese, double price);
        vector<string> chineseFood; ///
        vector<chinese> corders; ///
        string getChinese(); ///
        string getCdrink();///
        double cprice_, cdrinkPrice_;
        double getPrice();
        void selectChinese();
        void displayVectorC(vector<chinese> &); //
        double calcPrice();
        void selectDrink();
        void displayOrder();
        void displayDrinksC(vector<string> c); ///
        void receiptOutput();
    
};

#endif 
