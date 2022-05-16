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

void printFile(string data){
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

void mergeFiles(string &data)
{
  fstream f1;
  string Fname1, text;
  cout <<"Enter the file name: ";
  cin >> Fname1;
  f1.open(Fname1+".txt",ios::in);//opening file in reading mode
  while(getline(f1, text)){ //read lines from file object and put it into string.
         continue;
  }
  data += text;
  f1.close();
}

void numberOfWords(string data)
{
    int nWords = 0;
    for(int x = 0; x < data.length(); x++){
        if((data[x] == ' ' || data[x] == '\n') && x > 0 && data[x-1] != ' ' && data[x-1] != '\n'){
            nWords++;
        }
    }
    if(data[data.length()-1] != ' ' && data[data.length()-1] != '\n'){
        nWords++;
    }
    cout<<"words = "<< nWords <<endl;
}

void numberOfCharacters(string data)
{
 cout<<"Number of characters = "<< data.length() <<endl;
}

void numberOfLines(string data)
{
  int lines = 1;
  for(int x = 0; x < data.size(); x++){
    if(data[x] == '\n'){
        lines++;
    }
  }
  cout <<"Lines = "<< lines << endl;
}

void searchForWord(string data)
 {
    string wordToFind;
    cout<<"\nEnter Word to find: ";
    cin>> wordToFind;
    wordToFind = toLower(wordToFind);
    data = toLower(data);
    if(data.find(wordToFind) != string::npos){
        cout << "Word was found in the file" << endl;
    }
    else{
        cout << "Word was not found in the file" << endl;
    }
}

void countWord(string data)
{
    int counter = 0, ind = 0;
    string searchWord;
    cout << "Enter the search word: ";
    cin >> searchWord;
    searchWord = toUpper(searchWord);
    data = toUpper(data);
    while(data.find(searchWord, ind) != string::npos){
        counter++;
        if(isalnum(data[data.find(searchWord, ind)-1]) || isalnum(data[data.find(searchWord, ind)+searchWord.length()]))
            counter--;
        ind = data.find(searchWord, ind)+1;
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

