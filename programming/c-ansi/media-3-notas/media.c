#include<stdlib.h>
#include<stdio.h>

#define media(n1, n2, n3) (n1 + n2 + n3) / 3

float notas[3];

void main() {
    for(int i = 0; i < 3; i++) {
        printf("Digite a %da nota: ", i + 1);
        scanf("%f", &notas[i]);
    }
    printf("A media do aluno foi de %.2f\n", media(notas[0], notas[1], notas[2]));
    system("pause");
    return 0;
}
