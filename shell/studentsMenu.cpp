void addStudent()
{
    std::string name, gender;
    int id, age, year;

    std::cout << "\nEnter the name of the new student: ";
    std::cin >> name;

    enterId:
    std::cout << "\nEnter the id of the new student: ";
    try
    {
        std::cin >> id;
    }
    catch(const std::exception& e)
    {
        std::cout << "ERROR: Invalid input, please enter integer numbers only\n";
        goto enterId;
    }

    enterAge:
    std::cout << "\nEnter the age of the new student: ";
    try
    {
        std::cin >> age;
    }
    catch(const std::exception& e)
    {
        std::cout << "ERROR: Invalid input, please enter integer numbers only\n";
        goto enterAge;
    }

    std::cout << "\nEnter the gender of the new student: ";
    std::cin >> gender;

    enterYear:
    std::cout << "\nEnter the current school year of the new student: ";
    try
    {
        std::cin >> year;
    }
    catch(const std::exception& e)
    {
        std::cout << "ERROR: Invalid input, please enter integer numbers only\n";
        goto enterYear;
    }
}

void studentsMenu()
{
    std::string com = "";

    while (com != "exit")
    {
        std::cout << std::endl;

        std::cout << "STUDENTS MENU\nEnter your command: ";
        std::cin >> com;

        if (com == "add")
        {
            addStudent();
        }
        else if (com == "edit")
        {
            ;
        }
        else if (com == "del")
        {
            ;
        }
        else if (com == "help" || com == "?")
        {
            std::cout << "\nCOMMAND LIST:\n\t\"add\" - Add a new student to the databank\n\t\"edit\" - Edit data from a student\n\t\"del\" - Delete a student from the databank\n\t\"help\" or \"?\" - Show command list\n\t\"exit\" - Go back to the main menu\n";
        }
        else if (com != "exit")
        {
            error(com);
        }
    }
}
