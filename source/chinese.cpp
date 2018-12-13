/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simaon Mai
/// CS2 Final Project
/// Purpsoe: Create a Chinese store that sells food and drink
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include "store.h"
#include "chinese.h"

vector <string> CdrinkOrders; ////


chinese::chinese()
{
    chinese_ = " ";
    cprice_ = 1.99;
}

chinese::chinese(string chinese, double price)
{
    chinese_ = chinese;
    cprice_ = price;
}
// vector of Chinese food objects that hold food type and price
vector <chinese> corders; ////
chinese c1;
double cdrinkPrice = 1.99;

string chinese::getChinese()
{
    return chinese_;
}

string chinese::getCdrink()
{
    return cdrink_;
}
double chinese::getPrice()
{
    return cprice_;
}
/// display menu
void chinese::displayVectorC(vector<chinese> &newChinese)
{
    for (int i = 0; i < newChinese.size();i++)
    {
        cout << newChinese[i].getChinese() << newChinese[i].getPrice() << endl;
    }
}

 
 void chinese::selectChinese()
 {
     // food items in chinese store
    vector<chinese> chineseFood;
    chineseFood.push_back(chinese("#1 Orange Chicken $", 4.99));
    chineseFood.push_back(chinese("#2 Kung Pao Chicken $", 3.99));
    chineseFood.push_back(chinese("#3 Beijing Beef $", 4.75));
    chineseFood.push_back(chinese("#4 Sweet and Sour Pork $",5.49));
    chineseFood.push_back(chinese("#5 Fried Rice $", 4.49));
    chineseFood.push_back(chinese("#6 Egg Rolls (x2) $", 4.25));

   // display chinese food  menu if burgerstacks was chosen
    int chinesePick;
    double total;
    cout << "\nHi! Welcome to Chinese Overload!" << endl;
    cout << "What type of Dish would you like?" << endl;
    cout << "_______ Menu _______" << endl;
    c1.displayVectorC(chineseFood);
    cin >> chinesePick;
    // push user pick into a chinse food order vector of objects
    if (chinesePick == 1)
        corders.push_back(chineseFood.at(0));
    else if (chinesePick == 2)
        corders.push_back(chineseFood.at(1));
    else if (chinesePick == 3)
        corders.push_back(chineseFood.at(2));
    else if (chinesePick == 4)
        corders.push_back(chineseFood.at(3));
    else if (chinesePick == 5)
        corders.push_back(chineseFood.at(4));  
    else if (chinesePick == 6)
        corders.push_back(chineseFood.at(5));
 }

 void chinese::displayOrder()
 {
    cout << "====== YOUR ORDER ======" << endl;
    cout << corders[0].getChinese() << corders[0].getPrice() << endl;
    cout << CdrinkOrders[0] << " $" << cdrinkPrice << endl;
    cout << "________________________" << endl;
    cout << "         Total: $" << cdrinkPrice + corders[0].getPrice() << endl;

 }

 void chinese::displayDrinksC(vector<string> c)
 {
     cout << "____ Drink Menu ___" << endl;
     for (int i = 0; i < c.size(); i++)
     {
         cout << c[i] << endl;
     }
 }

void chinese::selectDrink()
 {
    chinese c9;
     // ask for drink
    char drink;
    int drinkPick;
    ///drink items in burger stacks
    vector<string> cdrinks;
    cdrinks.push_back("#1 Pepsi");
    cdrinks.push_back("#2 Sprite");
    cdrinks.push_back("#3 Lemonade");
    cdrinks.push_back("#4 Dr. Pepper");
    cdrinks.push_back("#5 Mellow Yellow");

    cout << "Would you like to add a drink for $1.99? Y/N" << endl;
    cin >> drink;
    
    if (drink == 'Y' || drink == 'y' )
    {
        c9.displayDrinksC(cdrinks); 
        cin >> drinkPick;
        // push drink choice into seperat arder
        if (drinkPick == 1)
        {
            CdrinkOrders.push_back(cdrinks.at(0));
        }
            
        else if (drinkPick == 2)
            CdrinkOrders.push_back(cdrinks.at(1));
        else if (drinkPick == 3)
            CdrinkOrders.push_back(cdrinks.at(2));
        else if (drinkPick == 4)
            CdrinkOrders.push_back(cdrinks.at(3));
        else if (drinkPick == 5)
            CdrinkOrders.push_back(cdrinks.at(4));
        else 
            cout << "Sorry please pick an item from the menu (1-5)" << endl;
        
    }
        else
            cout << "Thanks" << endl;
}

void chinese::receiptOutput()
{
    ofstream receipt;
    receipt.open("Chinese Overload.txt", ios::app);
    // push orders into a receipt text file for Chinese store
    if (receipt.fail())
        cout << "Unable to open file" << endl;
    receipt << "====== YOUR ORDER ======" << endl;
    receipt << corders[0].getChinese() << corders[0].getPrice() << endl;
    receipt << CdrinkOrders[0] << " $" << cdrinkPrice << endl;
    receipt << "________________________" << endl;
    receipt << "         Total: $" << cdrinkPrice + corders[0].getPrice() << endl;
    receipt.close();
    // push receipts to a master text file
    ofstream masterReceipt;
    masterReceipt.open("Master.txt", ios::app);
     if (masterReceipt.fail())
        cout << "Unable to open file" << endl;
    masterReceipt << "====== YOUR ORDER ======" << endl;
    masterReceipt << corders[0].getChinese() << corders[0].getPrice() << endl;
    masterReceipt << CdrinkOrders[0] << " $" << cdrinkPrice << endl;
    masterReceipt << "________________________" << endl;
    masterReceipt << "         Total: $" << cdrinkPrice + corders[0].getPrice() << endl;
    masterReceipt.close();

}
