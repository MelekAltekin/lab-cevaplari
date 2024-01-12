
/*
//1.soru

#include <stdio.h>

int main(){
    char str[30];
    int n=0;
    printf("bir kelime yazın:");
    gets(str);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'){
            n++;
        }
    }
    printf("kelimede %d tane a harfi var.",n);
}
*/
  //2.soru
#include <stdio.h>
int main()
{
    int say=0,i,say2;
    char kel1[50],kel2[50],dizi[100];
 printf("ilk kelimeyi giriniz:"); scanf("%s",kel1);
 printf("ikinci kelimeyi giriniz:"); scanf("%s",kel2);
    for(int a=0;kel1[a]!='\0';a++) {
        say++;
        say2=say;
        }
    for(i=0;kel2[i]!='\0';i++){
        dizi[i]=kel2[i];
    }

    for(int j=0;say>=0;say--,j++){
        dizi[i+j]=kel1[say-1];
    }

dizi[i+say2]='\0';
printf("yeni kelimeniz:%s",dizi);

 
}