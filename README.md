# Simulasi Pendinginan Benda (Hukum Pendinginan Newton)

## Metode Euler

### Tujuan Program:
Mensimulasikan dan menghitung penurunan suhu sebuah benda dari waktu ke waktu berdasarkan Hukum Pendinginan Newton menggunakan Metode Euler.

### Penjelasan Logika Program (dalam fungsi `main`):

* **Parameter Input (Konstanta):**
    * `T0` = Suhu awal benda (dalam derajat Celsius)
    * `Ta` = Suhu lingkungan (dalam derajat Celsius)
    * `k` = Konstanta laju pendinginan (per menit)
    * `h` = Ukuran langkah waktu (dalam menit)
    * `total_time` = Durasi total simulasi (dalam menit)

* **Langkah Perhitungan:**
    1.  Inisialisasi variabel suhu saat ini, `T`, dengan nilai `T0`.
    2.  Melakukan iterasi dalam sebuah `for loop` dari waktu `t = 0` hingga `t = total_time`, dengan kenaikan sebesar `h` pada setiap langkah.
    3.  Pada setiap iterasi, suhu baru dihitung berdasarkan suhu sebelumnya menggunakan **rumus Metode Euler** yang diadaptasi untuk Hukum Pendinginan Newton:
        $$T_{i+1} = T_i + h \cdot (-k(T_i - T_a))$$
    4.  Nilai waktu (`t`) dan suhu (`T`) yang telah dihitung dicetak ke layar untuk membentuk tabel hasil.

* **Output:**
    * Program akan menampilkan tabel hasil simulasi ke konsol. Tabel ini berisi dua kolom: **Waktu (menit)** dan **Suhu (°C)**, yang menunjukkan evolusi suhu benda dari awal hingga akhir simulasi.
