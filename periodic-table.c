#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Δομή για ένα στοιχείο
typedef struct {
    int atomic_number;
    char name[50];
    char symbol[5];
    char group_block[50];
    double atomic_mass;
} Element;

// Γέμισμα του περιοδικού πίνακα με δεδομένα
void populatePeriodicTable(Element periodic_table[], int *size) {
    periodic_table[0] = (Element){1, "Hydrogen", "H", "Nonmetal", 1.008};
    periodic_table[1] = (Element){2, "Helium", "He", "Noble Gas", 4.0026};
    periodic_table[2] = (Element){3, "Lithium", "Li", "Alkali Metal", 6.94};
    periodic_table[3] = (Element){4, "Beryllium", "Be", "Alkaline Earth Metal", 9.0122};
    periodic_table[4] = (Element){5, "Boron", "B", "Metalloid", 10.81};
    periodic_table[5] = (Element){6, "Carbon", "C", "Nonmetal", 12.011};
    periodic_table[6] = (Element){7, "Nitrogen", "N", "Nonmetal", 14.007};
    periodic_table[7] = (Element){8, "Oxygen", "O", "Nonmetal", 15.999};
    periodic_table[8] = (Element){9, "Fluorine", "F", "Halogen", 18.998};
    periodic_table[9] = (Element){10, "Neon", "Ne", "Noble Gas", 20.180};
    periodic_table[10] = (Element){11, "Sodium", "Na", "Alkali Metal", 22.990};
    periodic_table[11] = (Element){12, "Magnesium", "Mg", "Alkaline Earth Metal", 24.305};
    periodic_table[12] = (Element){13, "Aluminium", "Al", "Post-Transition Metal", 26.982};
    periodic_table[13] = (Element){14, "Silicon", "Si", "Metalloid", 28.085};
    periodic_table[14] = (Element){15, "Phosphorus", "P", "Nonmetal", 30.974};
    periodic_table[15] = (Element){16, "Sulfur", "S", "Nonmetal", 32.06};
    periodic_table[16] = (Element){17, "Chlorine", "Cl", "Halogen", 35.45};
    periodic_table[17] = (Element){18, "Argon", "Ar", "Noble Gas", 39.948};
    periodic_table[18] = (Element){19, "Potassium", "K", "Alkali Metal", 39.098};
    periodic_table[19] = (Element){20, "Calcium", "Ca", "Alkaline Earth Metal", 40.078};
    periodic_table[20] = (Element){21, "Scandium", "Sc", "Transition Metal", 44.956};
    periodic_table[21] = (Element){22, "Titanium", "Ti", "Transition Metal", 47.867};
    periodic_table[22] = (Element){23, "Vanadium", "V", "Transition Metal", 50.942};
    periodic_table[23] = (Element){24, "Chromium", "Cr", "Transition Metal", 51.996};
    periodic_table[24] = (Element){25, "Manganese", "Mn", "Transition Metal", 54.938};
    periodic_table[25] = (Element){26, "Iron", "Fe", "Transition Metal", 55.845};
    periodic_table[26] = (Element){27, "Cobalt", "Co", "Transition Metal", 58.933};
    periodic_table[27] = (Element){28, "Nickel", "Ni", "Transition Metal", 58.693};
    periodic_table[28] = (Element){29, "Copper", "Cu", "Transition Metal", 63.546};
    periodic_table[29] = (Element){30, "Zinc", "Zn", "Transition Metal", 65.38};
    periodic_table[30] = (Element){31, "Gallium", "Ga", "Post-transition Metal", 69.723};
    periodic_table[31] = (Element){32, "Germanium", "Ge", "Metalloid", 72.63};
    periodic_table[32] = (Element){33, "Arsenic", "As", "Metalloid", 74.922};
    periodic_table[33] = (Element){34, "Selenium", "Se", "Nonmetal", 78.971};
    periodic_table[34] = (Element){35, "Bromine", "Br", "Halogen", 79.904};
    periodic_table[35] = (Element){36, "Krypton", "Kr", "Noble Gas", 83.798};
    periodic_table[36] = (Element){37, "Rubidium", "Rb", "Alkali Metal", 85.468};
    periodic_table[37] = (Element){38, "Strontium", "Sr", "Alkaline Earth Metal", 87.62};
    periodic_table[38] = (Element){39, "Yttrium", "Y", "Transition Metal", 88.906};
    periodic_table[39] = (Element){40, "Zirconium", "Zr", "Transition Metal", 91.224};
    periodic_table[40] = (Element){41, "Niobium", "Nb", "Transition Metal", 92.906};
    periodic_table[41] = (Element){42, "Molybdenum", "Mo", "Transition Metal", 95.95};
    periodic_table[42] = (Element){43, "Technetium", "Tc", "Transition Metal", 98};
    periodic_table[43] = (Element){44, "Ruthenium", "Ru", "Transition Metal", 101.07};
    periodic_table[44] = (Element){45, "Rhodium", "Rh", "Transition Metal", 102.91};
    periodic_table[45] = (Element){46, "Palladium", "Pd", "Transition Metal", 106.42};
    periodic_table[46] = (Element){47, "Silver", "Ag", "Transition Metal", 107.87};
    periodic_table[47] = (Element){48, "Cadmium", "Cd", "Transition Metal", 112.41};
    periodic_table[48] = (Element){49, "Indium", "In", "Post-transition Metal", 114.82};
    periodic_table[49] = (Element){50, "Tin", "Sn", "Post-transition Metal", 118.71};
    periodic_table[50] = (Element){51, "Antimony", "Sb", "Metalloid", 121.76};
    periodic_table[51] = (Element){52, "Tellurium", "Te", "Metalloid", 127.6};
    periodic_table[52] = (Element){53, "Iodine", "I", "Halogen", 126.9};
    periodic_table[53] = (Element){54, "Xenon", "Xe", "Noble Gas", 131.29};
    periodic_table[54] = (Element){55, "Cesium", "Cs", "Alkali Metal", 132.91};
    periodic_table[55] = (Element){56, "Barium", "Ba", "Alkaline Earth Metal", 137.33};
    periodic_table[56] = (Element){57, "Lanthanum", "La", "Lanthanide", 138.91};
    periodic_table[57] = (Element){58, "Cerium", "Ce", "Lanthanide", 140.12};
    periodic_table[58] = (Element){59, "Praseodymium", "Pr", "Lanthanide", 140.91};
    periodic_table[59] = (Element){60, "Neodymium", "Nd", "Lanthanide", 144.24};
    periodic_table[60] = (Element){61, "Promethium", "Pm", "Lanthanide", 145};
    periodic_table[61] = (Element){62, "Samarium", "Sm", "Lanthanide", 150.36};
    periodic_table[62] = (Element){63, "Europium", "Eu", "Lanthanide", 151.96};
    periodic_table[63] = (Element){64, "Gadolinium", "Gd", "Lanthanide", 157.25};
    periodic_table[64] = (Element){65, "Terbium", "Tb", "Lanthanide", 158.93};
    periodic_table[65] = (Element){66, "Dysprosium", "Dy", "Lanthanide", 162.5};
    periodic_table[66] = (Element){67, "Holmium", "Ho", "Lanthanide", 164.93};
    periodic_table[67] = (Element){68, "Erbium", "Er", "Lanthanide", 167.26};
    periodic_table[68] = (Element){69, "Thulium", "Tm", "Lanthanide", 168.93};
    periodic_table[69] = (Element){70, "Ytterbium", "Yb", "Lanthanide", 173.05};
    periodic_table[70] = (Element){71, "Lutetium", "Lu", "Lanthanide", 174.97};
    periodic_table[71] = (Element){72, "Hafnium", "Hf", "Transition Metal", 178.49};
    periodic_table[72] = (Element){73, "Tantalum", "Ta", "Transition Metal", 180.95};
    periodic_table[73] = (Element){74, "Tungsten", "W", "Transition Metal", 183.84};
    periodic_table[74] = (Element){75, "Rhenium", "Re", "Transition Metal", 186.21};
    periodic_table[75] = (Element){76, "Osmium", "Os", "Transition Metal", 190.23};
    periodic_table[76] = (Element){77, "Iridium", "Ir", "Transition Metal", 192.22};
    periodic_table[77] = (Element){78, "Platinum", "Pt", "Transition Metal", 195.08};
    periodic_table[78] = (Element){79, "Gold", "Au", "Transition Metal", 196.97};
    periodic_table[79] = (Element){80, "Mercury", "Hg", "Transition Metal", 200.59};
    periodic_table[80] = (Element){81, "Thallium", "Tl", "Post-transition Metal", 204.38};
    periodic_table[81] = (Element){82, "Lead", "Pb", "Post-transition Metal", 207.2};
    periodic_table[82] = (Element){83, "Bismuth", "Bi", "Post-transition Metal", 208.98};
    periodic_table[83] = (Element){84, "Polonium", "Po", "Metalloid", 209};
    periodic_table[84] = (Element){85, "Astatine", "At", "Metalloid", 210};
    periodic_table[85] = (Element){86, "Radon", "Rn", "Noble Gas", 222};
    periodic_table[86] = (Element){87, "Francium", "Fr", "Alkali Metal", 223};
    periodic_table[87] = (Element){88, "Radium", "Ra", "Alkaline Earth Metal", 226};
    periodic_table[88] = (Element){89, "Actinium", "Ac", "Actinide", 227};
    periodic_table[89] = (Element){90, "Thorium", "Th", "Actinide", 232.04};
    periodic_table[90] = (Element){91, "Protactinium", "Pa", "Actinide", 231.04};
    periodic_table[91] = (Element){92, "Uranium", "U", "Actinide", 238.03};
    periodic_table[92] = (Element){93, "Neptunium", "Np", "Actinide", 237};
    periodic_table[93] = (Element){94, "Plutonium", "Pu", "Actinide", 244};
    periodic_table[94] = (Element){95, "Americium", "Am", "Actinide", 243};
    periodic_table[95] = (Element){96, "Curium", "Cm", "Actinide", 247};
    periodic_table[96] = (Element){97, "Berkelium", "Bk", "Actinide", 247};
    periodic_table[97] = (Element){98, "Californium", "Cf", "Actinide", 251};
    periodic_table[98] = (Element){99, "Einsteinium", "Es", "Actinide", 252};
    periodic_table[99] = (Element){100, "Fermium", "Fm", "Actinide", 257};
    periodic_table[100] = (Element){101, "Mendelevium", "Md", "Actinide", 258};
    periodic_table[101] = (Element){102, "Nobelium", "No", "Actinide", 259};
    periodic_table[102] = (Element){103, "Lawrencium", "Lr", "Actinide", 262};
    periodic_table[103] = (Element){104, "Rutherfordium", "Rf", "Transition Metal", 267};
    periodic_table[104] = (Element){105, "Dubnium", "Db", "Transition Metal", 270};
    periodic_table[105] = (Element){106, "Seaborgium", "Sg", "Transition Metal", 271};
    periodic_table[106] = (Element){107, "Bohrium", "Bh", "Transition Metal", 270};
    periodic_table[107] = (Element){108, "Hassium", "Hs", "Transition Metal", 277};
    periodic_table[108] = (Element){109, "Meitnerium", "Mt", "Unknown", 278};
    periodic_table[109] = (Element){110, "Darmstadtium", "Ds", "Unknown", 281};
    periodic_table[110] = (Element){111, "Roentgenium", "Rg", "Unknown", 282};
    periodic_table[111] = (Element){112, "Copernicium", "Cn", "Transition Metal", 285};
    periodic_table[112] = (Element){113, "Nihonium", "Nh", "Unknown", 286};
    periodic_table[113] = (Element){114, "Flerovium", "Fl", "Post-transition Metal", 289};
    periodic_table[114] = (Element){115, "Moscovium", "Mc", "Post-transition Metal", 290};
    periodic_table[115] = (Element){116, "Livermorium", "Lv", "Post-transition Metal", 293};
    periodic_table[116] = (Element){117, "Tennessine", "Ts", "Halogen", 294};
    periodic_table[117] = (Element){118, "Oganesson", "Og", "Noble Gas", 294};

    *size = 118;
}

