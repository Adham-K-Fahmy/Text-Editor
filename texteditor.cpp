#include <iostream>
#include <conio.h>
#include <fstream>
#include "texteditor.h"

using namespace std;

void addNewText(string &data){
    string userInput;
    do{
        userInput += getch();
        if(userInput[userInput.length()-1] == 13){
            userInput[userInput.length()-1] = '\n';
            cout << '\0';
        }
        else if(userInput[userInput.length()-1] == '\b'){
            cout << '\b' << ' ' << '\b';
            if(userInput.length() == 1){
                userInput.erase(0);
                continue;
            }
            userInput.erase(userInput.length()-1);
            userInput.erase(userInput.length()-1);
        }
        else if(userInput[userInput.length()-1] != 26){
            cout << userInput[userInput.length()-1];
        }
    }
    while(userInput[userInput.length()-1] != 26);
    userInput.erase(userInput.length()-1);
    cout << endl;
    data += userInput;
}

void printFile(string fileName){
    fstream file;
    string data;
    char text[1000000];
    file.open(fileName+".txt", ios::in);
    while(!file.eof()){
        file.getline(text, 1000000, '\n');
        data += text;
        data += '\n';
    }
    file.close();
    cout << data << endl;
}

void emptyFile(string fileName){
    fstream file;
    file.open(fileName+".txt", ios::out | ios::trunc);
    file.close();
}
void encryptFile(string &data){
    for(int x = 0; x < data.length(); x++){
        if(data[x] == ' ' || data[x] == '\n'){
            continue;
        }
        data[x] = char(90-data[x]+65);
    }
}
void decryptFile(string &data){
    for(int x = 0; x < data.length(); x++){
        if(data[x] == ' ' || data[x] == '\n'){
            continue;
        }
        data[x] = char(90-data[x]+65);
    }
}
