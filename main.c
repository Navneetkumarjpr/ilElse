#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, delta, x1, x2;

    printf("probram oblicza pierwiastki równania kwadratowego\n");
    printf("podaj wsółczynniki \n");

    printf("Podaj a "); scanf(" %lf", &a);
    printf("Podaj b "); scanf(" %lf", &b);
    printf("Podaj c "); scanf(" %lf", &c);

    if (!a) {
        printf("to nie jest równanie kwadratowe");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta) {
        x1 = (b * (-1) - sqrt(delta)) / (2 * a);
        x2 = (b * (-1) + sqrt(delta)) / (2 * a);
        printf("pierwiasteki to %lf %lf", x1, x2);
        return 0;
    }
    if (!delta) {
        x1 = (b * (-1)) / (2 * a);
        printf("pierwiastek to %lf", x1);
        return 0;
    }

    printf("brak pierwiastków");

    return 0;
}