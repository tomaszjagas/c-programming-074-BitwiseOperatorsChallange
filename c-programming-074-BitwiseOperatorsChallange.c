#include <stdio.h>

int main(void) {
    int num, position, newNum, bitStatus;

    printf("Enter any number: "); // input from user
    scanf("%d", &num);

    printf("Enter n-th bit number to check and set (0-31): "); //input of position which you want to set
    scanf("%d", &position);

    // right shift num, position times and perform bitwise AND with 1
    bitStatus = (num>>position) & 1;
    printf("The %d bit is set to %d\n", position, bitStatus);

    // left shift 1, n times and perform bitwise OR with num
    newNum = (1<<position) | num;
    printf("\nBit set successfully.\n");

    printf("Number before setting %d bit: %d (in decimal)\n", position, num);
    printf("Number after setting %d bit: %d (in decimal)\n", position, newNum);

    return 0;
}