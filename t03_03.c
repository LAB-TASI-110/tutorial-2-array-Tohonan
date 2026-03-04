#include <stdio.h>   // Untuk fungsi input/output seperti scanf, printf
#include <limits.h>  // Untuk konstanta INT_MAX dan INT_MIN
#include <float.h>   // Untuk konstanta DBL_MIN atau DBL_MAX, untuk inisialisasi rata-rata

int main() {
    int n;           // Variabel untuk menyimpan jumlah bilangan bulat yang akan dibaca
    int num;         // Variabel untuk menyimpan setiap bilangan bulat yang dibaca
    int min_val = INT_MAX; // Inisialisasi nilai terkecil dengan nilai integer maksimum
    int max_val = INT_MIN; // Inisialisasi nilai terbesar dengan nilai integer minimum
    
    int first_num = 0;   // Untuk menyimpan angka pertama
    int second_num = 0;  // Untuk menyimpan angka kedua
    int prev_num = 0;    // Untuk menyimpan angka sebelumnya dalam iterasi untuk rata-rata berurutan
    
    double max_consecutive_avg = -DBL_MAX; // Inisialisasi rata-rata tertinggi dengan nilai double terkecil
    
    // Membaca input pertama, yaitu jumlah elemen (n)
    scanf("%d", &n);

    // Membaca 'n' bilangan bulat
    for (int i = 0; i < n; i++) {
        scanf("%d", &num); // Membaca setiap bilangan bulat
        
        // Simpan dua angka pertama untuk perhitungan rata-rata pertama
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
        
        // Untuk mencari rata-rata tertinggi dari pasangan berurutan
        // Kita perlu setidaknya dua angka (current num dan previous num)
        if (i > 0) { // Mulai dari angka kedua (index 1)
            double current_avg = (double)(prev_num + num) / 2.0;
            if (current_avg > max_consecutive_avg) {
                max_consecutive_avg = current_avg;
            }
        }
        
        // Simpan angka saat ini sebagai angka sebelumnya untuk iterasi berikutnya
        prev_num = num;
    }

    // Menampilkan nilai terkecil dan terbesar
    printf("%d\n", min_val); // Output nilai terkecil
    printf("%d\n", max_val); // Output nilai terbesar
    
    // Menghitung dan menampilkan rata-rata dari dua elemen pertama jika ada cukup elemen
    if (n >= 2) {
        double avg_first_two = (double)(first_num + second_num) / 2.0;
        printf("%.2f\n", avg_first_two);
        
        // Menampilkan rata-rata tertinggi dari pasangan berurutan
        printf("%.2f\n", max_consecutive_avg);
    } 
    // Jika n < 2, sesuai klarifikasi "error karena tidak memenuhi kriteria", 
    // baris output rata-rata ini tidak akan ditampilkan.

    return 0; // Mengindikasikan bahwa program berjalan dengan sukses
}