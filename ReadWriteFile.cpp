
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

    char key[] = { 200 }; // size
    Read.open("key.tmp"); // create
    if (Read.fail()) // for checked
    {
// ofstream Write
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
//ifstream Read
    Read.open("key.tmp");
    key;
    Read >> key;
    system("cls");
    cout << "old key : " << key << endl;
    Read.close();

//for read all line

        if (Read.is_open()) 
        {
            while (!Read.eof()) 
            {
                Read >> key; 
                cout << key << endl;
            }
   //fstream ReadWrite
ReadWrite.open("n1.txt", ios::out); 
    ReadWrite << "BruceLee"<<endl ;
    ReadWrite << "13"<<endl  ;
    ReadWrite.close();
    ReadWrite.open("n1.txt", ios::in);
    string name[2];
    ReadWrite>>name[0];
    ReadWrite>>name[1];
    cout << name[0]<< name[1]<<endl;
    ReadWrite.close();
    system("pause");
}
