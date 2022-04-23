#include <stdio.h>
int main()

{
    int km;
    float m, cm, f, in;
    printf("Enter the distance in kilometer:");
    scanf("%d", &km);
    m = km * 1000;
    cm = km * 1000 * 100;
    f = km * 3280.84;
    in = km * 39370.08;
    printf("The distance in meters: %f\n", m);
    printf("The distance in centimeters: %f\n", cm);
    printf("The distance in feet: %f\n", f);
    printf("The distance in inches: %f\n", in);

    return 0;
}