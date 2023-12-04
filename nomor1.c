#include <stdio.h>
 
float hitungLuasPersegiPanjang(float panjang, float lebar) {
  return panjang * lebar ;
}
 
int main()
{
  printf("Hitung Luas Persegi Panjang \n");
 
  float p, l, luas;
 
  printf("Input panjang persegi: ");
  scanf("%f",&p);
 
  printf("Input lebar persegi: ");
  scanf("%f",&l);
 
  printf ("Luas persegi panjang = %.2f \n",hitungLuasPersegiPanjang(p,l));
 
  return 0;
}
