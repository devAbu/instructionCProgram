#include <stdio.h>

int main()
{

    int sem;
    int ocjene, prosjek, rezultat;
    int predmet;

    printf("koliko semestara imas? ");
    scanf("%d", &sem);

    for (int i = 0; i < sem; i++)
    {
        rezultat = 0;
        prosjek = 0;
        printf("koliko predmeta imate u %d semestru? ", i + 1);
        scanf("%d", &predmet);

        for (int a = 0; a < predmet; a++)
        {
            printf("unesti ocjenu za %d predmet ", a + 1);
            scanf("%d", &ocjene);

            prosjek += ocjene;
        }

        rezultat = prosjek / predmet;
        printf("%d\n", rezultat);
    }

    return 0;
}
