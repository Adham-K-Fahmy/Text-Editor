#include "texteditor.h"
int main()
{
    fstream file;
    string fileName, data="";
    char text[1000000];
    cout << "Please enter file name: ";
    cin >> fileName;
    file.open(fileName+".txt", ios::in);
    if(file.is_open()){
        cout << "File opened" << endl;
    }
    else{
        file.open(fileName+".txt", ios::out);
        cout << "The file " << fileName << " was not found, we created it for you" << endl;
    }
    while(!file.eof()){
        file.getline(text, 1000000, '\n');
        data += text;
        data += '\n';
    }
    file.close();
    while(true){
        cout << "1. Add new text to the end of the file" << endl;
        cout << "2. Display the content of the file" << endl;
        cout << "3. Empty the file" << endl;
        cout << "4. Encrypt the file content" << endl;
        cout << "5. Decrypt the file content" << endl;
        cout << "6. Merge another file" << endl;
        cout << "7. Count the number of words in the file" << endl;
        cout << "8. Count the number of characters in the file" << endl;
        cout << "9. Count the number of lines in the file" << endl;
        cout << "10. Search for a word in the file" << endl;
        cout << "11. Count the number of times a word exists in the file" << endl;
        cout << "12. Turn the file content to upper case" << endl;
        cout << "13. Turn the file content to lower case" << endl;
        cout << "14. Turn file content to 1st caps(1st letter of each word is capital)" << endl;
        cout << "15. Save" << endl;
        cout << "16. Exit" << endl;
        int choice;
        cin >> choice;
        switch(choice){
        case 1:
            addNewText(data);
            break;
        case 2:
            printFile(fileName);
            break;
        case 3:
            emptyFile(fileName);
            break;
        case 4:
            encryptFile(data);
            break;
        case 5:
            decryptFile(data);
            break;
        case 6:
            cout << 6 << endl;
            break;
        case 7:
            cout << 7 << endl;
            break;
        case 8:
            cout << 8 << endl;
            break;
        case 9:
            cout << 9 << endl;
            break;
        case 10:
            cout << 10 << endl;
            break;
        case 11:
            split(data);
            countWord();
            break;
        case 12:
            data = toUpper(data);
            break;
        case 13:
            data = toLower(data);
            break;
        case 14:
            data = toLower(data);
            data = firstToUpper(data);
            break;
        case 15:
            cout << 15 << endl;
            break;
        case 16:
            return 0;
        default:
            cout << "Wrong Input" << endl;
        }
    }
}