// Δηλώσεις συναρτήσεων
void searchIndividualElement(Element periodic_table[], int size);
void searchGroupOfElements(Element periodic_table[], int size);
void displayMainMenu(Element periodic_table[], int size);
void clearInputBuffer() {
    while (getchar() != '\n');
}

// Εκτύπωση στοιχείου με padding
void printElementPadded(Element element, int is_found) {
    if (is_found) printf("\033[1;31m");
    printf("%-d:%-s", element.atomic_number, element.symbol);
    if (is_found) printf("\033[0m");
}

// Εκτύπωση των δύο τελευταίων σειρών του περιοδικού πίνακα
void printLastTwoRows(Element periodic_table[], int found_elements[]) {
    for (int i = 0; i<15;i++) {
        printf(" ");
    }
    for(int i = 56; i <= 70; i++) {
        printf(" ");
        printElementPadded(periodic_table[i], found_elements[i]);
    }
    printf("\n");
    for (int i = 0; i<15;i++) {
        printf(" ");
    }
    for(int i = 88; i <= 102; i++) {
        printf(" ");
        printElementPadded(periodic_table[i], found_elements[i]);
    }
    printf("\n");
}


// Εμφάνιση μενού μετά την αναζήτηση
void showPostSearchMenu() {
    int choice;
    Element periodic_table[118];
    int size = 0;
    printf("\nSearch successful! What would you like to do next?\n");
    printf("1. Return to main menu\n");
    printf("2. Terminate application\n");


    printf("Enter your choice: ");
    scanf("%d", &choice);


    switch(choice) {
        case 1:
                printf("Returning to main menu...\n");
                Element periodic_table[118];
                int size = 0;
                populatePeriodicTable(periodic_table, &size);
                displayMainMenu(periodic_table, size);

        break;
        case 2:
            printf("Terminating application...\n");
        exit(0);
        default:
            printf("Invalid choice. Exiting application.\n");
        exit(0);
    }
}

