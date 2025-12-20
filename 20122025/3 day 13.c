#include <stdio.h>
int main() {
    int marks;
    scanf("%d", &marks);
    if (marks >= 90) {
        printf("A");
    } else if (marks >= 75) {
        printf("B");
    } else if (marks >= 50) {
        printf("C");
    } else {
        printf("Fail");
    }
    return 0;
}
