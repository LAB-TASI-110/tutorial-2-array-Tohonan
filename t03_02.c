#include <stdio.h>   // Untuk fungsi input/output seperti scanf, printf
#include <limits.h>  // Untuk konstanta INT_MAX dan INT_MIN

int main() {
    int n;           // Variabel untuk menyimpan jumlah bilangan bulat yang akan dibaca
    int num;         // Variabel untuk menyimpan setiap bilangan bulat yang dibaca
    int min_val = INT_MAX; // Inisialisasi nilai terkecil dengan nilai integer maksimum
    int max_val = INT_MIN; // Inisialisasi nilai terbesar dengan nilai integer minimum
    
    int first_num = 0; // Untuk menyimpan angka pertama
    int second_num = 0; // Untuk menyimpan angka kedua

    // Membaca input pertama, yaitu jumlah elemen (n)
    scanf("%d", &n);

    // Membaca 'n' bilangan bulat
    for (int i = 0; i < n; i++) {
        scanf("%d", &num); // Membaca setiap bilangan bulat
        
        // Simpan dua angka pertama untuk perhitungan rata-rata
        if (i == 0) {
            first_num = num;
        } else if (i == 1) {
            second_num = num;
        }
        
        // Membandingkan dengan nilai terkecil saat ini
        if (num < min_val) {
            min_val = num;
        }
        
        // Membandingkan dengan nilai terbesar saat ini
        if (num > max_val) {
            max_val = num;
        }
    }

    // Menampilkan nilai terkecil dan terbesar
    printf("%d\n", min_val); // Output nilai terkecil
    printf("%d\n", max_val); // Output nilai terbesar
    
    // Menghitung dan menampilkan rata-rata dari dua elemen pertama jika ada cukup elemen
    if (n >= 2) {
        double average = (double)(first_num + second_num) / 2.0;
        printf("%.2f\n", average);
    } 
    // Jika n < 2, sesuai klarifikasi "error karena tidak memenuhi kriteria", 
    // baris output rata-rata ini tidak akan ditampilkan.

    return 0; // Mengindikasikan bahwa program berjalan dengan sukses
}