#include <stdio.h>

int main()
{
    float num;

    scanf("Ingresa un numero decimal para convertir en hexadecimal binario: %f", &num);
    scanf("%f", &num);

    int *hexa;

    hexa = &num;
    printf("El numero %f en hexadecimal binario es: %x\n ", num, *hexa);

    return 0;
}
