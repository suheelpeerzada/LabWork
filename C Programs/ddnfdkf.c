#include<stdio.h>
#include<string.h>

int myAtoi(char* s) {
    int lens = strlen(s);
    int i = 0, isnegative = 0;
    double num = 0; // Initialize num to 0
    while (i < lens) {
        if (s[i] == 32)
            i++;
        else if (s[i] == 45) {
            isnegative = 1;
            i++;
        } else if (s[i] >= '0' && s[i] <= '9') { // Correct condition for checking digit
            num = num * 10 + (s[i] - '0');
            i++;
        } else {
            break;
        }
    }
    if (isnegative)
        num *= -1;
    return (int)num; // Convert double to int before returning
}

int main() {
    char s[20] = "   -42";
    printf("%d\n", strlen(s));
    printf("%d", myAtoi(s));

    return 0;
}

