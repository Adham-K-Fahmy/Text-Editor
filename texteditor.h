#ifndef TEXTEDITOR_H_INCLUDED
#define TEXTEDITOR_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string>
#include "texteditor.h"

using namespace std;

void addNewText(string &data);
void printFile(string data);
void emptyFile(string fileName);
void encryptFile(string &data);
void decryptFile(string &data);
void mergeFiles(string &data);
void numberOfWords(string data);
void numberOfCharacters(string data);
void numberOfLines(string data);
void searchForWord(string data);
void countWord(string data);
string toUpper(string line);
string toLower(string line);
string firstToUpper (string line);
void save(string data);
#endif // TEXTEDITOR_H_INCLUDED
