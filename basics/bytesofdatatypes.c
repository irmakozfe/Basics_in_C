
#include <stdio.h>

int main() {
    // Print table header
    printf("+-------------------+-----------------+\n");
    printf("| Data Type         | Size (in bytes) |\n");
    printf("+-------------------+-----------------+\n");

    // Print sizes of various data types
    printf("| char              | %-15lu |\n", sizeof(char));
    printf("| short             | %-15lu |\n", sizeof(short));
    printf("| int               | %-15lu |\n", sizeof(int));
    printf("| long              | %-15lu |\n", sizeof(long));
    printf("| long long         | %-15lu |\n", sizeof(long long));
    printf("| float             | %-15lu |\n", sizeof(float));
    printf("| double            | %-15lu |\n", sizeof(double));
    printf("| long double       | %-15lu |\n", sizeof(long double));
    printf("| void* (pointer)   | %-15lu |\n", sizeof(void*));
    printf("+-------------------+-----------------+\n");

    return 0;
}