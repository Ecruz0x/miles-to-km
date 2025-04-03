/**
 * Author : A.Naciri
 * Date : 2025/04/03
 * Email : abdelhaqnaciri0@gmail.com
 *
 * The program below is a C code that converts miles to kilometers.
*/

#include <stdio.h>
#include <stdlib.h>
#define KMS_PER_MILE 1.60934

int main(int argc, char **argv){
    double miles, kms;
    printf("Please enter miles : \n");
    scanf("%lf", &miles);
    kms = KMS_PER_MILE * miles;
    printf("%f miles is equal to %f kilometers\n", miles, kms);
}
