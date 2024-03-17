**untuk soal no 1**

Program tersebut menggunakan struktur switch-case untuk memungkinkan pengguna memilih jenis konversi yang diinginkan. Berikut adalah penjelasan lebih detail tentang cara kerja program:

Program mulai dengan menampilkan menu pilihan kepada pengguna menggunakan fungsi printf(). Pengguna diminta untuk memilih jenis konversi yang diinginkan.

Pengguna memasukkan pilihan mereka melalui input dari keyboard menggunakan fungsi scanf(), dan nilai pilihan disimpan dalam variabel pilihan.

Program menggunakan struktur switch-case untuk memilih operasi yang sesuai berdasarkan pilihan pengguna.

Jika pengguna memilih:

1 (Desimal ke Biner): Program meminta pengguna memasukkan bilangan desimal yang akan dikonversi. Kemudian, program melakukan konversi dengan membagi bilangan desimal tersebut secara berulang dengan 2 dan mencetak sisa hasil bagi sebagai bilangan biner. Proses ini terus berlanjut hingga bilangan desimal menjadi nol.

2 (Biner ke Desimal): Program meminta pengguna memasukkan bilangan biner yang akan dikonversi. Kemudian, program melakukan konversi dengan menghitung nilai desimal dari bilangan biner tersebut menggunakan metode konversi biner ke desimal.

3 (Desimal ke Octal): Program meminta pengguna memasukkan bilangan desimal yang akan dikonversi. Kemudian, program mencetak bilangan desimal dalam format oktal menggunakan specifier "%o" dari fungsi printf().

4 (Octal ke Desimal): Program meminta pengguna memasukkan bilangan oktal yang akan dikonversi. Kemudian, program mencetak bilangan oktal dalam format desimal.
Jika pengguna memilih pilihan selain 1, 2, 3, atau 4, program akan mencetak pesan bahwa pilihan Anda tidak tepat.

Setelah operasi konversi selesai dilakukan, program akan keluar dan selesai

**untuk soal no 2**

Pertama, program akan menampilkan pesan "Masukkan tahun (hanya bisa 4 digit angka): " menggunakan fungsi printf() untuk meminta pengguna memasukkan tahun.

Pengguna diminta untuk memasukkan tahun melalui fungsi scanf(), dan nilai yang dimasukkan akan disimpan dalam variabel tahun.

Dilakukan validasi untuk memastikan bahwa tahun yang dimasukkan oleh pengguna terdiri dari 4 digit angka. Jika tidak, program akan mencetak pesan kesalahan menggunakan printf() dan mengakhiri program dengan return 1.

Jika tahun yang dimasukkan oleh pengguna memenuhi kriteria, program akan memeriksa apakah tahun tersebut adalah tahun kabisat atau tidak.

Pengecekan tahun kabisat dilakukan dengan menggunakan beberapa kondisi:

Tahun dapat dibagi habis oleh 4 dan tidak habis dibagi 100.
Tahun habis dibagi 400.
Jika tahun memenuhi salah satu kondisi di atas, program akan mencetak pesan bahwa tahun tersebut adalah tahun kabisat.
Jika tidak memenuhi kondisi tersebut, maka akan mencetak pesan bahwa tahun tersebut bukan tahun kabisat.

Program kemudian berakhir dengan mengembalikan nilai 0 menggunakan return 0.

Dengan demikian, program ini memberikan respons sesuai dengan tahun yang dimasukkan pengguna, dan menampilkan apakah tahun tersebut merupakan tahun kabisat atau tidak.












