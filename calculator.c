#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Enter calculation:\n\n");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    switch(operator)
    {
        case '/': answer = valueOne/valueTwo;
            break;
        case '*': answer = valueOne*valueTwo;
            break;
        case '+': answer = valueOne+valueTwo;
            break;
        case '-': answer = valueOne-valueTwo;
            break;
        case '^': answer = pow(valueOne,valueTwo);
            break;
        case ' ': answer = sqrt(valueTwo);
            break;
        default: goto fail;
    }

    printf("%.9g %c %.9g = %.6g\n\n", valueOne, operator, valueTwo, answer);
    goto exit;

    fail:
        printf("Fail.\n");
    exit:
        system("pause"); // Console applications once finisher return from their main method, the associated console window automatically closes.
        return 0;
}


