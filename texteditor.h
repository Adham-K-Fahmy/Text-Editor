#ifndef TEXTEDITOR_H_INCLUDED
#define TEXTEDITOR_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string>
#include "texteditor.h"

using namespace std;


struct splitWords
{
    string lineData;
};
splitWords information[10000];

void addNewText(string &data);
void printFile(string fileName);
void emptyFile(string fileName);
void encryptFile(string &data);
void decryptFile(string &data);
void split (string line);
void countWord();
string toUpper(string line);
string toLower(string line);
string firstToUpper (string line);
void save(string data);
#endif // TEXTEDITOR_H_INCLUDED
