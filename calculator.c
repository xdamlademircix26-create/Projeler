#include <stdio.h>
#include <math.h>

int main() {  
    int secim;
    double sayi1, sayi2, sonuc;

    printf("HESAP VE KARAR MAKINESI\n");
    printf("1 - Toplama yap\n");
    printf("2 - Fark islemi yap\n");
    printf("3 - Carpma yap\n");
    printf("4 - Bolme yap\n");
    printf("5 - us al\n");
    printf("Seciminiz 1, 2, 3, 4 veya 5");
    scanf("%d", &secim);

    if (secim == 1) { 
        printf("Birinci sayiyi giriniz: ");
        scanf("%lf", &sayi1);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%lf", &sayi2);

        sonuc = sayi1 + sayi2;
        printf("Sayilarin toplami : %.2lf\n", sonuc);

    } else if (secim == 2) {  
        printf("Birinci sayiyi giriniz: ");
        scanf("%lf", &sayi1);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%lf", &sayi2);

        sonuc = sayi1 - sayi2;
        printf("Sayilarin farki : %.2lf\n", sonuc);

    } else if (secim == 3) {  
        printf("Birinci sayiyi giriniz; ");
        scanf("%lf", &sayi1);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%lf", &sayi2);

        sonuc = sayi1 * sayi2;
        printf("Sayilarin carpimi : %.2lf\n", sonuc);

    } else if (secim == 4) {  
        printf("Bolunen sayiyi giriniz: ");
        scanf("%lf", &sayi1);
        printf("Bolen sayiyi giriniz: ");
        scanf("%lf", &sayi2);

        sonuc = sayi1 / sayi2;
        printf("Sayilarin bolumu: %.2lf\n", sonuc);

    } else if (secim == 5) {  
        printf("Taban sayisini giriniz: ");
        scanf("%lf", &sayi1);
        printf("Us sayisini giriniz: ");
        scanf("%lf", &sayi2);

        sonuc = pow(sayi1, sayi2);
        printf("%lf uzeri %lf: %.2lf\n", sayi1, sayi2, sonuc);

    } else { 
        printf("Gecersiz secim yaptiniz!\n");
         return 0;
    }

     if (sonuc < 100) { 
        printf("Sonuc 100 den kucuktur!\n");
    } else { 
        printf("Sonuc 100 den buyuktur veya esittir!\n");
    }

    return 0;
}
