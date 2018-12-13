/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simaon Mai
/// CS2 Final Project
/// Purpsoe: Create an base store 
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>

using namespace std;

#ifndef STORE
#define STORE

class store 
{
    private:
        string foodItem;
        string drinkItem;
        double foodItemPrice;
        double drinkItemPrice;
        vector <string> orders;
        
        
    public:
        store();
        store(string food, string drink);
        void displayStore();
        void selectStore();
        void displayDrinks(vector<string> d);
        vector<string> drinkOrders;
};

#endif
