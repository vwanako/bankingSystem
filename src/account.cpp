// libraries
#include <iostream>
#include <fstream>
#include <string>

// header files
#include <account.h>

std::string name, password, username, date_of_birth, filename;
std::string address, phone_number, email_address;
std::string job_title, employer_name;
std::fstream account_file;
float income, initial_deposit;

void receive_basic_info()
{
    std::cout << "\nFull name: ";
    std::cin.ignore();
    getline(std::cin, name);

    std::cout << "\nDate of Birth [DD.MM.YYYY]: ";
    std::cin.ignore();
    getline(std::cin, date_of_birth);

    std::cout << "\nUsername: ";
    std::cin.ignore();
    std::cin >> username;

    std::cout << "\nPassword: ";
    std::cin.ignore();
    std::cin >> password;

    std::cout << "\nBasic information received.";
}

void receive_financial_info()
{
    std::cout << "\nJob title: ";
    std::cin.ignore();
    getline(std::cin, job_title);

    std::cout << "\nEmployer: ";
    std::cin.ignore();
    getline(std::cin, employer_name);

    std::cout << "\nIncome (annual): ";
    std::cin.ignore();
    std::cin >> income;

    std::cout << "\nFinancial information received";
}

void receive_contact_info()
{
    std::cout << "\nAddress: ";
    std::cin.ignore();
    getline(std::cin, address);

    std::cout << "\nPhone number: ";
    std::cin.ignore();
    getline(std::cin, phone_number);

    std::cout << "\nEmail address: ";
    std::cin.ignore();
    getline(std::cin, email_address);
}

void create_account_file()
{
    filename = "res/" + username + "_info.txt";
    account_file.open(filename, std::ios::app);
}

void create_account()
{
    std::cout << "";
    receive_basic_info();
    receive_financial_info();
    receive_contact_info();
}