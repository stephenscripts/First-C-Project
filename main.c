#include <stdio.h>

double variable();
int main() {
    printf("Hello, World!\n");
    printf("Forever");

    return 0;
}
double variable(){
    char This_is_an_alphabet = 'a';
    char string[] = "I am a string, officially an array of characters";
    int Number = 1223;
    float IamADecimal = 12.34;
    printf("%d", "%s", This_is_an_alphabet, string);
    double newNumber = Number + IamADecimal;
    return newNumber;
}