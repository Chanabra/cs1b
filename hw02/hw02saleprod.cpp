#include "hw02.hpp"

extern int smallCupsSold;
extern int mediumCupsSold;
extern int largeCupsSold;
extern double totalMoneyMade;
extern double totalCoffeeSold;

void sellCoffee() {
  int size;
  int quantity;
  double price = 0;
  double coffeeAmount = 0;
  bool running = true;
   
  while (running) {
  cout << "Enter 1 to buy coffee in a small cup size (9 oz)" << endl;
  cout << "Enter 2 to buy coffee in a medium cup size (12 oz)" << endl;
  cout << "Enter 3 to buy coffee in a large cup size (15 oz)" << endl;
  cout << "Enter 9 to exit." << endl;
  cin >> size;

  if (size  == 9) {  // if size is 9 it exits this menu and uses 2 digits of precision for the dollar amount
  cout << "Please pay $" << std::fixed << std::setprecision(2) << totalMoneyMade << endl << endl;	  
  return;
  }

  cout << "Enter the number of cups: ";
  cin >> quantity;

  switch (size) {
    case 1:   
      price = 1.75;
      coffeeAmount = 9;
      smallCupsSold += quantity;
      break;
    case 2:
      price = 1.90;
      coffeeAmount = 12;
      mediumCupsSold += quantity;
      break;
    case 3:
      price = 2.00;
      coffeeAmount = 15;
      largeCupsSold += quantity;
      break;
    default:
      cout << "Invalid size!" << endl;
      break;
  }
  
  totalMoneyMade += price * quantity;
  totalCoffeeSold += coffeeAmount * quantity;
  
  }
 
}
