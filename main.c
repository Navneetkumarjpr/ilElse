#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    double delta, x1, x2;

    printf("Podaj a ");
    scanf(" %i", &a);

    printf("Podaj b ");
    scanf(" %i", &b);

    printf("Podaj c ");
    scanf(" %i", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (b * (-1) - sqrt(delta)) / (2 * a);
        x2 = (b * (-1) + sqrt(delta)) / (2 * a);
        printf("pierwiasteki to %lf %lf", x1, x2);
    }else if( delta == 0){
            x1 = (b * (-1) ) / (2 * a);
            printf("pierwiastek to %lf", x1);
    } else{
        printf("brak pierwiastków");
    }
    return 0;
}