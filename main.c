#include <stdio.h>
#include <string.h>

struct Telebe {
    char ad[50];
    char soyad[50];
};

int main() {
    struct Telebe telebeler[100];
    int say = 0;              
    int secim;                 
    int id;                      
    int i;                        

    
    while (1) {
        printf("\n=== MENYU ===\n");
        printf("1. Istifadeci elave et\n");
        printf("2. Istifadecini sil\n");
        printf("3. Istifadecileri gosterin\n");
        printf("4. Istifadecini yenileyin\n");
        printf("5. Proqramdan cix\n");
        printf("Seciminizi edin (1-5): ");
        
        scanf("%d", &secim);

        switch (secim) {
            
            case 1: 
                printf("\n--- Yeni Istifadeci ---\n");
                printf("Ad: ");
                scanf("%s", telebeler[say].ad);
                printf("Soyad: ");
                scanf("%s", telebeler[say].soyad);
                say++; 
                printf("Ugurla elave olundu!\n");
                break;

            case 2:
                printf("\n--- Istifadecini Sil ---\n");
                for (i = 0; i < say; i++) {
                    printf("%d. %s %s\n", i + 1, telebeler[i].ad, telebeler[i].soyad);
                }
                
                printf("Silinecek sirani secin: ");
                scanf("%d", &id);

                if (id > 0 && id <= say) {

                    for (i = id - 1; i < say - 1; i++) {
                        telebeler[i] = telebeler[i + 1];
                    }
                    say--;
                    printf("Istifadeci silindi!\n");
                } else {
                    printf("Səhv nömrə!\n");
                }
                break;

            case 3: 
                printf("\n--- Istifadeci Siyahisi ---\n");
                if (say == 0) {
                    printf("Siyahi bosdur.\n");
                } else {
                    for (i = 0; i < say; i++) {
                        printf("%d. %s %s\n", i + 1, telebeler[i].ad, telebeler[i].soyad);
                    }
                }
                break;

            case 4: 
                printf("\n--- Istifadecini Yenile ---\n");
                for (i = 0; i < say; i++) {
                    printf("%d. %s %s\n", i + 1, telebeler[i].ad, telebeler[i].soyad);
                }

                printf("Yenilenecek sirani secin: ");
                scanf("%d", &id);

                if (id > 0 && id <= say) {
                    printf("Yeni Ad: ");
                    scanf("%s", telebeler[id - 1].ad);
                    printf("Yeni Soyad: ");
                    scanf("%s", telebeler[id - 1].soyad);
                    printf("Melumat yenilendi!\n");
                } else {
                    printf("Səhv nömrə!\n");
                }
                break;

            case 5: 
                printf("Proqramdan cixilir...\n");
                return 0;

            default: 
                printf("Yanlis secim etdiniz, yeniden cehd edin.\n");
        }
    }
}
