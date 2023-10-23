#include <stdio.h>
#define Pi 3.14159

int main(){
    float area, perimetro, raio;

    printf("Informe o valor do raio:\n");
    scanf("%f", &raio);

    area = Pi * (raio * raio);
    perimetro = 2 * Pi * raio;

    printf("A area eh igual a %f\n", area);
    printf("O perimetro eh igual a %f", perimetro);
}