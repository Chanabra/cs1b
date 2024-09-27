#ifndef INCTAX_H
#define INCTAX_H

void getInc(double incItem[], char incDesc[][40], int& isiz, double& incTot);
void prInc(const double incItem[], const char incDesc[][40], int isiz);

void getExp(double expItem[], char expDesc[][40], int& esiz, double& expTot);
void prExp(const double expItem[], const char expDesc[][40], int esiz);

void getDep(char depNam[][40], char depRel[][40], int& dsiz);
void prDep(const char depNam[][40], const char depRel[][40], int dsiz);

void prSumm(double incTot, double expTot, int dsiz);

#endif
