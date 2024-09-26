//A person wants to go from sealdah to Barasat and wants to check Madhyamgram is there or not.
#include <stdio.h>
#include <string.h>

int main() {
    char station[20];  
    printf("Enter the station name: ");
    fgets(station, 20, stdin);  
    station[strcspn(station, "\n")] = '\0';  

    if (strcmp(station, "Madhyamsodegram") == 0) {  
        printf("Destination found\n");
    } else {
        printf("Destination not found\n");
    }

    return 0;
}
