#include <stdio.h>

int main() {
    int arr[1];      // array of size 1
    printf("Enter a number: ");
    scanf("%d", &arr[0]);   // store number in array

    if (arr[0] % 2 == 0)
        printf("%d is Even\n", arr[0]);
    else
        printf("%d is Odd\n", arr[0]);

    return 0;
}
