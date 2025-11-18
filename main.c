#include <stdio.h>
#include <string.h>

int main() {
    printf("calculator\n");
    int maxuserinput = 100;
    while (true) {
        char inputnumber0[maxuserinput];
        char operator[maxuserinput];
        char inputnumber1[maxuserinput];

        printf("type in the first number >> ");
        fgets(inputnumber0, maxuserinput, stdin);
        printf("type in the operator >> ");
        fgets(operator, maxuserinput, stdin);
        printf("type in the second number >> ");
        fgets(inputnumber1, maxuserinput, stdin);
        int number0 = inputnumber0 - "0",number1 = inputnumber1 - "0";
        if (operator == "+") {
            int eval = number0+number1;
            printf("%i+%i=%i\n", number0, number1, eval);
        } else if (operator == "-") {
            int eval = number0-number1;
            printf("%i-%i=%i\n", number0, number1, eval);
        } else if (operator == "/") {
            int eval = number0/number1;
            printf("%i/%i=%i\n", number0, number1, eval);
        } else if (operator == "*") {
            int eval = number0*number1;
            printf("%i*%i=%i", number0, number1, eval);
        }
    }
}