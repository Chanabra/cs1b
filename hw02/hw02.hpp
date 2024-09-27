//**************************************
// CS1B - Dr. B - TTh 7:30-9:45pm
// Brandon Norman - HW #2 Coffee Sales
//**************************************

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void userMenu(); // shows the user how to use the program
void showCupCount(); // number of cups of each size sold 
void showMoneyMade(); // amount tendered
void showCoffeeSold(); // shows total tendered
void sellCoffee(); // performs sale

extern int smallCupsSold;
extern int mediumCupsSold;
extern int largeCupsSold;
extern double totalMoneyMade;
extern double totalCoffeeSold;
