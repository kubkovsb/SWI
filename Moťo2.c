#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
int Obvod_Obdlznika(int a, int b)
{
   return 2 * (a + b);
}
int Obsah_Obdlznika(int a, int b)
{
   return a * b;
}
void Najdi_Cislo()
{
   int cisla[3];
   printf("Zadajte 3 cisla\n");
   for (int i = 0; i < 3; i++)
   {
      scanf("%d", &cisla[i]);
   }


       if ( cisla[0] > cisla [1] && cisla[0] < cisla [2] || cisla[0] > cisla [2] && cisla[0] < cisla [1])
        printf ("Prostredne cislo je %d",cisla[0]);
       else if ( cisla[1] > cisla [0] && cisla[1] < cisla [2] || cisla[1] > cisla [2] && cisla[1] < cisla [0])
        printf ("Prostredne cislo je %d",cisla[1]);
       else if ( cisla[2] > cisla[1] && cisla[2] < cisla [0] || cisla[2] > cisla [0] && cisla[2] < cisla [1])
        printf ("Prostredne cislo je %d",cisla[2]);

        printf("\n");

}
float Obvod_Kruhu(float r)
{
   return 2 * PI * r;
}
float Obsah_Kruhu(float r)
{
    return PI * r*r;
}
int main()
{
   printf("Obvod obdlznika je %d\n", Obvod_Obdlznika(5, 6));

   int obsah;
   obsah = Obsah_Obdlznika(5, 6);
   printf("Obsah obdlznika je %d\n", obsah);

   Najdi_Cislo();

   printf("Obvod Kruhu je %f \n",Obvod_Kruhu(5));

   printf("Obsah Kruhu ke %f \n",Obsah_Kruhu(5));

}
