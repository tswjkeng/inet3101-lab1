#include <stdio.h>

// Function to print all records
void printRecords() {
    printf("Printed all records.\n");
}

// Function to add records
void addRecords() {
    int number;
    char name[50];   // String for part name
    float size;
    char metric[50]; // String for metric
    float cost;

    printf("\nEnter Part Number:\n");
    scanf("%d", &number);

    printf("\nEnter Part Name:\n");
    scanf("%s", name);

    printf("\nEnter Part Size:\n");
    scanf("%f", &size);

    printf("\nEnter Part Size Metric (ex: lbs, kg, inches):\n");
    scanf("%s", metric);

    printf("\nEnter Part Cost:\n");
    scanf("%f", &cost);

    printf("Part number: %d\n", number);
    printf("Part name: %s\n", name);
    printf("Part size: %.2f\n", size);
    printf("Part metric: %s\n", metric);
    printf("Part cost: %.2f\n", cost);
}

// Function to delete the last record
void deleteRecord() {
    printf("\nRecord deleted\n");
}

// Function to print the number of records
void printNumRecord() {
    printf("\nRecord count\n");
}

// Function to print the database size
void printDataBaseSize() {
    printf("\nDatabase size\n");
}

// The parameter 'print' is an int used as a Boolean (1 means print, 0 means increment).
void printNumChange(int print) {
    static int changes = 0;

    if (print) {
        printf("\nYou have made a change to the database %d times\n", changes);
    }
    else {
        changes++;
        printf("\n%d change(s) made so far\n", changes);
    }
}

// Function to show the number you enter
void passValue(int mySelection) {
    printf("Value entered: %d\n", mySelection);
}

// Function that show you the program is ending and returns 7
int passAndReturn(int sampleValue) {
    printf("Input is 7. Exiting program.\n");
    return 7;
}

int main() {
    int looper = 6;
    int selection;

    while (looper <= 6) {
        printf("\n\nParts Management System\n\n");
        printf("1. Print all records\n");
        printf("2. Add a Record\n");
        printf("3. Delete the last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n\n");

        printf("Please enter your selection (1-7): ");
        scanf("%d", &selection);

        switch (selection) {
            case 1:
                printRecords();
                break;

            case 2:
                addRecords();
                break;

            case 3:
                deleteRecord();
                break;

            case 4:
                printNumRecord();
                break;

            case 5:
                printDataBaseSize();
                break;

            case 6: {
                int printFlag; 
                char user_input[2];  

                printf("\nPrint out the number of changes to the database (Type a)\n");
                printf("or\n");
                printf("\nIncrement the changes to the database by 1 (Type b)\n");

                scanf("%1s", user_input);  

                if (user_input[0] == 'a') {
                    printFlag = 1;  
                }
                else {
                    printFlag = 0; 
                }

                printNumChange(printFlag);
                break;
            }

            case 7:
                printf("\n\nExiting Program...\n\n");
                looper = selection;
                break;

            default:
                printf("\nInvalid selection. Please try again.\n");
                break;
        }
    }

    return 0;
}
