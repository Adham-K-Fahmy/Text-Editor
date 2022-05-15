#include "texteditor.h"
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

void split (string line)
{
    static int index = 0;
    string word = "";
    for (char x : line)
    {
        if (x == ' ' || x == '\n')
        {
            information[index].lineData = word;
            word = "";
            index++;
        }
        else
        {
            word += x;
        }
    }
    index++;
    information[index].lineData = word;
}

void countWord()
{
    int counter = 0;
    string searchWord;
    cout << "Enter the search word: ";
    cin >> searchWord;
    searchWord = toUpper(searchWord);
    for (int i = 0 ; i < 10000 ; i++)
    {
        if (information[i].lineData == searchWord)
        {
            counter++;
        }
    }
    cout << "The word exist in file " <<  counter << " times \n\n";
}


string toUpper(string line)
{
    for (int i = 0 ; i < line.length(); i++)
    {
        if (line[i] > 96 && line[i] < 123)
            line[i] -= 32;
    }
    return line;
}


string toLower(string line)
{
     for (int i = 0; i < line.length(); i++)
    {
        if (line[i] > 64 && line[i] < 91 )
            line[i] += 32;
    }
    return line;
}

string firstToUpper (string line)
{
    if (line[0] > 96 && line[0] < 123)
    {
        line[0] -= 32;
    }
    for (int i = 0 ; i < line.length() ; i++)
    {
        if (line[i] == ' ' || line[i] == '\n')
        {
            if (line[i+1] > 96 && line[i+1] < 123)
            {
                line[i+1] -= 32;
            }
        }
    }
    return line;
}

void save(string data)
{
    fstream myFile;
    string saveFile;
    cout << "Enter the file you want to save in: ";
    cin >> saveFile;
    myFile.open(saveFile+".txt" , ios :: out);
    myFile << data;
    myFile.close();
}

