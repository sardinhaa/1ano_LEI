#include <stdio.h>

main()
{
    int iniciokm, finalkm, difkm;
    float preco;
    float precol = 1.3;
    printf("Introduza os km no inicio do dia: ");
    scanf("%d", &iniciokm);
    printf("Introduza os km no final do dia: ");
    scanf("%d", &finalkm);
    difkm = finalkm - iniciokm;
    preco = difkm * precol;
    printf("\nCom o preco de 1.3euros/L\n");
    printf("Diferenca de km: %d km\n", difkm);
    printf("Preco total: %.2feuros\n", preco);
}
