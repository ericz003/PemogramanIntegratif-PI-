#include <iostream>
using namespace std;

int main()
{
    char karakter;
    char ulang;
  
    
//awal:
   cout<<"Program untuk menentukan bil positif atau negatif"<<endl;
    cout<<"Masukkan Angka : ";
    cin>>karakter;
    if (karakter >='A' && karakter <='Z'){
    
        cout << "Masukkan Anda adalah huruf Tolong diganti yaaa";
    }
    else if (karakter >='a' && karakter <='z'){
    
        cout << "Masukkan Anda adalah huruf Tolong diganti yaaa";
        }
     if (karakter <'0'){
    
        cout << "Ini angka minus"<<endl;
        }
    else if (karakter =='0'){
    
        cout << "Ini adalah 0"<<endl;
        }
    else if (karakter >='1' && karakter <='9'){
    
        cout << "Masukkan Anda adalah angka positif"<<endl;
    }


  /*cout<<"Entry Data Lagi (Y/N) ?  ";
    cin>>ulang;
    cout<<endl;
    if(ulang=='Y'||ulang=='y'){
        goto awal;
    }
    if(ulang=='N'||ulang=='n'){
        goto akhir;
    }
    akhir:


    return 0;*/

}