// Έλεγχος εγκυρότητας ομάδας χημικών στοιχείων
int isValidGroupBlock(char *group_block) {
    char *valid_groups[] = {
        "Nonmetal", "Noble Gas", "Alkali Metal", "Alkaline Earth Metal", "Metalloid",
        "Halogen", "Transition Metal", "Post-transition Metal", "Lanthanide", "Actinide", "Unknown"
    };
    for (int i = 0; i < sizeof(valid_groups) / sizeof(valid_groups[0]); i++) {
        if (strcasecmp(group_block, valid_groups[i]) == 0) {
            return 1;
        }
    }
    return 0;
}


// Εκτύπωση περιοδικού πίνακα
void printPeriodicTable(Element periodic_table[], int size, int found_elements[]) {

    printf("\n     \n");

    // Γραμμή 1
    printElementPadded(periodic_table[0], found_elements[0]);
    printf("                                                                                                               ");
    printElementPadded(periodic_table[1], found_elements[1]);
    printf("\n");

    // Γραμμή 2
    printElementPadded(periodic_table[2], found_elements[2]);
    printf(" ");
    printElementPadded(periodic_table[3], found_elements[3]);
    printf("                                                                                     ");
    for(int i = 4; i <= 9; i++) {
        printElementPadded(periodic_table[i], found_elements[i]);
        printf(" ");
    }
    printf("\n");

    // Γραμμή 3
    printElementPadded(periodic_table[10], found_elements[10]);
    printf(" ");
    printElementPadded(periodic_table[11], found_elements[11]);
    printf("                                                                           ");
    for(int i = 12; i <= 17; i++) {
        printf(" ");
        printElementPadded(periodic_table[i], found_elements[i]);

    }
    printf("\n");

    // Γραμμή 4
    printElementPadded(periodic_table[18], found_elements[18]);
    printf(" ");
    printElementPadded(periodic_table[19], found_elements[19]);
    for(int i = 20; i <= 35; i++) {
        printf(" ");
        printElementPadded(periodic_table[i], found_elements[i]);
    }
    printf("\n");

    // Γραμμή 5
    printElementPadded(periodic_table[36], found_elements[36]);
    printf(" ");
    printElementPadded(periodic_table[37], found_elements[37]);
    for(int i = 38; i <= 53; i++) {
        printf(" ");
        printElementPadded(periodic_table[i], found_elements[i]);
    }
    printf("\n");

    // Γραμμή 6
    printElementPadded(periodic_table[54], found_elements[54]);
    printf(" ");
    printElementPadded(periodic_table[55], found_elements[55]);
    printf("     ");
    printElementPadded(periodic_table[71], found_elements[71]);
    for(int i = 72; i <= 85; i++) {
        printf(" ");
        printElementPadded(periodic_table[i], found_elements[i]);
    }
    printf("\n");

    // Γραμμή 7
    printElementPadded(periodic_table[86], found_elements[86]);
    printf(" ");
    printElementPadded(periodic_table[87], found_elements[87]);
    printf("     ");
    printElementPadded(periodic_table[103], found_elements[103]);
    for(int i = 104; i <= 117; i++) {
        printf(" ");
        printElementPadded(periodic_table[i], found_elements[i]);
    }
    printf("\n");

    // Εκτύπωση των δύο τελευταίων σειρών
    printLastTwoRows(periodic_table, found_elements);
}

