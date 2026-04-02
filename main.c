#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // Untuk fungsi pow()

// --- PROTOTIPE FUNGSI ---
void fungsi_diskon();
void fungsi_split_bill();
void fungsi_bunga_tabungan();
void fungsi_sisa_uang_jajan();
void clear_input_buffer();
void clear_screen();

int main() {
    int pilihan;

    while (1) {
        clear_screen();

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
        
        if (scanf("%d", &pilihan) != 1) {
            clear_input_buffer();
            pilihan = -1;
        }
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
                printf("\n✅ Terima kasih! Semoga harimu menyenangkan! 💪\n\n");
                return 0;
            default:
                printf("\n❌ [Error] Pilihan tidak valid!\n");
                printf("Tekan Enter untuk kembali...");
                clear_input_buffer();
                getchar();
        }
    }
}

// --- FUNGSI BANTUAN ---
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// --- FUNGSI 1: Hitung Diskon ---
void fungsi_diskon() {
    float harga_awal, diskon_persen, potongan, harga_akhir;

    printf("\n💰 [Fitur 1: Diskon Belanja]\n");
    printf("----------------------------------------\n");

    printf("Masukkan harga barang (Rp): ");
    if (scanf("%f", &harga_awal) != 1 || harga_awal < 0) {
        printf("❌ Input tidak valid!\n");
        clear_input_buffer();
        printf("Tekan Enter untuk kembali..."); getchar();
        return;
    }

    printf("Masukkan diskon (%%): ");
    if (scanf("%f", &diskon_persen) != 1 || diskon_persen < 0 || diskon_persen > 100) {
        printf("❌ Diskon harus antara 0-100%%!\n");
        clear_input_buffer();
        printf("Tekan Enter untuk kembali..."); getchar();
        return;
    }

    potongan = harga_awal * (diskon_persen / 100);
    harga_akhir = harga_awal - potongan;

    printf("\n🧾 ===== HASIL PERHITUNGAN =====\n");
    printf("Harga Awal     : Rp %.2f\n", harga_awal);
    printf("Diskon         : %.2f%%\n", diskon_persen);
    printf("Potongan       : Rp %.2f\n", potongan);
    printf("💵 Harga Akhir : Rp %.2f\n", harga_akhir);
    printf("=================================\n\n");
    
    printf("Tekan Enter untuk kembali...");
    clear_input_buffer();
    getchar();
}

// --- FUNGSI 2: Split Bill ---
void fungsi_split_bill() {
    int jumlah_orang;
    float total_tagihan, hasil_per_orang;

    printf("\n🍽️ [Fitur 2: Split Bill]\n");
    printf("----------------------------------------\n");

    printf("Masukkan total tagihan: Rp ");
    if (scanf("%f", &total_tagihan) != 1 || total_tagihan < 0) {
        printf("❌ Input tidak valid!\n");
        clear_input_buffer();
        printf("Tekan Enter untuk kembali..."); getchar();
        return;
    }

    printf("Masukkan jumlah orang: ");
    if (scanf("%d", &jumlah_orang) != 1 || jumlah_orang <= 0) {
        printf("❌ Jumlah orang harus lebih dari 0!\n");
        clear_input_buffer();
        printf("Tekan Enter untuk kembali..."); getchar();
        return;
    }

    hasil_per_orang = total_tagihan / jumlah_orang;

    printf("\n🧾 ========================================\n");
    printf("Total Tagihan : Rp %.2f\n", total_tagihan);
    printf("Jumlah Orang  : %d\n", jumlah_orang);
    printf("----------------------------------------\n");
    printf("💵 Per Orang  : Rp %.2f\n", hasil_per_orang);
    printf("========================================\n");

    printf("\nTekan Enter untuk kembali...");
    clear_input_buffer();
    getchar();
}

