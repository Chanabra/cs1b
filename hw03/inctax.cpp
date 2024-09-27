#include <iostream>
#include "inctax.h"

// This function gets the amount of income items
void getInc(double incItem[], char incDesc[][40], int& isiz, double& incTot) {
  std::cout << "Enter number of income items: ";
  std::cin >> isiz;
  std::cin.ignore();
  incTot = 0.0;

  for (int i = 0; i < isiz; ++i) {
    std::cout << "Enter description for income item " << i + 1 << ": ";
    std::cin.getline(incDesc[i], 40);
    std::cout << "Enter amount for " << incDesc[i] << ": ";
    std::cin >> incItem[i];
    std::cin.ignore();
    incTot += incItem[i];
    }
}

// Function to print income items
void prInc(const double incItem[], const char incDesc[][40], int isiz) {
  std::cout << "\nIncome Items:\n";
  for (int i = 0; i < isiz; ++i) {
    std::cout << incDesc[i] << ": $" << incItem[i] << std::endl;
    }
}

// Function to get expense items
void getExp(double expItem[], char expDesc[][40], int& esiz, double& expTot) {
  std::cout << "Enter number of expense items: ";
  std::cin >> esiz;
  std::cin.ignore();
  expTot = 0.0;

  for (int i = 0; i < esiz; ++i) {
    std::cout << "Enter description for expense item " << i + 1 << ": ";
    std::cin.getline(expDesc[i], 40);
    std::cout << "Enter amount for " << expDesc[i] << ": ";
    std::cin >> expItem[i];
    std::cin.ignore();
    expTot += expItem[i];
    }
}

// Function to print expense items
void prExp(const double expItem[], const char expDesc[][40], int esiz) {
  std::cout << "\nExpense Items:\n";
  for (int i = 0; i < esiz; ++i) {
    std::cout << expDesc[i] << ": $" << expItem[i] << std::endl;
    }
}

// Function to get dependents
void getDep(char depNam[][40], char depRel[][40], int& dsiz) {
  std::cout << "Enter number of dependents: ";
  std::cin >> dsiz;
  std::cin.ignore();

  for (int i = 0; i < dsiz; ++i) {
    std::cout << "Enter name of dependent " << i + 1  << ": ";
    std::cin.getline(depNam[i], 40);
    std::cout << "Enter relationship of " << depNam[i] << ": ";
    std::cin.getline(depRel[i], 40);
    }
}

// Function to print dependents
void prDep(const char depNam[][40], const char depRel[][40], int dsiz) {
  std::cout << "\nDependents:\n";
  for (int i = 0; i < dsiz; ++i) {
    std::cout << depNam[i] << " (" << depRel[i] << ")\n";
    }
}

// Function to calculate and print tax summary
void prSumm(double incTot, double expTot, int dsiz) {
  double tax = (incTot - expTot - (dsiz * 3000.00)) * 0.18;
  std::cout << "\nSummary:\n";
  std::cout << "Total Income: $" << incTot << std::endl;
  std::cout << "Total Expenses: $" << expTot << std::endl;
  std::cout << "Number of Dependents: " << dsiz << std::endl;
  std::cout << "Tax Owed: $" << tax << std::endl;
}
