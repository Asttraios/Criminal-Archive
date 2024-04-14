#ifndef PROJEKT_KRZYSIEK_FUNCTIONS1_H
#define PROJEKT_KRZYSIEK_FUNCTIONS1_H

#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


struct Case_Data{

    string Type, caseOpen, caseClosed, officerName, accusedName, victimName, witnessName, CaseFilesNum;
};

vector <Case_Data> caseBox;
Case_Data docum;
//vector <akta>::iterator it;

void NewCase();

void DeleteCase();

void EditCase();

void NameSearch();

void DisplayNr();

void DisplayType();

void FileSave();

void NameSearch();

//void ConvertNcheck();     wymaga poprawy



#endif // PROJEKT_KRZYSIEK_FUNCTIONS1_H