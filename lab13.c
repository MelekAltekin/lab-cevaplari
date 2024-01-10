
#include <stdio.h>
/*

//1.soru
void kare(int k){
    int alan;
    alan = k*k;
    printf("%d", alan);
}

int main()
{
   int kenar;
   int alan;
   printf("kenar değeri girininiz");
   scanf("%d", &kenar);
    kare(kenar);
  

    return 0;

}

//2.soru

void ort(int a, int b, int c, int d, int e){
    float k = a+b+c+d+e;
    printf("%.2f",k/5);
}
int main()
{
   int b,c,d,e,f;
  printf("1.değeri girin:");
  scanf("%d",&b);
  printf("2.değeri girin:");
  scanf("%d",&c);
  printf("3.değeri girin:");
  scanf("%d",&d);
  printf("4.değeri girin:");
  scanf("%d",&e);
  printf("5.değeri girin:");
  scanf("%d",&f);
  ort(b,c,d,e,f);

return 0
}
*/

/*
//3.soru

void kontrol(int sayi){
    if(sayi%2==0)
    {
        printf("girilen sayı çifttir.\n");
    }
    else{
        printf("girilen sayı tektir.\n");
    }
}
int main()
{   
    int a;
    printf("bir sayı giriniz:");
    scanf("%d",&a);
    kontrol(a);

return 0;
}
*/
/*

//4.soru
 
void asal(int sayi){
    int a=0;
    for(int i=2;i<sayi;i++)
    {
        if(sayi%i==0) 
        {
           a=1;
        }
        
    }
    if(a==0){
        printf("sayı asaldır.\n");
    }
}

void armstrong(int bela){
    int z=1,y,toplam=0,safe ;
    safe=bela;
    while(bela>0)
    {
        int x=bela%10;
        bela=bela/10;
        for(int k=1;k=x;k++){
            y=z*x;
        }
        toplam=toplam+y;
    }
    if(safe==toplam) 
    {
        printf("sayı armstrong sayısıdır.\n\n");
    }
    else 
    {
        printf("sayı armstrong sayısı değildir.\n");
    }

}

int main()
{   
    int num;
    printf("bir sayı girin:\n");
    scanf("%d",&num);
    asal(num);
    armstrong(num);
    return 0;
}

*/


void hop(int cumle, int boyut){
    int m=0,i;
    char dizi[30];
    for(i=0;i<boyut;i++)
    {
        if(dizi[i]=='32')
        {
            m++;
        }
    }
    printf("cümledeki kelime sayısı:%d",m+1);

}
int main ()
{
    char dizi[30];
    printf("bir cümle giriniz.");
    scanf("%s",dizi);
    hop(dizi,30);




}

