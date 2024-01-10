#include <stdio.h>
int main() 
/* 
//1.soru
{
    float numbers[8];
    int i=0;
    float toplam=0;
    while(i<8){
        printf("enter a number:");
        scanf("%f",&numbers[i]);
        toplam=toplam+numbers[i];
        i++;
    }
    printf("ortalama:%.2f\n",toplam/8);
    return 0;

}

//2.soru
{
    int dizi[10],i,n=0;
    for(i=0;i<10;i++)
{
    printf("%d. sayiyiyi giriniz:",i+1);
    scanf("%d",&dizi[i]);
    if(dizi[i]==-1) break;
    n++;
}
    for(i=0;i<n;i++)
    {
        printf("%d. elemanin karesi:%d\n",i+1,dizi[i]*dizi[i]);
    }



}

//3.soru
 int sayi,yenisayi=0,a,i=0,dizi[i],n;
 do{
 printf("bir sayı giriniz:");
 scanf("%d",&sayi);
 }while(sayi>100000);

    while(sayi>0)
    {
        a=sayi%10;
        dizi[i]=a;
        sayi=sayi/10;
        i++;
    }
    for(n=0;n<i;n++)
    {
    printf("dizinin %d. elemanı: %d\n",n+1,dizi[n]);
    }

    */

  
{
   int dizi[10],i,n=1;
   for(i=0;i<10;i++)
   {
       printf("%d.elemanı girin:",i+1);
       scanf("%d",&dizi[i]);
   }
   i--;
   for(;i>=0;i--)
   {
       printf("dizinin %d. elemanı:%d\n",n,dizi[i]);
       n++;
   }
   
}
