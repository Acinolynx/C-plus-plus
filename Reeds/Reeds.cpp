#include<iostream>
#include<windows.h> 
using namespace std;

int main() {

    string namacus,alamat,kode;
    char kategori,menuawal,arr;
    int hari=0,harga=0,pilihan,pilkat,pilkatb,diskon,bayar,kembali;

    string array[2] = {"Pinjam","Beli"};
    cout<<"\t\t\t\t Pilih Menu Dibawah"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t   A. "<<array[0]<<endl;
    cout<<"\t\t\t\t   B. "<<array[1]<<endl;
    cout<<"Pilihan Anda? "; cin>>arr;

        if (arr=='a' || arr=='A'){
            
    cout<<"Sebelum Masuk Ke Laman Utama, Dimohon Untuk Mengisi Data Diri Terlebih Dahulu"<<endl;
    cout<<endl;
    cout<<"Mohon Masukan Nama Anda : ";
    cin>>namacus;
    cout<<"Mohon Masukan Alamat Anda : ";
    cin>>alamat; 
    cout<<endl;
    cout <<"Terimakasih Sudah Mengisi Data Diri Anda" << endl;
    cout<<"Mohon Tunggu Sebentar, Kami Sedang Redirect Anda"<<endl;
    for (int a=5; a>=0; a--){
        cout<<" "<<a;
    }
    _sleep(3000);
    cout<<flush;
    system("CLS");


    do{
    cout<<"\t\t\t\t  Selamat Datang Di Reeds!"<<endl;
    cout<<"\t\t\t\tTempatnya Buku Buku Menarik!"<<endl;
    cout<<endl;

    
    cout<<"Berikut Ini Adalah Buku Buku Yang Sedang Trending Minggu Ini Lhoo!!"<<endl;
    cout<<endl;
    cout<<"1. Sebuah Seni Untuk Bersikap Bodo Amat by Mark Manson"<<endl;
    cout<<"2. Rich Dad Poor Dad by Robert T. Kiyosaki"<<endl;
    cout<<"3. The 5 Level of Leadership by John C. Maxwell"<<endl;
    cout<<"4. Bung Karno: Penyambung Lidah Rakyat Indonesia by Cindy Adams"<<endl;
    cout<<"5. A Wrinkle in Time by Madeleine L'Engle"<<endl;
    cout<<endl;
    cout<<"Jika Kamu Ingin Memesan Buku Diatas Silahkan Masukan No Buku"<<endl;
    cout<<"Atau Kamu Ingin Melihat Lihat Koleksi Kami Yg Lain? (Ketik '0')"<<endl;
    cout<<endl;
    cout<<"Pilihan Anda? ";
    cin>>pilihan;

        switch (pilihan){
            case 1:
            cout<<"Anda Memilih Buku 'Sebuah Seni Untuk Bersikap Bodo Amat by Mark Manson' "<<endl;
            cout<<"Jika Iya, Masukan Kode Ini (AeRh3) : "; cin>>kode;
            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;
            harga=hari*7500;
            cout<<"Harga : "<<harga<<endl;
            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
            cout<<endl;
            _sleep(1000);
            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
            _sleep(1000);
                    harga=hari*7500;
            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
    cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<endl;
    cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<endl;
    cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<endl;
    cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<endl;
    cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<endl;
    cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<endl;
    cout << "\t\t	 ______________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total :"<<"------------------------|"<<harga<<endl;
    cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
    kembali=bayar-harga;
    cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
    cout << "\t\t	 ______________________________________________________________"<<endl;
    cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
    cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
    cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
    cout<<endl;
    cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
    cout<<endl;
            break;

            case 2:
            cout<<"Anda Memilih Buku 'Rich Dad Poor Dad by Robert T. Kiyosaki' "<<endl;
            cout<<"Jika Iya, Masukan Kode Ini (Frt2C) : "; cin>>kode;
            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;
            harga=hari*7500;
            cout<<"Harga : "<<harga<<endl;
            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
            cout<<endl;
            _sleep(1000);
            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
            _sleep(1000);
                    harga=hari*7500;
            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
    cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<endl;
    cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<"   "<<endl;
    cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<"    "<<endl;
    cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<"      "<<endl;
    cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<"      "<<endl;
    cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<"     "<<endl;
    cout << "\t\t	 ______________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total :"<<"------------------------|"<<harga<<"     "<<endl;
    cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
    kembali=bayar-harga;
    cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
    cout << "\t\t	 ______________________________________________________________"<<endl;
    cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
    cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
    cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
    cout<<endl;
    cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
    cout<<endl;        
            break;

            case 3:
            cout<<"Anda Memilih Buku 'The 5 Level of Leadership by John C. Maxwell' "<<endl;
            cout<<"Jika Iya, Masukan Kode Ini (GrFv2) : "; cin>>kode;
            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;
            harga=hari*7500;
            cout<<"Harga : "<<harga<<endl;
            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
            cout<<endl;
            _sleep(1000);
            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
            _sleep(1000);
                    harga=hari*7500;
            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
    cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<" "<<endl;
    cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<"   "<<endl;
    cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<"    "<<endl;
    cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<"      "<<endl;
    cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<"      "<<endl;
    cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<"     "<<endl;
    cout << "\t\t	 ______________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total :"<<"------------------------|"<<harga<<"     "<<endl;
    cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
    kembali=bayar-harga;
    cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
    cout << "\t\t	 ______________________________________________________________"<<endl;
    cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
    cout <<endl;
    cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
    cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
    cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
    cout<<endl;
    cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
    cout<<endl;
            break;

            case 4:
            cout<<"Anda Memilih Buku 'Bung Karno: Penyambung Lidah Rakyat Indonesia by Cindy Adams' "<<endl;
            cout<<"Jika Iya, Masukan Kode Ini (MvLu9) : "; cin>>kode;
            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;
            harga=hari*7500;
            cout<<"Harga : "<<harga<<endl;
            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
            cout<<endl;
            _sleep(1000);
            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
            _sleep(1000);
                    harga=hari*7500;
            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<" "<<endl;
                cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<"   "<<endl;
                cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<"    "<<endl;
                cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<"      "<<endl;
                cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<"      "<<endl;
                cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<"     "<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total :"<<"------------------------|"<<harga<<"     "<<endl;
                cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
                kembali=bayar-harga;
                cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
                cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout<<endl;
                cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
                cout<<endl;
            break;

            case 5:
            cout<<"Anda Memilih Buku 'A Wrinkle in Time by Madeleine L'Engle' "<<endl;
            cout<<"Jika Iya, Masukan Kode Ini (Jhu7b) : "; cin>>kode;
            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;
            harga=hari*7500;
            cout<<"Harga : "<<harga<<endl;
            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
            cout<<endl;
            _sleep(1000);
            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
            _sleep(1000);
                    harga=hari*7500;
            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<" "<<endl;
                cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<"   "<<endl;
                cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<"    "<<endl;
                cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<"      "<<endl;
                cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<"      "<<endl;
                cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<"     "<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total :"<<"------------------------|"<<harga<<"     "<<endl;
                cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
                kembali=bayar-harga;
                cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
                cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout<<endl;
                cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
                cout<<endl;
            break;

            case 0:

            
            cout<<"Berikut Ini Adalah Koleksi Kami!"<<endl;
            cout<<endl;
            cout<<"A. Koleksi Buku Komik"<<endl;
            cout<<"B. Koleksi Buku Pemograman"<<endl;
            cout<<"Pilih Menu Yang Mana? (Masukan Kode Koleksi) "; cin>>kategori;
            cout<<endl;
            
                               
                if (kategori=='a'){
                    cout<<"Berikut Adalah Kumpulan Buku Komik Kami!"<<endl;
                    cout<<"1. JoJo's Bizzares Adventure by Hirohiko Araki"<<endl;
                    cout<<"2. Spy X Family by Tatsuya Endo"<<endl;
                    cout<<"3. Chainsaw Man by Tatsuki Fujimoto"<<endl;
                    cout<<"Jika Kamu Ingin Memesan Buku Diatas Silahkan Masukan No Buku"<<endl;
                    cout<<"Pilihan Anda? "; cin>>pilkat;
                        switch (pilkat){
                            case 1:
                            cout<<"Anda Memilih Buku 'JoJo's Bizzares Adventure by Hirohiko Araki' "<<endl;
                            cout<<"Jika Iya, Masukan Kode Ini (JJB1) : "; cin>>kode;
                            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;
                            harga=hari*3500;
                            cout<<"Harga : "<<harga<<endl;
                            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
                            cout<<endl;
                            _sleep(1000);
                            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
                            _sleep(1000);
                            harga=hari*3500;
                            diskon=harga - (0.1*harga);
                            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<" "<<endl;
                cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<"   "<<endl;
                cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<"    "<<endl;
                cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<"      "<<endl;
                cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<"      "<<endl;
                cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<"     "<<endl;
                cout << "\t\t        | Diskon :"<<"-----------------------|"<<"10%         "<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total :"<<"------------------------|"<<diskon<<"    "<<endl;
                cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
                kembali=bayar-harga;
                cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
                cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout<<endl;
                cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
                cout<<endl;
            break;

            case 2:
                            cout<<"Anda Memilih Buku 'Spy X Family by Tatsuya Endo"<<endl;
                            cout<<"Jika Iya, Masukan Kode Ini (SXF2) : "; cin>>kode;
                            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;
                            harga=hari*3500;
                            cout<<"Harga : "<<harga<<endl;
                            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
                            cout<<endl;
                            _sleep(1000);
                            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
                            _sleep(1000);
                            harga=hari*3500;
                            diskon=harga - (0.2*harga);
                            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<" "<<endl;
                cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<"   "<<endl;
                cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<"    "<<endl;
                cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<"      "<<endl;
                cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<"      "<<endl;
                cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<"     "<<endl;
                cout << "\t\t        | Diskon :"<<"-----------------------|"<<"20%        "<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total :"<<"------------------------|"<<diskon<<"     "<<endl;
                cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
                kembali=bayar-harga;
                cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
                cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout<<endl;
                cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
                cout<<endl;
            break;

            case 3:
                            cout<<"Anda Memilih Buku 'Chainsaw Man by Tatsuki Fujimoto' "<<endl;
                            cout<<"Jika Iya, Masukan Kode Ini (CSM3) : "; cin>>kode;
                            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;
                            harga=hari*3500;
                            cout<<"Harga : "<<harga<<endl;
                            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
                            cout<<endl;
                            _sleep(1000);
                            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
                            _sleep(1000);
                            harga=hari*3500;
                            diskon=harga - (0.3*harga);
                            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<"     "<<endl;
                cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<"       "<<endl;
                cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<"        "<<endl;
                cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<"          "<<endl;
                cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<"          "<<endl;
                cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<"         "<<endl;
                cout << "\t\t        | Diskon :"<<"-----------------------|"<<"30%         "<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total :"<<"------------------------|"<<diskon<<"         "<<endl;
                cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
                kembali=bayar-harga;
                cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
                cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout<<endl;
                cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
                cout<<endl;
            break;
            }
                }else if (kategori=='b'){
                    cout<<"1. Menguasai Pemrograman C++: Panduan Praktis & Jitu by Asfa Solution"<<endl;
                    cout<<"2. Pemrograman C++ Revisi Kedua by Informatika"<<endl;
                    cout<<"Jika Kamu Ingin Memesan Buku Diatas Silahkan Masukan No Buku"<<endl;
                    cout<<"Pilihan Anda? "; cin>>pilkatb;

                        switch (pilkatb){
                            case 1:
                            cout<<"Anda Memilih Buku 'Menguasai Pemograman C++: Panduan Praktis & Jitu by Asfa Solution' "<<endl;
                            cout<<"Jika Iya, Masukan Kode Ini (MPC+) : "; cin>>kode;
                            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;
                            harga=hari*3500;
                            cout<<"Harga : "<<harga<<endl;
                            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
                            cout<<endl;
                            _sleep(1000);
                            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
                            _sleep(1000);
                            harga=hari*4000;
                            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<"     "<<endl;
                cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<"       "<<endl;
                cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<"        "<<endl;
                cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<"          "<<endl;
                cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<"          "<<endl;
                cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<"         "<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total :"<<"------------------------|"<<harga<<"         "<<endl;
                cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
                kembali=bayar-harga;
                cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
                cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout<<endl;
                cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
                cout<<endl;
            break;

                            case 2:
                            cout<<"Anda Memilih Buku 'Pemrograman C++ Revisi Kedua by Informatika' "<<endl;
                            cout<<"Jika Iya, Masukan Kode Ini (PC++) : "; cin>>kode;
                            cout<<"Ingin Meminjam Berapa Hari? "; cin>>hari;              
                            harga=hari*4000;
                            cout<<"Harga : "<<harga<<endl;
                            cout<<"Silahkan Masukan Nominal Pembayaran Anda :"; cin>>bayar;
                            cout<<endl;
                            _sleep(1000);
                            cout<<"Mohon Tunggu Sedang Menghitung......"<<endl;
                            _sleep(1000);
                            system("CLS");
                cout << "\n\t\t                       Reeds - Invoice                  "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	| No. Invoice :"<<"------------------|""#Cnb81353"<<"     "<<endl;
                cout << "\t\t	| Nama Customer:"<<"-----------------|"<<namacus<<"       "<<endl;
                cout << "\t\t	| Alamat"<<"-------------------------|"<<alamat<<"        "<<endl;
                cout << "\t\t	| Kode Buku :"<<"--------------------|"<<kode<<"          "<<endl;
                cout << "\t\t	| Hari :"<<"-------------------------|"<<hari<<"          "<<endl;
                cout << "\t\t	| Harga :"<<"------------------------|"<<harga<<"         "<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout <<"\n";
                cout << "\t\t	| Total :"<<"------------------------|"<<harga<<"         "<<endl;
                cout << "\t\t        | Bayar :"<<"------------------------|"<<bayar<<endl;
                kembali=bayar-harga;
                cout << "\t\t        | Kembalian :"<<"--------------------|"<<kembali<<endl;
                cout << "\t\t	 ______________________________________________________________"<<endl;
                cout << "\t\t	 # Ini Adalah Invoice Anda, Jangan Sampai Hilang #"<<endl;
                cout <<" "<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout << "\t\t	Anda Harus Mengembalikan Buku Pada Waktu Yang Sudah Di Tentukan."<<endl;
                cout << "\t\t        Jika Tidak, Maka Akan Dikenakan Sanksi"<<endl;
                cout << "\t\t	////////////////////////////////////////////////////////////////"<<endl;
                cout<<endl;
                cout<<"Kembali Ke Menu Awal (Y/T)? "; cin>>menuawal;
                cout<<endl;
            break;
                    }            
                }
            }               
        }
        while (menuawal!='t');
        cout<<"Terimakasih....";

    }if (arr=='b'){
        cout<<"Mohon Maaf Menu Belum Tersedia :("<<endl;
    }
    else{

    }
    
    return 0;
}