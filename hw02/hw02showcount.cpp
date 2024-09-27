#include "hw02.hpp"

extern int smallCupsSold;
extern int mediumCupsSold;
extern int largeCupsSold;

void showCupCount () {
    cout << endl << "Cups Sold:" << endl;
    cout << "Small: " << smallCupsSold << endl;
    cout << "Medium: " << mediumCupsSold << endl;
    cout << "Large: " << largeCupsSold << endl << endl;
}
