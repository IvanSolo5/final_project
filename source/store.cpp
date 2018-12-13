/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simon Mai
/// CS2 Final Project
/// Purpsoe: Create an base store 
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include "store.h"
#include "burger.h"
#include "taco.h"
#include "pizza.h"
#include "chinese.h"
#include "icecream.h"

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


void store::displayStore()
{
        /// display options in food cour
    cout << "Welcome to the Food Court!" << endl;
    cout << "Where would you like to go?\n" << endl;
    cout << "[1] \t Burger Stacks " << endl; 
    cout << "[2] \t Taco Vector " << endl;
    cout << "[3] \t Pizza Pi " << endl;
    cout << "[4] \t Chinese Overload " << endl;
    cout << "[5] \t Ice Cream Bytes \n" << endl;
}

void store::selectStore()
{
    int uPick;
    store s1;
    burger b1;
    taco t1;
    chinese c1;
    icecream i1;
    pizza p1;

    cin >> uPick;

    switch(uPick)
    {
    
        case 1: 
        {
            b1.selectBurger();
            b1.selectDrink();
            b1.displayOrder();
            b1.receiptOutput();
            break;
        }
            
        case 2:
        {
           t1.selectTaco();
           t1.selectDrink();
           t1.displayOrder();
           t1.receiptOutput();
           break;
        }
            
        case 3:
        {
            p1.selectPizza();
            p1.selectDrink();
            p1.displayOrder();
            p1.receiptOutput();
            break;
        }
           
        case 4:
        {
            c1.selectChinese();
            c1.selectDrink();
            c1.displayOrder();
            c1.receiptOutput();
            break;
        }
            
        case 5:
        {
            i1.selectIcecream();
            i1.selectDrink();
            i1.displayOrder();
            i1.receiptOutput();
            break;
        }
            
        default:
            cout << "Invalid entry" << endl;
            break;

    }

}



