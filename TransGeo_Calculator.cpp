#include <bits/stdc++.h>
using namespace std;
bool lanjut = true;
bool bkembali = true;
char opsi;
int x,y,a,b,temp,bx,by,k;

void clear()
{
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#elif defined (__APPLE__)
    system("clear");
#endif
}

int lanjutkan() {
    cout<<"Apakah anda ingin melanjutkan?"<<endl;
    cout<<"(1) Ya"<<endl;
    cout<<"(2) Tidak"<<endl;
    cout<<"Masukkan opsi angka:";
    cin>>opsi;
    switch (opsi) {
    case '1':
        clear();
        lanjut = true;
        break;
    case '2':
        cout<<endl;
        lanjut = false;
        break;
    default:
        cout << "Anda memasukkan opsi angka yang salah, coba lagi"<<endl<<endl;
        break;
    }
    return 0;
}
int translasit() {
    cout<<"titik (x,y) ditranslasi oleh titik (a,b)"<<endl;
    cout<<"masukkan nilai x:";
    cin>>x;
    cout<<"masukkan nilai y:";
    cin>>y;
    cout<<"masukkan nilai a:";
    cin>>a;
    cout<<"masukkan nilai b:";
    cin>>b;
    cout<<"koordinat titik bayangannya adalah ("<<x+a<<","<<y+b<<")"<<endl<<endl;
    lanjut = false;
    return 0;
}

int refleksit() {
    while(lanjut) {
        cout<<"koordinat (x,y) dicerminkan terhadap..."<<endl;
        cout<<"(1) Sumbu X"<<endl;
        cout<<"(2) Sumbu Y"<<endl;
        cout<<"(3) Garis Y=X"<<endl;
        cout<<"(4) Garis Y=-X"<<endl;
        cout<<"(5) Garis X=k"<<endl;
        cout<<"(6) Garis Y=k"<<endl;
        cout<<"masukkan nilai x:";
        cin>>x;
        cout<<"masukkan nilai y:";
        cin>>y;
        cout<<"Masukkan opsi angka:";
        cin>>opsi;
        switch (opsi) {
        case '1':
            cout<<"Anda memilih sumbu X"<<endl;
            by=-y;
            break;
        case '2':
            cout<<"Anda memilih sumbu Y"<<endl;
            x*=-1;
            break;
        case '3':
            cout<<"Anda memilih garis Y=X"<<endl;
            temp =x;
            x=y;
            y=temp;
            break;
        case '4':
            cout<<"Anda memilih garis Y=-X"<<endl;
            temp =x;
            x=-y;
            y=-temp;
            break;
        case '5':
            cout<<"Anda memilih garis X=k"<<endl;
            cout<<"masukkan nilai k:";
            cin>>k;
            x= 2*k-x;
            break;
        case '6':
            cout<<"Anda memilih garis Y=k"<<endl;
            cout<<"masukkan nilai k:";
            cin>>k;
            y= 2*k-y;
            break;
        default:
            cout << "Anda memasukkan opsi angka yang salah, coba lagi"<<endl<<endl;
            break;
        }
    }
    cout<<"koordinat titik bayangannya adalah ("<<x<<","<<y<<")"<<endl<<endl;
    lanjut = false;
    return 0;
}

int rotasit() {
    while(lanjut) {
        cout<<"koordinat (x,y) dirotasi... terhadap titik (a,b)"<<endl;
        cout<<"(1) 90' berlawanan arah jarum jam"<<endl;
        cout<<"(2) 180'"<<endl;
        cout<<"(3) 90' searah jarum jam"<<endl;
        cout<<"masukkan nilai x:";
        cin>>x;
        cout<<"masukkan nilai y:";
        cin>>y;
        cout<<"masukkan nilai a:";
        cin>>a;
        cout<<"masukkan nilai b:";
        cin>>b;
        cout<<"Masukkan opsi angka:";
        cin>>opsi;
        switch (opsi) {
        case '1':
            cout<<"Anda memilih 90' berlawanan arah jarum jam"<<endl;
            bx=-y+a+b;
            by=x-a+b;
            break;
        case '2':
            cout<<"Anda memilih 180'"<<endl;
            bx=-x+2*a;
            by=-y+2*a;
            break;
        case '3':
            cout<<"Anda memilih 90' searah jarum jam"<<endl;
            bx = y -b +a;
            by = -x +a+b;
            break;
        default:
            cout << "Anda memasukkan opsi angka yang salah, coba lagi"<<endl<<endl;
            break;
        }

        cout<<"koordinat titik bayangannya adalah ("<<bx<<","<<by<<")"<<endl<<endl;
        lanjut = false;
    }
    return 0;
}

