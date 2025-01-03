#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[4][4] = {0}; // 4x4 park alanı, başlangıçta boş
    char B[4][5] = {0}; // 4x5 park alanı
    char C[5][6] = {0}; // 5x6 park alanı
    int secim;

    while (1) {
        printf("\n1-Arac Girisi:\n2-Arac Cikisi:\n3-Listeleme:\n4-Cikis:\n");
        printf("Seciminizi giriniz: ");
        scanf("%d", &secim);

        switch (secim) {
        case 1: {
            char parkAlani;
            int satir, sutun;
            char aracTipi;

            getchar(); // \n temizleniyor
            printf("Hangi park alanina gireceksiniz (A/B/C): ");
            scanf("%c", &parkAlani);

            printf("Hangi alana park edeceksiniz (örn: 3x2): ");
            scanf("%d %d", &satir, &sutun);

            getchar(); // \n temizleniyor
            printf("Arac tipini giriniz (örn: A, B): ");
            scanf("%c", &aracTipi);

            if (parkAlani == 'A' && satir < 4 && sutun < 4) {
                A[satir][sutun] = aracTipi;
            } else if (parkAlani == 'B' && satir < 4 && sutun < 5) {
                B[satir][sutun] = aracTipi;
            } else if (parkAlani == 'C' && satir < 5 && sutun < 6) {
                C[satir][sutun] = aracTipi;
            } else {
                printf("Gecersiz alan veya koordinat!\n");
            }
            break;
        }
        case 2: {
            char parkAlani;
            int satir, sutun;

            getchar(); // \n temizleniyor
            printf("Hangi park alanindan cikacaksiniz (A/B/C): ");
            scanf("%c", &parkAlani);

            printf("Hangi alandan cikacaksiniz (örn: 3x2): ");
            scanf("%d %d", &satir, &sutun);

            if (parkAlani == 'A' && satir < 4 && sutun < 4) {
                A[satir][sutun] = ' ';
            } else if (parkAlani == 'B' && satir < 4 && sutun < 5) {
                B[satir][sutun] = ' ';
            } else if (parkAlani == 'C' && satir < 5 && sutun < 6) {
                C[satir][sutun] = ' ';
            } else {
                printf("Gecersiz alan veya koordinat!\n");
            }
            break;
        }
        case 3:
            printf("\nPark Alani A:\n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    printf("%c ", A[i][j]);
                }
                printf("\n");
            }

            printf("\nPark Alani B:\n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++) {
                    printf("%c ", B[i][j]);
                }
                printf("\n");
            }

            printf("\nPark Alani C:\n");
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 6; j++) {
                    printf("%c ", C[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            printf("Cikis Yapiliyor...\n");
            return 0;

        default:
            printf("Gecersiz secim!\n");
            break;
        }
    }

    return 0;
}
