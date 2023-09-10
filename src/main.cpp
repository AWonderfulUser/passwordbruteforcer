#include <iostream>
#include <fstream>
#include <vector>
#include "main.hpp"

int main() {
    // Read wordlist
    std::ifstream passwordFile("wordlist.txt");
    
    if(passwordFile.is_open()) {
        while(getline(passwordFile, line)) {
            wordlist.push_back(line);
        }
    } else {
        std::cout << "Could not open wordlist file: wordlist.txt" << std::endl;
        return 1;
    }
    passwordFile.close();

    // Ask the user the password
    std::cout << "Please enter the password you want to guess: ";
    std::cin >> password;

    // Match process
    for(int x = 0; x < wordlist.size(); x++) {
        if(wordlist[x] == password) {
            std::cout << "Match: " << wordlist[x] << std::endl;
        }
    }
}