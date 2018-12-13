/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simon Mai
/// CS2 Final Project
/// Purpsoe: Create an ice cream store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include "store.h"
#include "icecream.h"

vector <string> IdrinkOrders; ////


icecream::icecream()
{
    icecream_ = " ";
    iprice_ = 1.99;
}

icecream::icecream(string icecream, double price)
{
    icecream_ = icecream;
    iprice_ = price;
}
// vector of icecream objects that hold food type and price
vector <icecream> iorders;
icecream i1;
double idrinkPrice = 1.99;

string icecream::getIcecream()
{
    return icecream_;
}

string icecream::getIdrink()
{
    return idrink_;
}
double icecream::getPrice()
{
    return iprice_;
}
//////////
void icecream::displayVectorI(vector<icecream> &newIcecream)
{
    for (int i = 0; i < newIcecream.size();i++)
    {
        cout << newIcecream[i].getIcecream() << newIcecream[i].getPrice() << endl;
    }
}

 
 void icecream::selectIcecream()
 {
     // food items in ice cream store
    vector<icecream> iceorders;
    iceorders.push_back(icecream("#1 Chocolate $", 1.99));
    iceorders.push_back(icecream("#2 Vanilla $", 1.99));
    iceorders.push_back(icecream("#3 Peach Mango $", 1.75));
    iceorders.push_back(icecream("#4 Rocky Road $",2.49));
    iceorders.push_back(icecream("#5 Cookie dough $", 2.49));
    iceorders.push_back(icecream("#6 Strawberry $", 1.25));
   // display icecream menu if icecream was chosen

    int icecreamPick;
    double total;
    cout << "\nHi! Welcome to Ice Cream Bytes!" << endl;
    cout << "What type of Ice cream would you like?" << endl;
    cout << "_______ Menu _______" << endl;
    i1.displayVectorI(iceorders);
    cin >> icecreamPick;
    // push ice cream choice into seperat vector of objects
    if (icecreamPick == 1)
        iorders.push_back(iceorders.at(0));
    else if (icecreamPick == 2)
        iorders.push_back(iceorders.at(1));
    else if (icecreamPick == 3)
        iorders.push_back(iceorders.at(2));
    else if (icecreamPick == 4)
        iorders.push_back(iceorders.at(3));
    else if (icecreamPick == 5)
        iorders.push_back(iceorders.at(4));  
    else if (icecreamPick == 6)
        iorders.push_back(iceorders.at(5));
 }

 void icecream::displayOrder()
 {
    cout << "====== YOUR ORDER ======" << endl;
    cout << iorders[0].getIcecream() << iorders[0].getPrice() << endl;
    cout << IdrinkOrders[0] << " $" << idrinkPrice << endl;
    cout << "________________________" << endl;
    cout << "         Total: $" << idrinkPrice + iorders[0].getPrice() << endl;

 }

 void icecream::displayDrinksI(vector<string> z)
 {
     cout << "____ Drink Menu ___" << endl;
     for (int i = 0; i < z.size(); i++)
     {
         cout << z[i] << endl;
     }
 }

void icecream::selectDrink()
 {
    icecream i9;
     // ask for drink
    char drink;
    int drinkPick;
    ///drink items in burger stacks
    vector<string> idrinks;
    idrinks.push_back("#1 Pepsi");
    idrinks.push_back("#2 Sprite");
    idrinks.push_back("#3 Lemonade");
    idrinks.push_back("#4 Dr. Pepper");
    idrinks.push_back("#5 Mellow Yellow");

    cout << "Would you like to add a drink for $1.99? Y/N" << endl;
    cin >> drink;
    
    if (drink == 'Y' || drink == 'y' )
    {
        i9.displayDrinksI(idrinks); 
        cin >> drinkPick;
        // pushback drink choice into order vector
        if (drinkPick == 1)
        {
            IdrinkOrders.push_back(idrinks.at(0));
            // test if need
        }
        else if (drinkPick == 2)
            IdrinkOrders.push_back(idrinks.at(1));
        else if (drinkPick == 3)
            IdrinkOrders.push_back(idrinks.at(2));
        else if (drinkPick == 4)
            IdrinkOrders.push_back(idrinks.at(3));
        else if (drinkPick == 5)
            IdrinkOrders.push_back(idrinks.at(4));
        else 
            cout << "Sorry please pick an item from the menu (1-5)" << endl;
        
    }
        else
            cout << "Thanks" << endl;
}

void icecream::receiptOutput()
{
    ofstream receipt;
    receipt.open("Ice Cream Bytes.txt", ios::app);

    if (receipt.fail())
        cout << "Unable to open file" << endl;
    // create text file of ice cream receipts
    receipt << "====== YOUR ORDER ======" << endl;
    receipt << iorders[0].getIcecream() << iorders[0].getPrice() << endl;
    receipt << IdrinkOrders[0] << " $" << idrinkPrice << endl;
    receipt << "________________________" << endl;
    receipt << "         Total: $" << idrinkPrice + iorders[0].getPrice() << endl;

    receipt.close();

    ofstream masterReceipt;
    masterReceipt.open("Master.txt", ios::app);
    // push recepts into master text file of receipts
     if (masterReceipt.fail())
        cout << "Unable to open file" << endl;
    masterReceipt << "====== YOUR ORDER ======" << endl;
    masterReceipt << iorders[0].getIcecream() << iorders[0].getPrice() << endl;
    masterReceipt << IdrinkOrders[0] << " $" << idrinkPrice << endl;
    masterReceipt << "________________________" << endl;
    masterReceipt << "         Total: $" << idrinkPrice + iorders[0].getPrice() << endl;
    masterReceipt.close();

}
