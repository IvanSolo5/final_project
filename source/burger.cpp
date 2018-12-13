///////////////////////////////////////////////////
/// Ivan Solodyankin & Simon Mai
/// CS2 Final Project
/// Purpsoe: Create a buger store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include "store.h"
#include "burger.h"

vector <string> drinkOrders;


burger::burger()
{
    burger_ = " ";
    price_ = 1.99;
}

burger::burger(string burger, double price)
{
    burger_ = burger;
    price_ = price;
}
// vector of burger objects that hold food type and price
vector <burger> orders;
burger b1;
double drinkPrice = 1.99;

string burger::getBurger()
{
    return burger_;
}
// getters 
string burger::getBdrink()
{
    return bdrink_;
}
double burger::getPrice()
{
    return price_;
}
// display burger menu
void burger::displayVector(vector<burger> &newBurger)
{
    for (int i = 0; i < newBurger.size();i++)
    {
        cout << newBurger[i].getBurger() << newBurger[i].getPrice() << endl;
    }
}

 
 void burger::selectBurger()
 {
     // food items in burger stacks
    vector<burger> burgers;
    burgers.push_back(burger("#1 Cheeseburger $", 3.49));
    burgers.push_back(burger("#2 Bacon Cheeseburger $", 4.99));
    burgers.push_back(burger("#3 Chicken Sandwitch $", 3.75));
    burgers.push_back(burger("#4 Double Stack $",4.49));
    burgers.push_back(burger("#5 Garden Burger $", 3.49));
    burgers.push_back(burger("#6 Fish Dlish $", 4.25));

   // display burgerstacks menu if burgerstacks was chosen
    int burgerPick;
    double total;
    cout << "\nHi! Welcome to Burger Stacks!" << endl;
    cout << "What type of burger would you like?" << endl;
    cout << "_______ Menu _______" << endl;
    b1.displayVector(burgers);
    cin >> burgerPick;

    /// push the users pick into a vector of objects
    if (burgerPick == 1)
        orders.push_back(burgers.at(0));
    else if (burgerPick == 2)
        orders.push_back(burgers.at(1));
    else if (burgerPick == 3)
        orders.push_back(burgers.at(2));
    else if (burgerPick == 4)
        orders.push_back(burgers.at(3));
    else if (burgerPick == 5)
        orders.push_back(burgers.at(4));  
    else if (burgerPick == 6)
        orders.push_back(burgers.at(5));
 }

 void burger::displayOrder()
 {
    cout << "====== YOUR ORDER ======" << endl;
    cout << orders[0].getBurger() << orders[0].getPrice() << endl;
    cout << drinkOrders[0] << " $" << drinkPrice << endl;
    cout << "________________________" << endl;
    cout << "         Total: $" << drinkPrice + orders[0].getPrice() << endl;

 }

 void burger::displayDrinks(vector<string> d)
 {
     cout << "____ Drink Menu ___" << endl;
     for (int i = 0; i < d.size(); i++)
     {
         cout << d[i] << endl;
     }
 }

void burger::selectDrink()
 {
    burger b9;
     // ask for drink
    char drink;
    int drinkPick;
    ///drink items in burger stacks
    vector<string> drinks;
    drinks.push_back("#1 Pepsi");
    drinks.push_back("#2 Sprite");
    drinks.push_back("#3 Lemonade");
    drinks.push_back("#4 Dr. Pepper");
    drinks.push_back("#5 Mellow Yellow");

    cout << "Would you like to add a drink for $1.99? Y/N" << endl;
    cin >> drink;
    
    if (drink == 'Y' || drink == 'y' )
    {
        b9.displayDrinks(drinks); 
        cin >> drinkPick;
        /// push back drink pick into drinks vector
        if (drinkPick == 1)
        {
            drinkOrders.push_back(drinks.at(0));
        }
            
        else if (drinkPick == 2)
            drinkOrders.push_back(drinks.at(1));
        else if (drinkPick == 3)
            drinkOrders.push_back(drinks.at(2));
        else if (drinkPick == 4)
            drinkOrders.push_back(drinks.at(3));
        else if (drinkPick == 5)
            drinkOrders.push_back(drinks.at(4));
        else 
            cout << "Sorry please pick an item from the menu (1-5)" << endl;
        
    }
        else
            cout << "Thanks" << endl;
}

void burger::receiptOutput()
{
    ofstream receipt;
    receipt.open("Burger Stacks.txt", ios::app);

    if (receipt.fail())
        cout << "Unable to open file" << endl;
    /// push receipt into burger text file
    receipt << "====== YOUR ORDER ======" << endl;
    receipt << orders[0].getBurger() << orders[0].getPrice() << endl;
    receipt << drinkOrders[0] << " $" << drinkPrice << endl;
    receipt << "________________________" << endl;
    receipt << "         Total: $" << drinkPrice + orders[0].getPrice() << endl;
    receipt.close();
    // push receipt to a master order text file
    ofstream masterReceipt;
    masterReceipt.open("Master.txt", ios::app);
     if (masterReceipt.fail())
        cout << "Unable to open file" << endl;
    masterReceipt << "====== YOUR ORDER ======" << endl;
    masterReceipt << orders[0].getBurger() << orders[0].getPrice() << endl;
    masterReceipt << drinkOrders[0] << " $" << drinkPrice << endl;
    masterReceipt << "________________________" << endl;
    masterReceipt << "         Total: $" << drinkPrice + orders[0].getPrice() << endl;
    masterReceipt.close();

}


