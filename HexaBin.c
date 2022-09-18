#include <stdio.h>

int main()
{
    float num;
    int *hexa;

    printf("Ingresa un numero decimal para convertir en hexadecimal binario: ");
    scanf("%f", &num);

    hexa = &num;
    
    printf("El numero %f en hexadecimal binario es: %x\n ", num, *hexa);

    return 0;
}