int dilatasit() {
    cout<<"koordinat (x,y) didilatasi oleh titik (a,b) terhadap faktor skala k"<<endl;
    cout<<"masukkan nilai x:";
    cin>>x;
    cout<<"masukkan nilai y:";
    cin>>y;
    cout<<"masukkan nilai a:";
    cin>>a;
    cout<<"masukkan nilai b:";
    cin>>b;
    cout<<"masukkan nilai k:";
    cin>>k;
    bx= (k*(x-a))+a;
    by = (k*(y-b))+b;
    cout<<"koordinat bayangannya adalah ("<<bx<<","<<by<<")"<<endl<<endl;
    lanjut = false;
    return 0;
}
int menu11() {
    while(lanjut) {
        cout<<"Operasi transformasi geometri apa yang ingin anda lakukan?"<<endl;
        cout<<"(1) Translasi"<<endl;
        cout<<"(2) Refleksi"<<endl;
        cout<<"(3) Rotasi"<<endl;
        cout<<"(4) Dilatasi"<<endl;
        cout<<"(5) Kembali"<<endl;
        cout<<"Masukkan opsi angka:";
        cin>>opsi;
        switch (opsi) {
        case '1':
            cout<<"Anda memilih translasi"<<endl<<endl;
            translasit();
            break;
        case '2':
            cout<<"Anda memilih refleksi"<<endl<<endl;
            refleksit();
            break;
        case '3':
            cout<<"Anda memilih rotasi"<<endl<<endl;
            rotasit();
            break;
        case '4':
            cout<<"Anda memilih dilatasi"<<endl<<endl;
            dilatasit();
            break;
        case '5':
            bkembali = false;
            clear();
            return 0;
            break;
        default:
            cout << "Anda memasukkan opsi angka yang salah, coba lagi"<<endl<<endl;
            break;
        }
    }
    return 0;
}

int menu1() {
    bkembali=true;
    while(lanjut&&bkembali) {
        cout<<"Jenis geometri apa yang ingin anda pindahkan?"<<endl;
        cout<<"(1) Titik"<<endl;
        cout<<"(2) Garis"<<endl;
        cout<<"(3) Kembali"<<endl;
        cout<<"Masukkan opsi angka:";
        cin>>opsi;
        switch (opsi) {
        case '1':
            cout<<"Anda memilih titik"<<endl<<endl;
            menu11();
            break;
        case '2':
            cout<<"Anda memilih garis"<<endl<<endl;
            menu11();
            break;
        case '3':
            bkembali = false;
            clear();
            return 0;
            break;
        default:
            cout << "Anda memasukkan opsi angka yang salah, coba lagi"<<endl<<endl;
            break;
        }
    }
    return 0;
}

int menu2() {
    cout<<"Nama	: Ayyash Syauqi Syahadah"<<endl;
    cout<<"Kelas	: XI3"<<endl;
    cout<<"Hobi	: Voli, programming"<<endl;
    cout<<"Ig	: @ayyasyauqi"<<endl;
    cout<<"Email	: ayyash.syauqi@smancmbbs.sch.id"<<endl;

    cout<<"Motto	: ...Tetapi boleh jadi kamu tidak menyenangi sesuatu, padahal itu baik bagimu, dan boleh jadi kamu menyukai sesuatu, padahal itu tidak baik bagimu. Allah mengetahui, sedang kamu tidak mengetahui."<<endl<<endl;
    cout<<"Kalkulator ini digunakan sebagai tugas matematika lanjut"<<endl;
    cout<<"Kesan/pesan untuk Pak Try selaku guru pengampu:"<<endl;
    cout<<"Salah satu guru dengan cara mengajar terbaik, semoga selalu diberikan yang terbaik, terima kasih Pak Try!"<<endl<<endl;
    cout<<"Masukkan karakter apapun untuk selesai:";
    cin>>opsi;
    clear();
    bkembali = false;
    return 0;
}

int main() {
    while(lanjut) {
        cout<<"Selamat Datang di Kalkulator Transgeo!"<<endl;
        cout<<"--------------------------------------"<<endl;
        bkembali = true;
        cout<<"Apa yang ingin anda lakukan?"<<endl;
        cout<<"(1) Mulai mentransformasi!"<<endl;
        cout<<"(2) Tentang pengembang"<<endl;
        cout<<"(3) Keluar"<<endl;
        cout<<"Masukkan opsi angka:";
        cin>>opsi;
        switch (opsi) {
        case '1':
            cout<<endl;
            menu1();
            if(bkembali) lanjutkan();
            break;
        case '2':
            cout<<endl;
            menu2();
            if(bkembali)
                lanjutkan();
            break;
        case '3':
            cout << "Terima kasih sudah menggunakan Kalkulator Transgeo!";
            return 0;
            break;
        default:
            cout << "Anda memasukkan opsi angka yang salah, coba lagi"<<endl<<endl;
            break;
        }
    }
    return 0;
}

