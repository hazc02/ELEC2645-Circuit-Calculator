#include <iostream>

// Forward declarations
void new_circuit_menu();
void filter_circuit_menu();
void amplifier_circuit_menu();
void load_circuit_menu();
int main_menu();

void new_circuit_menu() {
    int choice;
    do {
        std::cout << "\n----------- New Circuit Menu ------------\n";
        std::cout << "1. Filters" << std::endl;
        std::cout << "2. Amplifiers" << std::endl;
        std::cout << "3. Power Converters" << std::endl;
        std::cout << "4. Go back to Main Menu" << std::endl;
        std::cout << "----------------------------------------\n" << std::endl;
        std::cout << "Enter your choice: \n";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Filters" << std::endl;
                filter_circuit_menu();
                break;
            case 2:
                std::cout << "Amplifiers" << std::endl;
                amplifier_circuit_menu();
                break;
            case 3:
                std::cout << "Power Converters" << std::endl;
                // Add code for Option 3 here
                break;
            case 4:
                std::cout << "Go Back" << std::endl;
                return; // Return to the previous menu (main menu)
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 4);
}

void filter_circuit_menu() {
    int choice;
    do {
        std::cout << "\n----------- New Filter Circuit ------------" << std::endl;
        std::cout << "\nPlease select a desired filter for calculation below\n" << std::endl;
        std::cout << "1. RC Filter" << std::endl;
        std::cout << "2. RLC Filter" << std::endl;
        std::cout << "3. Band Pass Filters" << std::endl;
        std::cout << "4. Return to Main Menu" << std::endl;
        std::cout << "----------------------------------------\n" << std::endl;
        std::cout << "Enter your choice: \n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "RC Filters" << std::endl;
                // Add code for RC Filters here
                break;
            case 2:
                std::cout << "RLC Filters" << std::endl;
                // Add code for RLC Filters here
                break;
            case 3:
                std::cout << "Band Pass Filters" << std::endl;
                // Add code for Band Pass Filters here
                break;
            case 4:
                std::cout << "Returning to previous menu...." << std::endl;
                return; // Return to the previous menu (new_circuit_menu)
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 4);
}

void amplifier_circuit_menu() {
    int choice;
    do {
        std::cout << "\n----------- New Amplififer Circuit Menu ------------" << std::endl;
        std::cout << "Please select a desired amplifier for calculation below \n";
        std::cout << "1. Non-Inverting Amplifier" << std::endl;
        std::cout << "2. Inverting Amplifier" << std::endl;
        std::cout << "3. Differential Amplifier" << std::endl;
        std::cout << "4. Summing Amplifier" << std::endl;
        std::cout << "5. Go Back" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Enter your choice: \n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Non-Inverting Amplifier" << std::endl;
                // Add code for RC Filters here
                break;
            case 2:
                std::cout << "Inverting Amplifier" << std::endl;
                // Add code for RLC Filters here
                break;
            case 3:
                std::cout << "Differential Amplifier" << std::endl;
                // Add code for Band Pass Filters here
                break;
            case 4:
                std::cout << "Summing Amplifier" << std::endl;
                break; // Return to the previous menu (new_circuit_menu)
            case 5: 
                std::cout << "Returning to previous menu...." << std::endl;
                return;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 5);
}

void load_circuit_menu() {
    std::cout << "\n----------- Load Circuit Menu ------------" << std::endl;
    std::cout << "FILES WILL APPEAR HERE EVENTUALLY " << std::endl;
    std::cout << "----------------------------------------\n" << std::endl;
}

int main_menu() {
    int choice;
    do {
        std::cout << "\n----------- Main Menu ------------\n";
        std::cout << "1. New Circuit" << std::endl;
        std::cout << "2. Load Circuit" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "----------------------------------\n" << std::endl;
        std::cout << "Enter your choice: \n";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "You selected New Circuit" << std::endl;
                new_circuit_menu();
                break;
            case 2:
                std::cout << "You selected Load Circuit" << std::endl;
                load_circuit_menu();
                break;
            case 3:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 3);
    return 0;
}

int main() {
    main_menu();
    return 0;
}