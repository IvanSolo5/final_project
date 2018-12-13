/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simon Mai
/// CS2 Final Project
/// Purpsoe: Create an taco store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include "store.h"
#include "taco.h"

vector <string> tdrinkOrders;


taco::taco()
{
    taco_ = " ";
    tprice_ = 1.99;
}

taco::taco(string burger, double price)
{
    taco_ = burger;
    tprice_ = price;
}
// vector of taco objects that hold food type and price
vector <taco> torders;
taco t1;
double tdrinkPrice = 1.99;

string taco::getTaco()
{
    return taco_;
}

string taco::getTdrink()
{
    return tdrink_;
}
double taco::getPrice()
{
    return tprice_;
}
void taco::displayVectorT(vector<taco> &newTaco)
{
    for (int i = 0; i < newTaco.size();i++)
    {
        cout << newTaco[i].getTaco() << newTaco[i].getPrice() << endl;
    }
}

 
 void taco::selectTaco()
 {
     // food items in taco vector
    vector<taco> tacos;
    tacos.push_back(taco("#1 Steak Taco $", 5.49));
    tacos.push_back(taco("#2 Chicken Taco $", 4.99));
    tacos.push_back(taco("#3 Shrimp Taco $", 4.75));
    tacos.push_back(taco("#4 Lobster Taco $",5.49));
    tacos.push_back(taco("#5 Veggie Taco $", 4.49));
    tacos.push_back(taco("#6 Doritos Locos Taco $", 4.25));

   // display tacovector menu if tacovector was chosen

    int tacoPick;
    double total;
    cout << "\nHi! Welcome to Taco Vector!" << endl;
    cout << "What would you like to order?" << endl;
    cout << "_______ Menu _______" << endl;
    t1.displayVectorT(tacos);
    cin >> tacoPick;

    if (tacoPick == 1)
        torders.push_back(tacos.at(0));
    else if (tacoPick == 2)
        torders.push_back(tacos.at(1));
    else if (tacoPick == 3)
        torders.push_back(tacos.at(2));
    else if (tacoPick == 4)
        torders.push_back(tacos.at(3));
    else if (tacoPick == 5)
        torders.push_back(tacos.at(4));  
    else if (tacoPick == 6)
        torders.push_back(tacos.at(5));
 }

 void taco::displayOrder()
 {
    cout << "====== YOUR ORDER ======" << endl;
    cout << torders[0].getTaco() << torders[0].getPrice() << endl;
    cout << tdrinkOrders[0] << " $" << tdrinkPrice << endl;
    cout << "________________________" << endl;
    cout << "         Total: $" << tdrinkPrice + torders[0].getPrice() << endl;

 }


 void taco::displayDrinksT(vector<string> t)
 {
     cout << "____ Drink Menu ___" << endl;
     for (int i = 0; i < t.size(); i++)
     {
         cout << t[i] << endl;
     }
 }

void taco::selectDrink()
 {
    taco t9;
     // ask for drink
    char drink;
    int drinkPick;
    ///drink items in taco store
    vector<string> tdrinks;
    tdrinks.push_back("#1 Pepsi");
    tdrinks.push_back("#2 Sprite");
    tdrinks.push_back("#3 Lemonade");
    tdrinks.push_back("#4 Dr. Pepper");
    tdrinks.push_back("#5 Mellow Yellow");


    cout << "Would you like to add a drink for $1.99? Y/N" << endl;
    cin >> drink;
    
    if (drink == 'Y' || drink == 'y' )
    {
        t9.displayDrinksT(tdrinks); 
        cin >> drinkPick;
        if (drinkPick == 1)
        // pushe user pick into seperate vectr
        {
            tdrinkOrders.push_back(tdrinks.at(0));
        }
            
        else if (drinkPick == 2)
            tdrinkOrders.push_back(tdrinks.at(1));
        else if (drinkPick == 3)
            tdrinkOrders.push_back(tdrinks.at(2));
        else if (drinkPick == 4)
            tdrinkOrders.push_back(tdrinks.at(3));
        else if (drinkPick == 5)
            tdrinkOrders.push_back(tdrinks.at(4));
        else 
            cout << "Sorry please pick an item from the menu (1-5)" << endl;
        
    }
        else
            cout << "Thanks" << endl;
}

void taco::receiptOutput()
{
    ofstream receipt;
    receipt.open("Taco Vector.txt", ios::app);

    if (receipt.fail())
        cout << "Unable to open file" << endl;
    // move orders to receipt text file
    receipt << "====== YOUR ORDER ======" << endl;
    receipt << torders[0].getTaco() << torders[0].getPrice() << endl;
    receipt << tdrinkOrders[0] << " $" << tdrinkPrice << endl;
    receipt << "________________________" << endl;
    receipt << "         Total: $" << tdrinkPrice + torders[0].getPrice() << endl;
    receipt.close();

    ofstream masterReceipt;
    masterReceipt.open("Master.txt", ios::app);
     if (masterReceipt.fail())
        cout << "Unable to open file" << endl;
    // push orders to a master text file of receipts 
    masterReceipt << "====== YOUR ORDER ======" << endl;
    masterReceipt << torders[0].getTaco() << torders[0].getPrice() << endl;
    masterReceipt << tdrinkOrders[0] << " $" << tdrinkPrice << endl;
    masterReceipt << "________________________" << endl;
    masterReceipt << "         Total: $" << tdrinkPrice + torders[0].getPrice() << endl;
    masterReceipt.close();

}

