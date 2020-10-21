#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de incremento y decrementos \n");

    int value, res;

    value = 25;

    res = value++;

    printf("Resultado: %i\n", res);

    printf("value: %i\n", value);

    value= 25;

    res = ++value;

    printf("Resultado: %i \n", res);

    value= 25;

    res = value--;

    printf("Resultado: %i \n", res);

    value = 25;

    res = --value;

    printf("Resultado: %i \n", res);




    return 0;
}
