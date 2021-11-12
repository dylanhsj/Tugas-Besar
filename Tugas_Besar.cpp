#include <iostream>
using namespace std;

//ALGORITMA KASIR MINI MARKET
/*  Menu Pilihan Customer/Pihak Mini Market (CHECK)
    Customer: member(mendapatkan diskon 5%)/umum
    1. Tabel Input Identitas(PIN)(member)
    2. Tabel Nama, Deskripsi dan harga barang
    3. Input Barang yang ingin dibeli
    4. Tabel Barang Yang dibeli dan harga
    5. Tabel Checkout (Total yang perlu dibeli, input Uang yang digunakan untuk membeli barang, Total Kembalian)

    Pihak Mini Market:
    1. Tabel Input Identitas(PIN)
    2. Tabel menu:  a. Input Barang Baru(Nama barang,Deskripsi barang, Harga barang)
                    - b. Mengubah harga -
*/

//Fungsi PIN
int Pin(){
    int PIN;
    cout<<"Masukan PIN anda\n";cin>>PIN;
    if(PIN==123456){
        cout<<"PIN is Correct"<<endl;
    }
    else
    {cout<<"Maaf PIN yang anda masukan salah, silahkan coba lagi\n"<<Pin()<<endl;}
}

int Menu_Customer(){
    int member_or_not;
    cout<<"1.Member\n2.Non Member\n";cin>>member_or_not;

    if(member_or_not==1){
        cout<<"MEMBER\n";
        Pin();
        cout<<"NEXT";
    }
        else if(member_or_not==2){
            cout<<"WORKS2";
        }
    else
    {cout<<"!ERROR: MENU YANG ANDA PILIH TIDAKLAH VALID, PILIHLAH MENU YANG TERTERA PADA PROGRAM!\n\n"<<Menu_Customer()<<endl;}
}

int Menu_Employee(){
    Pin();
}

//Program utama
int main(){
    int Menu1;
    cout<<"WELLCOME TO SHOPFEE\n";
    cout<<"1.Customer\n2.Shopfee Employee\n";cin>>Menu1;

    if(Menu1==1){
        Menu_Customer();
    }
        else if(Menu1==2){
            Menu_Employee();
        }
    else
    {cout<<"!ERROR: MENU YANG ANDA PILIH TIDAKLAH VALID, PILIHLAH MENU YANG TERTERA PADA PROGRAM!\n\n"<<main()<<endl;}
}
