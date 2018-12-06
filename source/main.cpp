#include "store.h"
#include "burger.h"
#include "taco.h"
#include "chinese.h"
#include "icecream.h"
#include "pizza.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{

    vector <burger> orders;
    int userPick;
    string bstore, tstore, pstore, cstore, istore;
    /// display options in food cour
    cout << "Welcome to the Food Court!" << endl;
    cout << "Where would you like to go?\n" << endl;
    cout << "1 \t Burger Stacks " << endl; 
    cout << "2 \t Taco Vector " << endl;
    cout << "3 \t Pizza Pi " << endl;
    cout << "4 \t Chinese Overload " << endl;
    cout << "5 \t Ice Cream Bytes \n" << endl;
    cin >> userPick;
    // food items in burger stacks
    vector<burger> burgers;
    burgers.push_back(burger("#1 Cheeseburger $", 3.49));
    burgers.push_back(burger("#2 Bacon Cheeseburger $", 4.99));
    burgers.push_back(burger("#3 Chicken Sandwitch $", 3.75));
    burgers.push_back(burger("#4 Double Stack $",4.49));
    burgers.push_back(burger("#5 Garden Burger $", 3.49));
    burgers.push_back(burger("#6 Fish Dlish $", 4.25));
    ///drink items in burger stacks
    vector<string> bdrinks;
    bdrinks.push_back("#1 Pepsi");
    bdrinks.push_back("#2 Sprite");
    bdrinks.push_back("#3 Lemonade");
    bdrinks.push_back("#4 Dr. Pepper");
    bdrinks.push_back("#5 Mellow Yellow");
    bdrinks.push_back("#6 Root Beer");
    // make burger object
    burger b1;
   // display burgerstacks menu if burgerstacks was chosen
    if (userPick == 1)
    {
        int burgerPick, drinkPick;
        double total;
        char addDrink;
        cout << "\nHi! Welcome to Burger Stacks!" << endl;
        cout << "What type of burger would you like?" << endl;
        cout << "_______ Menu _______" << endl;
        b1.displayVector(burgers);
        cin >> burgerPick;

        if (burgerPick == 1)
            orders.push_back(burgers.at(0));
           // cout << orders[0].getBurger() << orders[0].getPrice() << endl;
        else if (burgerPick == 2)
            orders.push_back(burgers.at(1));
        else if (burgerPick == 3)
            orders.push_back(burgers.at(2));
        else if (burgerPick == 4)
            orders.push_back(burgers.at(3));
        else if (burgerPick == 5)
            orders.push_back(burgers.at(4));
        else 
        {
            cout << "Sorry please pick an item from the menu (1-5)" << endl;
        }
        // ask for drink
        cout << "Would you like to add a drink for $1.99? Y/N" << endl;
        cin >> addDrink;

        if (addDrink == 'y' || 'Y' || !'n' || !'N' )
        {
            b1.displayDrinks(bdrinks);
          //  b1.getPrice();
           // cout << b1.price_;
        }    
         else
        {
            cout << "Thanks" << endl;
        }
        


    }
    else
    {
        cout << "have a good day" << endl;
    }

    



}
    





