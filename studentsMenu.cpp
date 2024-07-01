void addStudent()
{
    ;
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
