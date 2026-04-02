#include <stdio.h>
#include <stdlib.h>

// --- PROTOTIPE FUNGSI ---
void fungsi_diskon();
void fungsi_split_bill();
void fungsi_bunga_tabungan();
void fungsi_sisa_uang_jajan();

int main() {
    int pilihan;

    while (1) {
        system("cls");  // Windows (ganti "clear" untuk Linux/Mac)

        printf("\n");
        printf("========================================\n");
        printf("   ASISTEN KEUANGAN MAHASISWA\n");
        printf("========================================\n");
        printf("\n");
        printf("MENU UTAMA:\n");
        printf("  1. Hitung Diskon Belanja\n");
        printf("  2. Hitung Patungan Makan (Split Bill)\n");
        printf("  3. Hitung Bunga Tabungan\n");
        printf("  4. Hitung Sisa Uang Jajan Harian\n");
        printf("  0. Keluar\n");
        printf("\n");
        printf("----------------------------------------\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);
        printf("----------------------------------------\n");

        switch (pilihan) {
            case 1:
                fungsi_diskon();
                break;
            case 2:
                fungsi_split_bill();
                break;
            case 3:
                fungsi_bunga_tabungan();
                break;
            case 4:
                fungsi_sisa_uang_jajan();
                break;
            case 0:
                printf("\nTerima kasih! Semoga harimu menyenangkan!\n\n");
                exit(0);
            default:
                printf("\n[Error] Pilihan tidak valid!\n");
                printf("Tekan Enter untuk kembali...");
                getchar(); getchar();
        }
    }
    return 0;
}

// --- FUNGSI-FUNGSI (Anggota silakan isi di sini) ---

void fungsi_diskon() {
    // Anggota 1: Kerjakan di sini
    printf("\n[Fitur 1: Diskon Belanja]\n");
    printf("Sedang dalam pengembangan...\n\n");
    printf("Tekan Enter untuk kembali...");
    getchar(); getchar();
}

void fungsi_split_bill() {
    // Anggota 2: Kerjakan di sini
    printf("\n[Fitur 2: Split Bill]\n");
    printf("Sedang dalam pengembangan...\n\n");
    printf("Tekan Enter untuk kembali...");
    getchar(); getchar();
}

void fungsi_Kalkulator_bunga_tabungan_sederhana() {
    // Anggota 3: Kerjakan di sini
    printf("\n[Fitur 3: Bunga Tabungan]\n");
    printf("Sedang dalam pengembangan...\n\n");
    printf("Tekan Enter untuk kembali...");
    getchar(); getchar();
}

void fungsi_sisa_uang_jajan() {
    // Anggota 4: Kerjakan di sini
    printf("\n[Fitur 4: Sisa Uang Jajan]\n");
    printf("Sedang dalam pengembangan...\n\n");
    printf("Tekan Enter untuk kembali...");
    getchar(); getchar();
}