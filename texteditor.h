#ifndef TEXTEDITOR_H_INCLUDED
#define TEXTEDITOR_H_INCLUDED

using namespace std;

void addNewText(string &data);
void printFile(string fileName);
void emptyFile(string fileName);
void encryptFile(string &data);
void decryptFile(string &data);
void split (string line);
void countWord();
string toUpper(string line);
string toLower(string line);
#endif // TEXTEDITOR_H_INCLUDED
