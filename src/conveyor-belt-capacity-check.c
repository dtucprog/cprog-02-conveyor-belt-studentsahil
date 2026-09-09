#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;
    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);
    printf("%d\n",motorCount);
    printf("How many kg of packages do we expect?\n");
    scanf("%d", &totalPackageWeight);
    printf("%d\n",totalPackageWeight);
    printf("Calculating\n%d<=%d?\n",totalPackageWeight,motorCount*MOTOR_CAPACITY);
    if (totalPackageWeight <= motorCount*MOTOR_CAPACITY) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }
}
