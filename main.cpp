#include <iostream>
#include "texteditor.h"

using namespace std;

int main()
{
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
            cout << 1 << endl;
            break;
        case 2:
            cout << 2 << endl;
            break;
        case 3:
            cout << 3 << endl;
            break;
        case 4:
            cout << 4 << endl;
            break;
        case 5:
            cout << 5 << endl;
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
            cout << 11 << endl;
            break;
        case 12:
            cout << 12 << endl;
            break;
        case 13:
            cout << 13 << endl;
            break;
        case 14:
            cout << 14 << endl;
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