// Αναζήτηση ομάδας στοιχείων
void searchGroupOfElements(Element periodic_table[], int size) {
    int min_atomic_number, max_atomic_number;
    double min_atomic_mass, max_atomic_mass;
    char group_block[50];
    int found_elements[118] = {0};

    while (1) {
        printf("\n-----------------------------------------\n");
        printf("|     Periodic Table of Elements   |\n");
        printf("-----------------------------------------\n");
        printf("Group of elements search, define criteria:\n");
        printf("1. Minimum atomic number (type '0' to skip): ");
        if (scanf("%d", &min_atomic_number) != 1) {
            clearInputBuffer();
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }
        printf("2. Maximum atomic number (type '0' to skip): ");
        if (scanf("%d", &max_atomic_number) != 1) {
            clearInputBuffer();
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }
        printf("3. Chemical group block (type '0' to skip): ");
        scanf("%s", group_block);
        if (strcmp(group_block, "0") != 0 && !isValidGroupBlock(group_block)) {
            clearInputBuffer();
            printf("Invalid group block. Please enter a valid group block.\n");
            continue;
        }
        printf("4. Minimum atomic mass (type '0' to skip): ");
        if (scanf("%lf", &min_atomic_mass) != 1) {
            clearInputBuffer();
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }
        printf("5. Maximum atomic mass (type '0' to skip): ");
        if (scanf("%lf", &max_atomic_mass) != 1) {
            clearInputBuffer();
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }

        // Έλεγχος αν όλα τα κριτήρια είναι μηδενικά
        if (min_atomic_number == 0 && max_atomic_number == 0 && strcmp(group_block, "0") == 0 && min_atomic_mass == 0 && max_atomic_mass == 0) {
            printf("All criteria cannot be zero. Please enter valid criteria.\n");
            continue;
        }

        break;
    }

    // Αναζήτηση στοιχείων που πληρούν τα κριτήρια
    for (int i = 0; i < size; i++) {
        if ((min_atomic_number == 0 || periodic_table[i].atomic_number >= min_atomic_number) &&
            (max_atomic_number == 0 || periodic_table[i].atomic_number <= max_atomic_number) &&
            (strcmp(group_block, "0") == 0 || strcasecmp(periodic_table[i].group_block, group_block) == 0) &&
            (min_atomic_mass == 0 || periodic_table[i].atomic_mass >= min_atomic_mass) &&
            (max_atomic_mass == 0 || periodic_table[i].atomic_mass <= max_atomic_mass)) {
            found_elements[periodic_table[i].atomic_number - 1] = 1;
        }
    }

    // Εκτύπωση περιοδικού πίνακα με τα βρεθέντα στοιχεία
    printPeriodicTable(periodic_table, size, found_elements);

    // Εμφάνιση μενού μετά την αναζήτηση
    showPostSearchMenu();
}

