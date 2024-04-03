#include <stdio.h>
#include <math.h>

double square_root(double x) {
    if (x < 0) {
        printf("Input negativo! Il programma termina.\n");
        exit(1);
    }

    double guess = x / 2.0; // Inizia con una stima ragionevole

    while (1) {
        double new_guess = (guess + x / guess) / 2.0; // Formula di Erone
        if (fabs(new_guess - guess) < 0.00001) // Convergenza raggiunta
            return new_guess;
        guess = new_guess;
    }
}

int main() {
    double number;

    while (1) {
        printf("Inserisci un numero: ");
        scanf("%lf", &number);

        if (number < 0) {
            printf("Numero negativo inserito. Il programma termina.\n");
            break;
        }

        double result = square_root(number);

        printf("La radice quadrata di %.2f è approssimativamente %.6f\n", number, result);
    }

    return 0;
}
