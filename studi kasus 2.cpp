#include <iostream>

using namespace std;

int main()

{
    int nomor,jumlah,porsi,kupon;
    long int harga,nominal,akhir,kembalian;
    float total;
    char yt;
    {ulangi:
        system("CLS");
    cout<<"============================================"<<endl;
    cout<<"Selamat Datang " <<endl;
    cout<<"============================================"<<endl;
    cout<<"         Daftar Menu Makanan"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<" [1] Ayam Geprek "<<endl;
    cout<<" [2] Ayam Goreng "<<endl;
    cout<<" [3] Ayam Bakar "<<endl;
    cout<<"--------------------------------------------"<<endl;


    cout<<"Masukan Pilihan Anda : ";
    cin>>nomor;
    cout<<endl;

    if (nomor==1)
    {
        cout<<"Ayam Geprek "<<endl;
        cout<<"Harga 1 Porsi : Rp. 21.000"<<endl;

        cout<<"Jumlah Porsi : ";
        cin>>porsi;
        cout<<endl;
        harga=21000;
        total=harga*porsi;
        cout<<"Total Harga: Rp." <<total;
        cout<<endl;
         if ((total>=25000) && (total<=999999999))
            {
                kupon=total*25000;
                cout<<endl;
                cout<<"**mendapatkan diskon**"<<endl<<endl;
            }

            else
             {
                 kupon=0;
                 cout<<endl;
                 cout<<"**tidak mendapatkan diskon**"<<endl;
             }
            }

    else if (nomor==2)
    {
        cout<<"Ayam Goreng "<<endl;
        cout<<"Harga 1 Porsi : Rp. 17.000"<<endl;

        cout<<"Jumlah Porsi : ";
        cin>>porsi;
        harga=17000;
        total=harga*porsi;
        cout<<"Total Harga: Rp. " <<total;
        cout<<endl;
        if ((total>=25000) && (total<=999999999))
            {
                kupon=total*25000;
                cout<<endl;
                cout<<"**mendapatkan diskon**"<<endl<<endl;
            }

            else
             {
                 kupon=0;
                 cout<<endl;
                 cout<<"**tidak mendapatkan diskon**"<<endl;
             }
    }

     else if (nomor==3)
    {
        cout<<"Ayam Bakar "<<endl;
        cout<<"Harga 1 Porsi : Rp. 25.000"<<endl;

        cout<<"Jumlah Porsi : ";
        cin>>porsi;
        harga=25000;
        total=harga*porsi;
        cout<<"Total Harga: Rp. " <<total;
        cout<<endl;
        if ((total>=25000) && (total<=999999999))
            {
                kupon=total*25000;
                cout<<endl;
                cout<<"**mendapatkan diskon**"<<endl<<endl;
            }

            else
             {
                 kupon=0;
                 cout<<endl;
                 cout<<"**tidak mendapatkan diskon**"<<endl;
             }

    }

    else
    {
        cout<<"Nomor Yang Anda Pilih Tidak Tersedia"<<endl;
        goto ulangi;
    }

    }

    cout<<endl<<endl;
    cout<<"Masukkan Nominal Pembayaran: Rp.";
    cin>>nominal;
    cout<<endl;


    akhir=nominal;
    kembalian=total-nominal;
    cout<<"Rincian Pembayaran : "<<endl;
    cout<<" - Total yang anda bayarkan : Rp."<<akhir<<endl;
    cout<<" - Kembalian : Rp." <<kembalian<<endl<<endl;

    cout<<"Terima Kasih"<<endl<<endl;

    cout<<"Apakah Anda Ingin Mengitung Pembelian Baru ?";
    cin>>yt;

    while (yt=='Y' || yt=='y')
    {
        goto ulangi;
    }

    while (yt=='T' || yt=='t')
    {
        goto selesai;
    }

    selesai:
    {
        cout<<"Pembayaran Berhenti"<<endl;
        return 0;
    }



}
