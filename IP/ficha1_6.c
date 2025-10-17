#include<stdio.h>

main()
{
    int vbrancos, vnulos, vvalidos, total;
    float pbrancos, pnulos, pvalidos;

    printf("introduza votos brancos:");
    scanf("%d", &vbrancos);
    printf("introduza votos nulos:");
    scanf("%d", &vnulos);
    printf("introduza votos validos:");
    scanf("%d", &vvalidos);

    total = vbrancos + vnulos + vvalidos;

    pbrancos = ((float)vbrancos / total) * 100;
    pnulos = ((float)vnulos / total) * 100;
    pvalidos = ((float)vvalidos / total) * 100;

    printf("\nTotal de votos = %d\n", total);
    printf("Percentagem de votos brancos = %.2f%%\n", pbrancos);
    printf("Percentagem de votos nulos = %.2f%%\n", pnulos);
    printf("Percentagem de votos validos = %.2f%%\n", pvalidos);
}
