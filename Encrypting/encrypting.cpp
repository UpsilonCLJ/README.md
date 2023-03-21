#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key = {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string secret = {};
    
    cout << "Enter your secret message : ";
    getline(cin, secret);

    cout << "\nEncrypting your message ... " << endl;
    cout << endl;
    for(size_t i = 0; i < secret.length(); i++){
        size_t position = alphabet.find(secret.at(i));
        if(position != string :: npos){
            secret.at(i) = key.at(position);
            cout << secret.at(i);
        }else{
            cout << secret.at(i);
        }
    }
    cout << endl;
    
    cout << "\nDecrypting your message ... " << endl;
    cout << endl;
    for(size_t j = 0; j < secret.length(); j++){
        size_t position = key.find(secret.at(j));
        if(position != string :: npos){
            secret.at(j) = alphabet.at(position);
            cout << secret.at(j);
        }else{
            cout << secret.at(j);
        }
    }
    return 0;
}
