#include <stdio.h>

int main() {
    int choice
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("btech \n");
            break;
case 2:
            printf("aiml\n");
            break;
case 3:
            printf("mechanical\n");
            break;
case 4:
            printf("software\n");
	    printf("hardware\n");
            break;

default:
            printf("Invalid\n");	   
    }
return 0;
}
}
