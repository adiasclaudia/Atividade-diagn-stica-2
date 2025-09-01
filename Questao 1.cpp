#include <stdio.h>
#include <locale.h>
int main() {
    float x, y, z;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &x, &y, &z);

    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Triangulo Equilatero");
        } else if (x == y || x == z || y == z) {
            printf("Triangulo Isosceles");
        } else {
            printf("Triangulo Escaleno");
        }
    } else {
        printf("Os valores nao formam um triangulo valido.");
    }

    return 0;
}
