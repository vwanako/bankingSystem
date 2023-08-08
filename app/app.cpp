#include <iostream>

// header files
#include <account.h>
#include <cards.h>
#include <loan.h>
#include <points.h>
#include <transactions.h>
#include <utils.h>
#include <validation.h>

int main()
{
    char user_input;

    while (true)
    {
        std::cout << "\nChoose action:\n1: create account\nq: quit program";
        std::cin >> user_input;

        switch (user_input)
        {
        case '1':
            create_account();
            break;
        case 'q':
            return 0;
        default:
            std::cout << "\nInvalid action. Please try again.";
            break;
        }
    }

    return 0;
}