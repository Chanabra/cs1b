#include "hw02.hpp"

int smallCupsSold = 0;
int mediumCupsSold = 0;
int largeCupsSold = 0;
double totalMoneyMade = 0.0;
double totalCoffeeSold = 0.0;

int main() {
  int choice = 0;
  bool running = true;
  
  while (running) {  // while loop with the generally running or true and for case 9 will stop running
    userMenu();

    cout << endl << "Please enter your selection: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
      case 1:
	sellCoffee();
	break;
      case 2:
        showMoneyMade();
        break;
      case 3:
	showCoffeeSold();
	break;
      case 4:
	showCupCount();
	break;
      case 5:
	showCupCount();
	showCoffeeSold();
	showMoneyMade();
	break;
      case 9:
	running = false;
	cout << "Thank you for your business!" << endl;
	break;
      default:
        cout << "Invalid choice, please try again." << endl << endl;
	break;
    }
  }

}

