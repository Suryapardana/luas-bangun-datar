 
#include <iostream>
using namespace std;

int main(){
    char lagi;
    int i;
    float a,t,p,l,r,C,F,K,R,phi,per,volume,luas;
    phi=3.14;
    per=0.3;
    ulang:
    cout<<"Silahkan Pilih Program 1-4"<<endl;
    cout<<"1. Hitung Luas Lingkaran"<<endl;
    cout<<"2. Hitung Volume Kerucut"<<endl;
    cout<<"3. Konversi Suhu"<<endl;
    cout<<"4. Hitung Luas Persegi Panjang"<<endl;
    cout<<"5. Contoh Looping"<<endl;
    cout<<"6. Keluar"<<endl;
    cout << "Pilih Menu = ";
    cin>>i;
    switch(i){
        case 1:
        cout<<"Masukkan Jari-jari Lingkaran = ";
        cin>>r;
        luas=phi*r*r;
        cout<<"Luas Lingkaran = "<<luas<<" cm2";
        break;
        case 2:
        cout<<"Masukkan jari jari :";
        cin>>r;
        cout<<"Masukkan tinggi :";
        cin>>t;
        volume=per*phi*r*r*t;
        cout<<"Volume Kerucut adalah :"<<volume;
        break;
        case 3:
        cout<<"Masukkan Suhu (Celcius) : ";
        cin>>C;
        cout<<endl;
        cout<<"Hasil Konversi";
        F=C*1.8+32;
        K=C+273;
        R=C*0.8;
        cout<<endl;
        cout<<"Kelvin     : "<<K<<endl<<"Fahrenheit : "<<F<<endl<<"Reamur     : "<<R;
        break;
        case 4:
        cout<< "***Luas Persegi panjang*** \n";
        cout<< 
        cout<< "Masukkan panjang    : ";
        cin>>p;
        cout<< "Masukkan lebar      : ";
        cin>>l;
        luas = p*l;
        cout<< "Luas persegi panjang: "<<luas;
        cout<< "\n\n";
        break;
        case 5:
        while( a < 100 ) {
        cout << "Angga Gans: " << a << endl;
        a++;
        }
        break;
        case 6:
        keluar:
        cout<< "\n Terima kasih, sampai jumpa\n";
        break;
        char lagi;
        cout<<"\n\n\nApakah ingin masuk ke menu lagi? (y/t)";cin>>lagi;
        cout<<endl;
        if(lagi=='y'||lagi=='Y')
        goto ulang;
        default:
              cout<<"yang anda masukkan salah!";
         cout<<endl;  
    }
    return 0;
}
