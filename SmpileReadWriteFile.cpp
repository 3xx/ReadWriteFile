
#include <iostream>     
#include <fstream>  
#include <string>

using namespace std;

/*
Developer : BruceLee13
Github    : https://github.com/3xx
Telegram  : https://t.me/ppphp

*/

int main()
{



    ofstream Write;
    ifstream Read;
    fstream ReadWrite;

    char key[] = { 200 };
    Read.open("key.tmp"); // create a file
    if (Read.fail())
    {
        cout << "Enter Your Key : ";
        cin >> key;
        Write.open("key.tmp");
        Write << key;
        Write.close();

    }
    else
    {

        Read.close();

    }

    Read.open("key.tmp");
    key;
    Read >> key;
    system("cls");
    cout << "old key : " << key << endl;
    Read.close();

    // for read all line

        if (Read.is_open()) 
        {
            while (!Read.eof()) 
            {
                Read >> key; 
                cout << key << endl;
            }
   

    system("pause");
}
