#include <stdio.h>
#include <string.h>


int main() {
    int choice;
    
    char password [20];
    char correctPassword [20] = "goodpassword";

    printf("Welcome to simple-pswmngr!\nPlease enter your main password: ");
    scanf("%s", password);
    // check if entered psw is the correct one
    // correct psw should be stored as a sha256
    if (strcmp(password, correctPassword) == 0) {
        printf("Correct password, welcome in. \n");
    } else {
        printf("Wrong password, goodbye. \n");
    }
    
    return 0;
}