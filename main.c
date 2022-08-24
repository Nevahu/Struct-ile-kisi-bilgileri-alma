#include <stdio.h>
#include <stdlib.h>

struct person
{
    int age;
    float weight;
    char name[30];
};



int main()
{
   struct person *ptr;
   int i, n;

   printf("Kisi sayisni giriniz: \n");
   scanf("%d", &n);

   ptr = (struct person*) malloc(n* sizeof(struct person));

   for(i=0; i<n; ++i)
   {
       printf("Adinizi ve yasinizi giriniz: ");
       scanf("%s %d", (ptr+i)-> name, (ptr+i)-> age);

   }

   printf("Kisi Bilgileri:\n");

   for(i=0; i<n; i++)
   {
       printf("Ad: %s Yas: %d\n", (ptr+i)-> name, (ptr+i)-> age);

   }

   return 0;

}











