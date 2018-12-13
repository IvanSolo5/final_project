/////////////////////////////////////////////////////////
/// Ivan Solodyankin & Simaon Mai
/// CS2 Final Project
/// Purpsoe: Create an ordering system that prints receipts 
/// to a master file, and individual store file.
/// Project completd 12 December 2018
//////////////////////////////////////////////////////////
#include "store.h"
#include "burger.h"
#include "pizza.h"
#include "taco.h"
#include "chinese.h"
#include "icecream.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    char continuity;
    // loop for multiple orders
    do
    {
        store s4;
        // display store options
        s4.displayStore();
        // once store is selected user will be able to order food 
        // from the picked store
        s4.selectStore();
        cout << "Do you want to eat more stuff?: ";
        cin >> continuity;
        
    } while (continuity == 'Y' || continuity == 'y');
   

    return 0;
}








