#ifndef ARCHIVE_FUNCTIONS_H
#define ARCHIVE_FUNCTIONS_H

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


void NewCase();

void DeleteCase();

void EditCase();

void NameSearch();

void DisplayNr();

void DisplayType();

void FileSave();

void FileLoad();

void NameSearch();

void Menu();

#endif // ARCHIVE_FUNCTIONS_H
