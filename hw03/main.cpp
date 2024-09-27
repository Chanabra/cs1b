#include <iostream>
#include "inctax.h"
#include "myheader.h"

int main() {
    // variables
  char taxPayer[40];
  char year[5];
  double incItem[10];
  char incDesc[10][40];
  int isiz;
  double incTot;
  double expItem[10];
  char expDesc[10][40];
  int esiz;
  double expTot;
  char depNam[10][40];
  char depRel[10][40];
  int dsiz;

  // Input taxpayer name and year
  std::cout << "Enter taxpayer name: ";
  std::cin.getline(taxPayer, 40);
  std::cout << "Enter tax year (e.g., 2024): ";
  std::cin.getline(year, 5);

   // Get income, expenses, and dependents (functions)
  getInc(incItem, incDesc, isiz, incTot);
  prInc(incItem, incDesc, isiz);

  getExp(expItem, expDesc, esiz, expTot);
  prExp(expItem, expDesc, esiz);

  getDep(depNam, depRel, dsiz);
  prDep(depNam, depRel, dsiz);

  // Calculate and print the tax summary
  prSumm(incTot, expTot, dsiz);

  return 0;
}
