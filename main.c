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
<<<<<<< HEAD
  // Anggota 1: Kerjakan di sini
   void fungsi_diskon() {
    float harga_awal, diskon_persen, potongan, harga_akhir;

    printf("\n[Fitur 1: Diskon Belanja]\n");
    printf("----------------------------------------\n");

    // Input
    printf("Masukkan harga barang (Rp): ");
    scanf("%f", &harga_awal);

    printf("Masukkan diskon (%%): ");
    scanf("%f", &diskon_persen);

    // Perhitungan
    potongan = harga_awal * (diskon_persen / 100);
    harga_akhir = harga_awal - potongan;

    // Output
    printf("\n===== HASIL PERHITUNGAN =====\n");
    printf("Harga Awal     : Rp %.2f\n", harga_awal);
    printf("Diskon         : %.2f%%\n", diskon_persen);
    printf("Potongan       : Rp %.2f\n", potongan);
    printf("Harga Akhir    : Rp %.2f\n", harga_akhir);
    printf("=============================\n\n");

=======

void fungsi_diskon() {
    // Anggota 1: Kerjakan di sini
    printf("\n[Fitur 1: Diskon Belanja]\n");
    printf("Sedang dalam pengembangan...\n\n");
>>>>>>> origin/Fitur-Khaiz-Kalkulator-Sisa-Uang-Jajan-Harian
    printf("Tekan Enter untuk kembali...");
    getchar(); getchar();
}

void fungsi_split_bill() {
<<<<<<< HEAD
    int jumlah_orang;
    float total_tagihan, hasil_per_orang;

    printf("\n[Fitur 2: Split Bill]\n");
    printf("----------------------------------------\n");

    // Input total tagihan
    printf("Masukkan total tagihan: Rp ");
    scanf("%f", &total_tagihan);

    // Input jumlah orang
    printf("Masukkan jumlah orang: ");
    scanf("%d", &jumlah_orang);

    // Output
    if (jumlah_orang <= 0) {
        printf("\n[Error] Jumlah orang harus lebih dari 0!\n");
    } else {
        hasil_per_orang = total_tagihan / jumlah_orang;

        printf("\n========================================\n");
        printf("Total Tagihan : Rp %.0f\n", total_tagihan);
        printf("Jumlah Orang  : %d\n", jumlah_orang);
        printf("----------------------------------------\n");
        printf("Per Orang     : Rp %.0f\n", hasil_per_orang);
        printf("========================================\n");
    }

    printf("\nTekan Enter untuk kembali...");
=======
    // Anggota 2: Kerjakan di sini
    printf("\n[Fitur 2: Split Bill]\n");
    printf("Sedang dalam pengembangan...\n\n");
    printf("Tekan Enter untuk kembali...");
>>>>>>> origin/Fitur-Khaiz-Kalkulator-Sisa-Uang-Jajan-Harian
    getchar(); getchar();
}

void fungsi_Kalkulator_bunga_tabungan_sederhana() {

    // Anggota 3: Daris Eshan

    float saldoAwal, bungaPersen, totalUang;



    printf("\n[Fitur 3: Kalkulator Bunga Tabungan Sederhana]\n");

    printf("Masukkan saldo awal: ");

    scanf("%f", &saldoAwal);

    printf("Masukkan bunga bulanan (%%): ");

    scanf("%f", &bungaPersen);



    // Rumus: Saldo + (Saldo * bunga/100)

    totalUang = saldoAwal + (saldoAwal * (bungaPersen / 100));



    printf("----------------------------------------\n");

    printf("Total uang setelah ditambah bunga: %.2f\n", totalUang);

    printf("----------------------------------------\n");

    

    printf("\nTekan Enter untuk kembali...");

    getchar(); getchar(); // Menahan tampilan agar tidak langsung balik ke menu

}

void fungsi_sisa_uang_jajan() {
<<<<<<< HEAD
    // Anggota 4: Kerjakan di sini
    printf("\n[Fitur 4: Sisa Uang Jajan]\n");
    printf("Sedang dalam pengembangan...\n\n");
=======
    float uang_jajan, pengeluaran, sisa;

    printf("\n[Fitur 4: Sisa Uang Jajan]\n");

    printf("masukkan total uang jajan harianmu: ");
    scanf("%f", &uang_jajan);

    printf("masukkan total pengeluaranmu hari ini: ");
    scanf("%f", &pengeluaran);

    sisa = uang_jajan - pengeluaran;

    printf("\n----------------------------------------\n");

    if (sisa > 0) {
        printf("sisa uang jajan kamu: Rp %.2f\n", sisa);
        printf("kamu hemat, mantap pisan!\n");
    } else if (sisa == 0) {
        printf("yah kasian deh duitnya habis :(\n");
    } else {
        printf("boros banget deh kamuu, borosnya sampai: Rp %.2f\n", -sisa);
    }

    printf("----------------------------------------\n");
>>>>>>> origin/Fitur-Khaiz-Kalkulator-Sisa-Uang-Jajan-Harian
    printf("Tekan Enter untuk kembali...");
    getchar(); getchar();
}