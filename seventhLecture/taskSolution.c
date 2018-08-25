#include <stdio.h>

int main()
{

    printf("University system \n");

    int age;
    printf("Koliko imas godina? ");
    scanf("%d", &age);

    if(age < 18){
        printf("Sorry but you can not be a student!!!");
        return 0;
    }

    char ime[10];
    char prezime[15];

    printf("Unesi ime: ");
    scanf("%s", &ime);
    printf("Unesi prezime: ");
    scanf("%s", &prezime);

    printf(" %s %s ,dobrodosao na sistem \n", ime, prezime);

    char odsjek[20];
    printf("Koji odsjek? ");
    scanf("%s", &odsjek);

    int godinaFaksa;
      printf("Na kojoj si godini? ");
        scanf("%d", &godinaFaksa);
    while(godinaFaksa > 3 || godinaFaksa <= 0){
        printf("Unesi ispravnu godinu ");
        scanf("%d", &godinaFaksa);
    }

   int  brojPredmeta, ocjene[brojPredmeta], zbir =0, prosjek;

   printf("Koliko predmeta imas?");
   scanf("%d", &brojPredmeta);

   for(int i = 0; i< brojPredmeta; i++){
       printf("unesi ocjenu za %d premdet: ", i+1);
       scanf("%d", &ocjene[i]);

       zbir+=ocjene[i];
   }

   prosjek = zbir / brojPredmeta;
   printf("Prosjek = %d \n", prosjek);

   if(prosjek < 6){
       printf("Pao si, moras se vise truditi!!!");
   }else{
       if(godinaFaksa == 3 ){
           printf("Cestitam, uspjesno ste zavrsili fakultet!!!");
       }else{
            printf("Cestitam, polozili ste %d godinu i zelim vam srecu na %d godini",godinaFaksa, godinaFaksa+1 );
       }
   }

    return 0;
}
