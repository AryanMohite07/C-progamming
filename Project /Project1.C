#include <stdio.h>
#include <string.h>

#define MAX_PASSENGERS 10

struct Passenger {
    char name[50];
    char destination[50];
    char date[10];
    int seatNumber;
};

struct Passenger passengers[MAX_PASSENGERS];
int passengerCount = 0;

void addPassenger() {
    if (passengerCount < MAX_PASSENGERS) {
        printf("Enter passenger name: ");
        scanf("%s", passengers[passengerCount].name);
        printf("Enter destination: ");
        scanf("%s", passengers[passengerCount].destination);
        printf("Enter date (DD/MM/YYYY): ");
        scanf("%s", passengers[passengerCount].date);
        passengers[passengerCount].seatNumber = passengerCount + 1;
        passengerCount++;
        printf("Passenger added successfully!\n");
    } else {
        printf("Maximum passenger limit reached!\n");
    }
}

void viewPassengers() {
    if (passengerCount == 0) {
        printf("No passengers added!\n");
    } else {
        printf("Passenger List:\n");
        for (int i = 0; i < passengerCount; i++) {
            printf("Name: %s\n", passengers[i].name);
            printf("Destination: %s\n", passengers[i].destination);
            printf("Date: %s\n", passengers[i].date);
            printf("Seat Number: %d\n\n", passengers[i].seatNumber);
        }
    }
}

void bookTicket() {
    if (passengerCount < MAX_PASSENGERS) {
        printf("Enter passenger name: ");
        char name[50];
        scanf("%s", name);
        for (int i = 0; i < passengerCount; i++) {
            if (strcmp(passengers[i].name, name) == 0) {
                printf("Ticket booked successfully!\n");
                return;
            }
        }
        printf("Passenger not found!\n");
    } else {
        printf("Maximum passenger limit reached!\n");
    }
}

void cancelTicket() {
    if (passengerCount == 0) {
        printf("No passengers added!\n");
    } else {
        printf("Enter passenger name: ");
        char name[50];
        scanf("%s", name);
        for (int i = 0; i < passengerCount; i++) {
            if (strcmp(passengers[i].name, name) == 0) {
                passengers[i] = passengers[passengerCount - 1];
                passengerCount--;
                printf("Ticket cancelled successfully!\n");
                return;
            }
        }
        printf("Passenger not found!\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("Airline Reservation System\n");
        printf("1. Add Passenger\n");
        printf("2. View Passengers\n");
        printf("3. Book Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addPassenger();
                break;
            case 2:
                viewPassengers();
                break;
            case 3:
                bookTicket();
                break;
            case 4:
                cancelTicket();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
