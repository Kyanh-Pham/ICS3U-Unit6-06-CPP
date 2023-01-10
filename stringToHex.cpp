// Copyright (c) 2023 Kyanh Pham

// Created by: Kyanh Pham
// Created on: Jan 2023
// This program converts string to hexidecimal


#include <iostream>
#include <list>
#include <map>
#include <string>


std::list<std::string> stringToHexidecimal(std::string userInput) {
    // This function converts the user's input to hexidecimal

    std::map<char, std::string> dictionary;
    std::list<std::string> hexadecimal;

    dictionary[' '] = "0x20";
    dictionary['!'] = "0x21";
    dictionary['#'] = "0x23";
    dictionary['$'] = "0x24";
    dictionary['%'] = "0x25";
    dictionary['&'] = "0x26";
    dictionary['('] = "0x28";
    dictionary[')'] = "0x29";
    dictionary['*'] = "0x2a";
    dictionary['+'] = "0x2b";
    dictionary[','] = "0x2c";
    dictionary['-'] = "0x2d";
    dictionary['.'] = "0x2e";
    dictionary['/'] = "0x2f";
    dictionary['0'] = "0x30";
    dictionary['1'] = "0x31";
    dictionary['2'] = "0x32";
    dictionary['3'] = "0x33";
    dictionary['4'] = "0x34";
    dictionary['5'] = "0x35";
    dictionary['6'] = "0x36";
    dictionary['7'] = "0x37";
    dictionary['8'] = "0x38";
    dictionary['9'] = "0x39";
    dictionary[':'] = "0x3a";
    dictionary[';'] = "0x3b";
    dictionary['<'] = "0x3c";
    dictionary['='] = "0x3d";
    dictionary['>'] = "0x3e";
    dictionary['?'] = "0x3f";
    dictionary['@'] = "0x40";
    dictionary['A'] = "0x41";
    dictionary['B'] = "0x42";
    dictionary['C'] = "0x43";
    dictionary['D'] = "0x44";
    dictionary['E'] = "0x45";
    dictionary['F'] = "0x46";
    dictionary['G'] = "0x47";
    dictionary['H'] = "0x48";
    dictionary['I'] = "0x49";
    dictionary['J'] = "0x4a";
    dictionary['K'] = "0x4b";
    dictionary['L'] = "0x4c";
    dictionary['M'] = "0x4d";
    dictionary['N'] = "0x4e";
    dictionary['O'] = "0x4f";
    dictionary['P'] = "0x50";
    dictionary['Q'] = "0x51";
    dictionary['R'] = "0x52";
    dictionary['S'] = "0x53";
    dictionary['T'] = "0x54";
    dictionary['U'] = "0x55";
    dictionary['V'] = "0x56";
    dictionary['W'] = "0x57";
    dictionary['X'] = "0x58";
    dictionary['Y'] = "0x59";
    dictionary['Z'] = "0x5a";
    dictionary['['] = "0x5b";
    dictionary[']'] = "0x5d";
    dictionary['^'] = "0x5e";
    dictionary['_'] = "0x5f";
    dictionary['`'] = "0x60";
    dictionary['a'] = "0x61";
    dictionary['b'] = "0x62";
    dictionary['c'] = "0x63";
    dictionary['d'] = "0x64";
    dictionary['e'] = "0x65";
    dictionary['f'] = "0x66";
    dictionary['g'] = "0x67";
    dictionary['h'] = "0x68";
    dictionary['i'] = "0x69";
    dictionary['j'] = "0x6a";
    dictionary['k'] = "0x6b";
    dictionary['l'] = "0x6c";
    dictionary['m'] = "0x6d";
    dictionary['n'] = "0x6e";
    dictionary['o'] = "0x6f";
    dictionary['p'] = "0x70";
    dictionary['q'] = "0x71";
    dictionary['r'] = "0x72";
    dictionary['s'] = "0x73";
    dictionary['t'] = "0x74";
    dictionary['u'] = "0x75";
    dictionary['v'] = "0x76";
    dictionary['w'] = "0x77";
    dictionary['x'] = "0x78";
    dictionary['y'] = "0x79";
    dictionary['z'] = "0x7a";
    dictionary['{'] = "0x7b";
    dictionary['|'] = "0x7c";
    dictionary['}'] = "0x7d";
    dictionary['~'] = "0x7e";

    for (char& unicodes : userInput) {
        if (dictionary.count(unicodes) > 0) {
            hexadecimal.push_back(dictionary[unicodes]);
        } else {
            hexadecimal.push_front("-1");
            break;
        }
    }

    return hexadecimal;
}

int main() {
    // This function takes input and prints output

    std::string userInput;
    std::list<std::string> converted;

    std::cout << "Please enter a string to be translated into hex: ";
    std::cin >> userInput;

    converted = stringToHexidecimal(userInput);

    std::cout << "" << std::endl;

    if (converted.front() == "-1") {
        std::cout << "Invalid Input" << std::endl;
    } else {
        std::cout << userInput << " in hex is: ";
        for (std::string single_hex : converted) {
            std::cout << "'" << single_hex << "'"
                      << ", ";
        }
    }

    std::cout << "\nDone." << std::endl;
}
