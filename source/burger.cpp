#include<iostream>
#include<string>
#include<vector>
#include "burger.h"

using namespace std;


burger::burger()
{
    burger_ = " ";
    price_ = 0;
}

burger::burger(string burger, double price)
{
    burger_ = burger;
    price_ = price;
}

string burger::getBurger()
{
    return burger_;
}

string burger::getBdrink()
{
    return bdrink_;
}
double burger::getPrice()
{
    return price_;
}
void burger::displayVector(vector<burger> &newBurger)
{
    for (int i = 0; i < newBurger.size();i++)
    {
        cout << newBurger[i].getBurger() << newBurger[i].getPrice() << endl;
    }
}
 void burger::displayDrinks(vector<string> d)
 {
     cout << "____ Drink Menu ___" << endl;
     for (int i = 0; i < d.size(); i++)
     {
         cout << d[i] << endl;
     }
 }


