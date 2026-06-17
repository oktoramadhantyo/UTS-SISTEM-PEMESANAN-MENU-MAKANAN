#include <stdio.h>
#include <stdbool.h>

int main() {
    char Menu[9][20] = {"Nasi Goreng Ayam", "Nasi Goreng Bakso", "Nasi Goreng Spesial", "Mie Ayam Pangsit", "Mie Ayam Bakso", "Mie Ayam Komplit", "Sate", "Es Teh", "Es Jeruk"};
    char Pesanan[10][50]; // Array untuk menyimpan pesanan pengguna
    int pilihan_menu_makanan, pilihan_menu_minuman, jumlah_menu_makanan, jumlah_menu_minuman;
    int tingkat_kepedasan;
    int total_harga = 0;
    int index_pesanan = 0; // Indeks untuk mencatat pesanan
    float harga[9] = {15000, 13000, 17000, 12000, 14000, 16000, 25000, 10000, 15000};
    char Kepedasan[3][40] = {"Pedas", "Sedang", "Tidak Pedas"};
    bool memesan = true;
    char ulang_pesanan;

    // Loop untuk memesan makanan
    while (memesan == true){
    printf("\n\t\t\t+---------------------------------------+\n");
    printf("\t\t\t| SELAMAT DATANG DI RESTORAN KELOMPOK 4 |\n");
    printf("\t\t\t+---------------------------------------+\n");
    printf("Berapa banyak makanan yang ingin Anda pesan?: ");
    scanf("%d", &jumlah_menu_makanan);
    printf("---------------------------------------\n");

    for (int i = 0; i < jumlah_menu_makanan; i++) {
        printf("1. %s = %.1f\n", Menu[0], harga[0]);
        printf("2. %s = %.1f\n", Menu[1], harga[1]);
        printf("3. %s = %.1f\n", Menu[2], harga[2]);
        printf("4. %s = %.1f\n", Menu[3], harga[3]);
        printf("5. %s = %.1f\n", Menu[4], harga[4]);
        printf("6. %s = %.1f\n", Menu[5], harga[5]);
        printf("7. %s = %.1f\n", Menu[6], harga[6]);
        printf("\nPilih makanan ke-%d (1-7): ", i + 1);
        scanf("%d", &pilihan_menu_makanan);
        printf("---------------------------------------\n");
        if (pilihan_menu_makanan >= 1 && pilihan_menu_makanan <= 3) {
            printf("\n 1. Pedas\n");
            printf(" 2. Sedang\n");
            printf(" 3. Tidak Pedas\n");
            printf("Pilih tingkat kepedasan: ");
            scanf("%d", &tingkat_kepedasan);
            printf("---------------------------------------\n");
            sprintf(Pesanan[index_pesanan], "%s (%s)", Menu[pilihan_menu_makanan - 1], Kepedasan[tingkat_kepedasan - 1]);
            total_harga += harga[0];
        
            // Hitung total harga dan simpan pesanan
        } else if (pilihan_menu_makanan == 4) {
            total_harga += harga[3];
            sprintf(Pesanan[index_pesanan], "%s", Menu[3]); // Menyimpan Mie Ayam Pangsit
        } else if (pilihan_menu_makanan == 5) {
            total_harga += harga[4];
            sprintf(Pesanan[index_pesanan], "%s", Menu[4]); // Menyimpan Mie Ayam Bakso
        } else if (pilihan_menu_makanan == 6) {
            total_harga += harga[5];
            sprintf(Pesanan[index_pesanan], "%s", Menu[5]); // Menyimpan Mie Ayam Komplit
        } else if (pilihan_menu_makanan == 7) {
            total_harga += harga[6];
            sprintf(Pesanan[index_pesanan], "%s", Menu[6]); // Menyimpan sate
        }
        index_pesanan++; // Increment index pesanan
    }

    printf("\nBerapa banyak minuman yang ingin Anda pesan?: ");
    scanf("%d", &jumlah_menu_minuman);
    printf("---------------------------------------\n");
    // Loop untuk memesan minuman
    for (int i = 0; i < jumlah_menu_minuman; i++) {
        printf("8. %s = %.1f\n", Menu[7], harga[7]);
        printf("9. %s = %.1f\n", Menu[8], harga[8]);
        printf("\nPilih minuman ke-%d (8-9): ", i + 1); scanf("%d", &pilihan_menu_minuman);
        printf("---------------------------------------\n");
        if (pilihan_menu_minuman == 8) {
            total_harga += harga[7];
            sprintf(Pesanan[index_pesanan], "%s", Menu[7]); // Menyimpan es teh
        } else if (pilihan_menu_minuman == 9) {
            total_harga += harga[8];
            sprintf(Pesanan[index_pesanan], "%s", Menu[8]); // Menyimpan es jeruk
        }
        index_pesanan++; // Increment index pesanan
    }

    // Tampilkan semua pesanan
    printf("\n------------------------------------------\n");
    printf("Pesanan Anda adalah:\n");
    for (int i = 0; i < index_pesanan; i++) {
        printf("%d. %s \n", i + 1, Pesanan[i]);
    }
    printf("---------------------------------------+\n");
    printf("\nTotal Harga: Rp %d\n", total_harga);
    printf("------------------------------------------\n");

    //Tanyakan apakah ingin melakukan pesanan lagi
    printf("Apakah Anda ingin melakukan pesanan lain? (y/n): ");
        scanf(" %c", &ulang_pesanan); // Ambil input untuk keputusan ulang pesanan
        
        if (ulang_pesanan == 'n' || ulang_pesanan == 'N') {
            memesan = false; // Jika jawabannya 'n', keluar dari loop
        }
        else if (ulang_pesanan == 'y'|| ulang_pesanan == 'Y') {
            memesan = true; //jika jawabannya 'y', melanjutkan pesanan
        }
        else {
            memesan = false; //// Jika jawabannya selain 'n' dan 'y', keluar dari loop 
        }

        // Reset pesanan untuk pesanan berikutnya
        total_harga = 0; 
        index_pesanan = 0;
    }
    

    return 0;
}
