/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simaon Mai
/// CS2 Final Project
/// Purpsoe: Create an pizza store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include "store.h"
#include "pizza.h"

vector <string> PdrinkOrders; ////


pizza::pizza()
{
    pizza_ = " ";
    pprice_ = 1.99;
}

pizza::pizza(string pizza, double price)
{
    pizza_ = pizza;
    pprice_ = price;
}
// vector of pizza objects that hold food type and price
vector <pizza> porders;
pizza p1;
double pdrinkPrice = 1.99;

string pizza::getPizza()
{
    return pizza_;
}

string pizza::getPdrink()
{
    return pdrink_;
}
double pizza::getPrice()
{
    return pprice_;
}
//////////
void pizza::displayVectorP(vector<pizza> &newPizza)
{
    for (int i = 0; i < newPizza.size();i++)
    {
        cout << newPizza[i].getPizza() << newPizza[i].getPrice() << endl;
    }
}

 
 void pizza::selectPizza()
 {
     // food items in burger stacks
    vector<pizza> pizzas;
    pizzas.push_back(pizza("#1 Pepperoni Pizza $", 3.99));
    pizzas.push_back(pizza("#2 Hawaiian Pizza $", 4.99));
    pizzas.push_back(pizza("#3 Cheese Pizza $", 3.75));
    pizzas.push_back(pizza("#4 Meatlovers Pizza $",5.49));
    pizzas.push_back(pizza("#5 Anchovy Pizza $", 4.49));
    pizzas.push_back(pizza("#6 Veggie Supreme Pizza $", 4.25));
   // display burgerstacks menu if pizza store was chosen

    int pizzaPick;
    double total;
    cout << "\nHi! Welcome to Pizza PI!" << endl;
    cout << "What type of Pizza would you like?" << endl;
    cout << "_______ Menu _______" << endl;
    p1.displayVectorP(pizzas);
    cin >> pizzaPick;

    if (pizzaPick == 1)
        porders.push_back(pizzas.at(0));
    else if (pizzaPick == 2)
        porders.push_back(pizzas.at(1));
    else if (pizzaPick == 3)
        porders.push_back(pizzas.at(2));
    else if (pizzaPick == 4)
        porders.push_back(pizzas.at(3));
    else if (pizzaPick == 5)
        porders.push_back(pizzas.at(4));  
    else if (pizzaPick == 6)
        porders.push_back(pizzas.at(5));
 }

 void pizza::displayOrder()
 {
    cout << "====== YOUR ORDER ======" << endl;
    cout << porders[0].getPizza() << porders[0].getPrice() << endl;
    cout << PdrinkOrders[0] << " $" << pdrinkPrice << endl;
    cout << "________________________" << endl;
    cout << "         Total: $" << pdrinkPrice + porders[0].getPrice() << endl;

 }

 void pizza::displayDrinksP(vector<string> p)
 {
     cout << "____ Drink Menu ___" << endl;
     for (int i = 0; i < p.size(); i++)
     {
         cout << p[i] << endl;
     }
 }

void pizza::selectDrink()
 {
    pizza p9;
     // ask for drink
    char drink;
    int drinkPick;
    ///drink items into pizza drinks
    vector<string> pdrinks;
    pdrinks.push_back("#1 Pepsi");
    pdrinks.push_back("#2 Sprite");
    pdrinks.push_back("#3 Lemonade");
    pdrinks.push_back("#4 Dr. Pepper");
    pdrinks.push_back("#5 Mellow Yellow");

    cout << "Would you like to add a drink for $1.99? Y/N" << endl;
    cin >> drink;
    
    if (drink == 'Y' || drink == 'y' )
    {
        p9.displayDrinksP(pdrinks); 
        cin >> drinkPick;
        // push choice into seperate vetor of icecream objects
        if (drinkPick == 1)
        {
            PdrinkOrders.push_back(pdrinks.at(0));
        }
            
        else if (drinkPick == 2)
            PdrinkOrders.push_back(pdrinks.at(1));
        else if (drinkPick == 3)
            PdrinkOrders.push_back(pdrinks.at(2));
        else if (drinkPick == 4)
            PdrinkOrders.push_back(pdrinks.at(3));
        else if (drinkPick == 5)
            PdrinkOrders.push_back(pdrinks.at(4));
        else 
            cout << "Sorry please pick an item from the menu (1-5)" << endl;
        
    }
        else
            cout << "Thanks" << endl;
}

void pizza::receiptOutput()
{
    ofstream receipt;
    receipt.open("Pizza Pi.txt", ios::app);

    if (receipt.fail())
        cout << "Unable to open file" << endl;
        // push orders into a text file of pizza orders
    receipt << "====== YOUR ORDER ======" << endl;
    receipt << porders[0].getPizza() << porders[0].getPrice() << endl;
    receipt << PdrinkOrders[0] << " $" << pdrinkPrice << endl;
    receipt << "________________________" << endl;
    receipt << "         Total: $" << pdrinkPrice + porders[0].getPrice() << endl;
    receipt.close();
    // push orders into master receipts text file
    ofstream masterReceipt;
    masterReceipt.open("Master.txt", ios::app);
     if (masterReceipt.fail())
        cout << "Unable to open file" << endl;
    masterReceipt << "====== YOUR ORDER ======" << endl;
    masterReceipt << porders[0].getPizza() << porders[0].getPrice() << endl;
    masterReceipt << PdrinkOrders[0] << " $" << pdrinkPrice << endl;
    masterReceipt << "________________________" << endl;
    masterReceipt << "         Total: $" << pdrinkPrice + porders[0].getPrice() << endl;
    masterReceipt.close();


}
