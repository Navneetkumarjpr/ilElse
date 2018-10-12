#include <stdio.h>
#include <math.h>

void wczytajParametry(double *a, double *b, double *c);
void wyswietlInfo();
double obliczDelte(double a, double b, double c);

int main() {

    double a, b, c, delta, x1, x2;

    wyswietlInfo();
    wczytajParametry(&a, &b, &c);
    delta = obliczDelte(a, b, c);

    if (!a) {
        printf("to nie jest równanie kwadratowe");
        return 0;
    }

    if (delta) {
        x1 = (b * (-1) - sqrt(delta)) / (2 * a);
        x2 = (b * (-1) + sqrt(delta)) / (2 * a);
        printf("Równanie posiada dwa pierwiaski to: \nx1 = %lf \nx2 = %lf", x1, x2);
        return 0;
    }

    if (!delta) {
        x1 = (b * (-1)) / (2 * a);
        printf("Istnieje tylko jeden pierwiastek i wynosi %lf", x1);
        return 0;
    }

    printf("brak pierwiastków");

    return 0;
}

double obliczDelte(double a, double b, double c) {
    double delta;
    delta = b * b - 4 * a * c;
    return delta;
}

void wyswietlInfo() {
    printf("probram oblicza pierwiastki równania kwadratowego\n");
    printf("podaj wsółczynniki \n");
}

void wczytajParametry(double *a, double *b, double *c) {
    printf("Podaj a "); scanf(" %lf", a);
    printf("Podaj b "); scanf(" %lf", b);
    printf("Podaj c "); scanf(" %lf", c);
}