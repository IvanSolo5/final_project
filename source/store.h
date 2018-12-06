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
        string getFood();
        string getDrink();
        double getFoodPrice();
        double getDrinkPrice();
        void makeOrder();
        void addTip();

};

#endif