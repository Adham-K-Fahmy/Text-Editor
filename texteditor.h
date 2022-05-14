#ifndef TEXTEDITOR_H_INCLUDED
#define TEXTEDITOR_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct data
{
    string lineData;
};
data information[10000];

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
#endif // TEXTEDITOR_H_INCLUDED
