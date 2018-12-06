#include<iostream>
#include<string>
#include<vector>
#include "store.h"

using namespace std;


store::store()
{
    foodItem = " ";
    foodItemPrice = 0.0;
    drinkItem = " ";
    drinkItemPrice = 0.0;
}

store::store(string food, string drink)
{
    this->foodItem = food;
    this->drinkItem = drink;
}

string store::getFood()
{
    return foodItem;
}

string store::getDrink()
{
    return drinkItem;
}

double store::getFoodPrice()
{
    return foodItemPrice;
}

double store::getDrinkPrice()
{
    return drinkItemPrice;
}

void store::makeOrder()
{
}

void store::addTip()
{
    
}