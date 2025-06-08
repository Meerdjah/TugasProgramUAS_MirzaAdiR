#include <stdio.h>

int main() {
    // Suhu awal benda (derajat Celsius)
    const double T0 = 90.0;
    // Suhu lingkungan (derajat Celsius)
    const double Ta = 25.0;
    // Konstanta pendinginan (per menit)
    const double k = 0.05;
    // Ukuran langkah waktu / step size (menit)
    const double h = 1.0;
    // Waktu total simulasi (menit)
    const double total_time = 50.0;

    // 'T' adalah suhu saat ini, yang akan diperbarui setiap iterasi.
    // Dimulai dari suhu awal T0.
    double T = T0;

    // 't' adalah waktu saat ini, digunakan sebagai iterator loop.
    double t;

    printf("--- Simulasi Pendinginan Benda (Metode Euler) ---\n");
    printf("Parameter:\n");
    printf("  - Suhu Awal (T0)      : %.2f C\n", T0);
    printf("  - Suhu Lingkungan (Ta): %.2f C\n", Ta);
    printf("  - Konstanta (k)       : %.3f\n", k);
    printf("  - Langkah Waktu (h)   : %.2f menit\n", h);
    printf("-------------------------------------------------\n");
    printf(" Waktu (menit) |   Suhu (C)\n");
    printf("-------------------------------------------------\n");

    // Loop berjalan dari t = 0 hingga t = total_time,
    // dengan kenaikan sebesar h pada setiap langkahnya.
    for (t = 0; t <= total_time; t = t + h) {
        // Cetak waktu dan suhu pada langkah saat ini
        printf(" %-15.2f |   %-10.4f\n", t, T);

        // APLIKASI RUMUS EULER:
        // T_baru = T_lama + h * (laju_perubahan)
        // di mana laju_perubahan = -k * (T_lama - Ta)
        T = T + h * (-k * (T - Ta));
    }

    printf("-------------------------------------------------\n");
    printf("Simulasi selesai.\n");

    return 0;
}