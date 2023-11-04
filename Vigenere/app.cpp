#include<iostream>
#include <cctype>
#include <string>

int main(){
    std::cout << "Welcome to the Vigenere Cipher" << std::endl;

    std::string message;
    std::string messageEncrypted;
    std::string messageDecrypted;
    std::string key;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    std::cout << "Give me the message:" << std::endl;
    std::getline(std::cin, message); 

    std::cout << "Give me the key:" << std::endl;
    std::cin >> key;
    std::string modifiedKey = key;

    // Creating the modified key
    int i=0;
    while (message.length() > i && message.length() != modifiedKey.length()){
        if (i == modifiedKey.length()){
            i=0;
        }      
        if (message[i] == ' ') {
            modifiedKey.insert(i, " ");
            i++;
            continue;
        }
        
        modifiedKey += modifiedKey[i];
        i++;
    }
    
    // Encrypting the message
    for (int i=0; i < message.length(); i++){
        if(message[i] == ' '){
            messageEncrypted += ' ';
            continue;
        }
        int index = (alphabet.find(tolower(message[i])) + alphabet.find(tolower(modifiedKey[i]))) % 26;
        messageEncrypted += alphabet[index];
    }
    // Decrypting the message
    for (int i=0; i < messageEncrypted.length(); i++){
        if(messageEncrypted[i] == ' '){
            messageDecrypted += ' ';
            continue;
        }
        int index = (alphabet.find(tolower(messageEncrypted[i])) - alphabet.find(tolower(modifiedKey[i])) + 26) % 26;
        if (index < 0) {
            index += 26;
        }
        messageDecrypted += alphabet[index];
    }
    
    // Affichage

    std::cout << "------Encryption------" << std::endl;

    std::cout << message << std::endl;
    std::cout << modifiedKey << std::endl;

    std::cout << "The encrypted message is: " << std::endl << messageEncrypted << std::endl;

    std::cout << "------Decryption------" << std::endl;
    
    std::cout << messageEncrypted << std::endl;
    std::cout << modifiedKey << std::endl;

    std::cout << "The decrypted message is: " << std::endl << messageDecrypted << std::endl;

    return 0;
}