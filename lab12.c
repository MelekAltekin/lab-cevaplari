#include <stdio.h>
#include <string.h>
 
 int main ()
 /*
// 1. soru

 {
    char isim[15],soyisim[15];

    printf("isim girin:");
    gets(isim);
    printf("soyisim giriniz:");
    gets(soyisim);
    strcat(isim,soyisim);
    puts(isim);
   
    return 0;


 }


// 2.soru
{
   char a[]="5%af8&fg/";
   char b[15];
   printf("öncesi:%s\n",a);
   int uzunluk=strlen(a),n=0;
   for(int i=0;i<uzunluk;i++)
   {
      if( a[i]>= 97 && a[i] <=122)
      {
         b[n]=a[i];
         n++;
      }
      b[n]='\0';
   }
   printf("%s",b[n]);

}

 */

// 3. soru

{
   char string[20];
   printf("string giriniz:");
   scanf("%s",string);
   int a=strlen(string),alf,semb,sayi;

   for(int i=0;i<a;i++)
   {
      if(string[i]>=97 && string[i]<=122 && string[i]>=65 && string[i]<=90) alf++;
      if(string[i]>=33 && string[i]<=47 && string[i]>=58 && string[i]<=64 && string[i]>=91 && string[i]<=96 && string[i]>=123 && string[i]<=126)  semb++;
      if(string[i]>=48 && string[i]<=57)  sayi++;
      
   }
printf("dizide %d tane harf vardır.\n",alf);
printf("dizide %d tane sayı vardır.\n",sayi);
printf("dizide %d tane sembol vardır.\n",semb);

return 0;
}




