#include <stdio.h> // Untuk fungsi input/output seperti scanf dan printf
#include <limits.h> // Untuk konstanta INT_MAX dan INT_MIN

int main() {
    int n; // Variabel untuk menyimpan jumlah baris berikutnya
    int num; // Variabel untuk menyimpan setiap bilangan bulat yang dibaca
    int min_val = INT_MAX; // Inisialisasi nilai terkecil dengan nilai integer maksimum
    int max_val = INT_MIN; // Inisialisasi nilai terbesar dengan nilai integer minimum

    // Membaca input pertama, yang merupakan jumlah baris berikutnya (n)
    // Asumsi input akan selalu ada dan valid sesuai instruksi "n+1"
    scanf("%d", &n);

    // Membaca 'n' baris berikutnya
    for (int i = 0; i < n; i++) {
        scanf("%d", &num); // Membaca setiap bilangan bulat
        
        // Membandingkan dengan nilai terkecil saat ini
        if (num < min_val) {
            min_val = num;
        }
        
        // Membandingkan dengan nilai terbesar saat ini
        if (num > max_val) {
            max_val = num;
        }
    }

    // Menampilkan hasil keluaran sesuai format yang diminta: nilai terkecil dan terbesar
    printf("%d\n", min_val);
    printf("%d\n", max_val);
    
    return 0; // Mengindikasikan bahwa program berjalan dengan sukses
}