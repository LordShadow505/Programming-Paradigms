#include <stdio.h>

int main()
{
    float num;

    printf("Ingresa un numero decimal para convertir en hexadecimal binario: ");
    scanf("%f", &num);

    int *hexa;

    hexa = &num;
    printf("El numero %f en hexadecimal binario es: %x\n ", num, *hexa);

    return 0;
}
