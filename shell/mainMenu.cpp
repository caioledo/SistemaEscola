#include <iostream>
#include <string>

void error(std::string com)
{
    std::cout << "\nERROR: \"" << com << "\" is not a valid command. To see the command list, enter the command \"help\" or \"?\".\n";
}

#include "studentsMenu.cpp"

void mainMenu()
{
    std::string com = "";

    while (com != "exit")
    {
        std::cout << "MAIN MENU\nEnter your command: ";
        std::cin >> com;

        if (com == "student")
        {
            studentsMenu();
        }
        else if (com == "staff")
        {
            // staffMenu();
        }
        else if (com == "help" || com == "?")
        {
            std::cout << "\nCOMMAND LIST:\n\t\"student\" - Access the students menu\n\t\"staff\" - Access the staff menu\n\t\"help\" or \"?\" - Show command list\n\t\"exit\" - Close application\n";
        }
        else if (com != "exit")
        {
            error(com);
        }

        std::cout << std::endl;
    }

    std::cout << "Application terminated" << std::endl;

    system("pause");
}
