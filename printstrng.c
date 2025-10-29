#include <stdio.h>

int main() {
    char name[20];   // declare a string variable

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);       // read string input from user

    printf("Your name is: ");
    puts(name);       // display the string

    return 0;
}
