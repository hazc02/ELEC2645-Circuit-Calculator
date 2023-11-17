#include <iostream>

int main_menu(){
    int choice;
    std::cout << "----------- Main Menu ------------" << std::endl;
    std::cout << "         1. New Circuit" << std::endl;
    std::cout << "         2. Load Circuit" << std::endl;
    std::cout << "         3. Exit" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}

int sub_menu_1() {
    int option;
    do {
        option = main_menu();
        switch (option) {
            case 1:
                std::cout << "You selected New Circuit" << std::endl;
                // Add code for Option 1 here
                break;
            case 2:
                std::cout << "You selected Load Circuit" << std::endl;
                // Add code for Option 2 here
                break;
            case 3:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }

    } while (option != 3);

    return 0;
}

int main(){
    main_menu();
    return 0;
}