// Εμφάνιση κύριου μενού
void displayMainMenu(Element periodic_table[], int size) {
    int choice;


    do {
        printf("\n-----------------------------------------\n");
        printf("|        Periodic Table of Elements     |\n");
        printf("-----------------------------------------\n");
        printf("1. Search for individual elements\n");
        printf("2. Search for group of elements\n");
        printf("3. Terminate application\n");
        printf("\nType your selection (1, 2 or 3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                searchIndividualElement(periodic_table, size);
                break;
            case 2:
                searchGroupOfElements(periodic_table, size);
                break;
            case 3:
                printf("Terminating the application. Goodbye!\n");
                return;
            default:
                printf("Invalid selection. Please choose 1, 2, or 3.\n");
                clearInputBuffer();
        }
    } while (choice != 3);
}

// Αναζήτηση μεμονωμένου στοιχείου
void searchIndividualElement(Element periodic_table[], int size) {
    int choice;

    do {
        printf("\n-----------------------------------------\n");
        printf("|     Periodic Table of Elements    |\n");
        printf("-----------------------------------------\n");
        printf("Individual element search, based on:\n");
        printf("1. Atomic number\n");
        printf("2. Name\n");
        printf("3. Symbol\n");
        printf("4. Back to main menu\n");
        printf("\nType your selection (1, 2, 3 or 4): ");
        scanf("%d", &choice);

        if (choice == 1) {
            int atomic_number;
            printf("Enter atomic number: ");
            scanf("%d", &atomic_number);

            int found = 0;
            for (int i = 0; i < size; i++) {
                if (periodic_table[i].atomic_number == atomic_number) {
                    printf("\nElement Found:\n");
                    printf("Atomic Number: %d\n", periodic_table[i].atomic_number);
                    printf("Name: %s\n", periodic_table[i].name);
                    printf("Symbol: %s\n", periodic_table[i].symbol);
                    printf("Group Block: %s\n", periodic_table[i].group_block);
                    printf("Atomic Mass: %.3f\n", periodic_table[i].atomic_mass);
                    found = 1;
                    break;

                }
            }
            if (found == 1) {
                showPostSearchMenu();
            } else {
                printf("No element found with atomic number %d.\n", atomic_number);
                clearInputBuffer();
            }



        } else if (choice == 2) {
            char name[30];
            printf("Enter element name: ");
            scanf("%s", name);

            int found = 0;
            for (int i = 0; i < size; i++) {
                if (strcasecmp(periodic_table[i].name, name) == 0) {
                    printf("\nElement Found:\n");
                    printf("Atomic Number: %d\n", periodic_table[i].atomic_number);
                    printf("Name: %s\n", periodic_table[i].name);
                    printf("Symbol: %s\n", periodic_table[i].symbol);
                    printf("Group Block: %s\n", periodic_table[i].group_block);
                    printf("Atomic Mass: %.3f\n", periodic_table[i].atomic_mass);
                    found = 1;
                    break;
                }
            }
            if (found == 1) {
                showPostSearchMenu();
            }
            else{
                printf("No element found with name '%s'.\n", name);
                clearInputBuffer();
            }

        } else if (choice == 3) {
            char symbol[5];
            printf("Enter element symbol: ");
            scanf("%s", symbol);

            int found = 0;
            for (int i = 0; i < size; i++) {
                if (strcasecmp(periodic_table[i].symbol, symbol) == 0) {
                    printf("\nElement Found:\n");
                    printf("Atomic Number: %d\n", periodic_table[i].atomic_number);
                    printf("Name: %s\n", periodic_table[i].name);
                    printf("Symbol: %s\n", periodic_table[i].symbol);
                    printf("Group Block: %s\n", periodic_table[i].group_block);
                    printf("Atomic Mass: %.3f\n", periodic_table[i].atomic_mass);
                    found = 1;
                    break;
                }
            }
            if (found == 1) {
                showPostSearchMenu();
            } else {
                printf("No element found with symbol '%s'.\n", symbol);
                clearInputBuffer();
            }

        } else if (choice == 4) {
            printf("Returning to main menu...\n");
        } else {
            printf("Invalid selection. Please choose 1, 2, 3, or 4.\n");
            clearInputBuffer();
        }
    } while (choice != 4);
}

// Η main func
int main() {
    system("cls");
    Element periodic_table[118];
    int size = 0;

    populatePeriodicTable(periodic_table, &size);
    displayMainMenu(periodic_table, size);

    return 0;
}
