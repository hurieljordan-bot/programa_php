#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;
    // Tasas de cambio (ejemplo aproximado)
    float usd_a_gtq = 7.80;
    float usd_a_eur = 0.92;
    float eur_a_gtq = 8.45;

    printf("--- Conversor de Monedas (USD, GTQ, EUR) ---\n");
    printf("1. Dolares a Quetzales\n");
    printf("2. Quetzales a Dolares\n");
    printf("3. Dolares a Euros\n");
    printf("4. Euros a Dolares\n");
    printf("5. Quetzales a Euros\n");
    printf("Seleccione una opcion (1-5): ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * usd_a_gtq;
            printf("%.2f USD equivalen a %.2f GTQ\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad / usd_a_gtq;
            printf("%.2f GTQ equivalen a %.2f USD\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad * usd_a_eur;
            printf("%.2f USD equivalen a %.2f EUR\n", cantidad, resultado);
            break;
        case 4:
            resultado = cantidad / usd_a_eur;
            printf("%.2f EUR equivalen a %.2f USD\n", cantidad, resultado);
            break;
        case 5:
            // Quetzales a Euros (vía USD: Q -> $ -> €)
            resultado = (cantidad / usd_a_gtq) * usd_a_eur;
            printf("%.2f GTQ equivalen a %.2f EUR\n", cantidad, resultado);
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}
