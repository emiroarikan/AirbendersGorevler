#include <iostream>
#include <clocale>
#include <string>

std::string ones(int x) {
    switch (x%10)
    {
    case 0:
        return " ";
        break;
    case 1:
        return "bir";
        break;
    case 2:
        return "iki";
        break;
    case 3:
        return "uc";
        break;
    case 4:
        return "dort";
        break;
    case 5:
        return "bes";
        break;
    case 6:
        return "alti";
        break;
    case 7:
        return "yedi";
        break;
    case 8:
        return "sekiz";
        break;
    case 9:
        return "dokuz";
        break;
    }
    return "";
}

std::string tens(int x) {
    switch ((x%100)/10)
    {
    case 0:
        return " ";
        break;
    case 1:
        return "on";
        break;
    case 2:
        return "yirmi";
        break;
    case 3:
        return "otuz";
        break;
    case 4:
        return "kirk";
        break;
    case 5:
        return "elli";
        break;
    case 6:
        return "altmis";
        break;
    case 7:
        return "yetmis";
        break;
    case 8:
        return "seksen";
        break;
    case 9:
        return "doksan";
        break;
    }
    return "";
}

std::string hundreds(int x) {
    switch (x/100)
    {
    case 0:
        return "";
        break;
    case 1:
        return "yuz";
        break;
    case 2:
        return "ikiyuz";
        break;
    case 3:
        return "ucyuz";
        break;
    case 4:
        return "dortyuz";
        break;
    case 5:
        return "besyuz";
        break;
    case 6:
        return "altiyuz";
        break;
    case 7:
        return "yediyuz";
        break;
    case 8:
        return "sekizyuz";
        break;
    case 9:
        return "dokuzyuz";
        break;
    }
    return "";
}

int main() {
    setlocale(LC_ALL, "Turkish");
    int a;
    std::cin >> a;
    std::cout << hundreds(a) + tens(a) + ones(a) << std::endl;
    return 0;    
}