// --- FUNGSI 3: Bunga Tabungan ---
void fungsi_bunga_tabungan() {
    float saldo_awal, bunga_persen, lama_bulan;
    float bunga_per_bulan, total_bunga, saldo_akhir;

    printf("\n🏦 [Fitur 3: Bunga Tabungan]\n");
    printf("----------------------------------------\n");

    printf("Masukkan saldo awal (Rp): ");
    if (scanf("%f", &saldo_awal) != 1 || saldo_awal < 0) {
        printf("❌ Input tidak valid!\n");
        clear_input_buffer();
        printf("Tekan Enter untuk kembali..."); getchar();
        return;
    }

    printf("Masukkan bunga per tahun (%%): ");
    if (scanf("%f", &bunga_persen) != 1 || bunga_persen < 0) {
        printf("❌ Input bunga tidak valid!\n");
        clear_input_buffer();
        printf("Tekan Enter untuk kembali..."); getchar();
        return;
    }

    printf("Masukkan lama menabung (bulan): ");
    if (scanf("%f", &lama_bulan) != 1 || lama_bulan < 0) {
        printf("❌ Lama menabung tidak valid!\n");
        clear_input_buffer();
        printf("Tekan Enter untuk kembali..."); getchar();
        return;
    }

    // Hitung bunga sederhana per bulan
    bunga_per_bulan = saldo_awal * (bunga_persen / 100) / 12;
    total_bunga = bunga_per_bulan * lama_bulan;
    saldo_akhir = saldo_awal + total_bunga;

    printf("\n📊 ===== PROYEKSI TABUNGAN =====\n");
    printf("Saldo Awal      : Rp %.2f\n", saldo_awal);
    printf("Bunga/Tahun     : %.2f%%\n", bunga_persen);
    printf("Bunga/Bulan     : Rp %.2f\n", bunga_per_bulan);
    printf("Lama Menabung   : %.0f bulan\n", lama_bulan);
    printf("Total Bunga     : Rp %.2f\n", total_bunga);
    printf("💰 Saldo Akhir  : Rp %.2f\n", saldo_akhir);
    printf("=================================\n\n");

    printf("Tekan Enter untuk kembali...");
    clear_input_buffer();
    getchar();
}

// --- FUNGSI 4: Sisa Uang Jajan ---
void fungsi_sisa_uang_jajan() {
    float uang_jajan, pengeluaran, sisa;

    printf("\n🎒 [Fitur 4: Sisa Uang Jajan]\n");
    printf("----------------------------------------\n");

    printf("Masukkan total uang jajan harian (Rp): ");
    if (scanf("%f", &uang_jajan) != 1 || uang_jajan < 0) {
        printf("❌ Input tidak valid!\n");
        clear_input_buffer();
        printf("Tekan Enter untuk kembali..."); getchar();
        return;
    }

    printf("Masukkan total pengeluaran hari ini (Rp): ");
    if (scanf("%f", &pengeluaran) != 1 || pengeluaran < 0) {
        printf("❌ Input tidak valid!\n");
        clear_input_buffer();
        printf("Tekan Enter untuk kembali..."); getchar();
        return;
    }

    sisa = uang_jajan - pengeluaran;

    printf("\n📊 ----------------------------------------\n");
    if (sisa > 0.01) {  // Hindari perbandingan float exact
        printf("✅ Sisa uang jajan: Rp %.2f\n", sisa);
        printf("🎉 Kamu hemat, mantap pisan!\n");
    } else if (sisa >= -0.01 && sisa <= 0.01) {
        printf("😅 Pas banget! Uang habis, tapi nggak kurang :)\n");
    } else {
        printf("⚠️  Kamu boros! Kekurangan: Rp %.2f\n", -sisa);
        printf("💡 Tips: Coba catat pengeluaran biar lebih terkontrol!\n");
    }
    printf("----------------------------------------\n");

    printf("Tekan Enter untuk kembali...");
    clear_input_buffer();
    getchar();
}