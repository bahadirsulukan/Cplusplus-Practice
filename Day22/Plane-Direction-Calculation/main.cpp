#include <iostream>

//// POINTERLAR VE REFERANSLAR ////

// The following code is for plane direction calculations

using namespace std;

int ucaginYonBilgileriHesaplama(int x_)
{
    // yogun hesaplamalar 2000 satir
    x_ = 34;
    return x_;
}

void ucaginYonBilgileriHesaplama2(int *p)
{
    // yogun hesaplamalar 2000 satir *p kullanarak
    *p = 34;
}

int main()
{
    /*
      Diziler (Array)
      Referanslar (Referances)
      Isaretciler (Pointer) // adres kullanarak degiskenlere erismek icin kullanilirlar
 Pointerlar degiskenlerin adreslerini tutarlar

    int a = 3;
    int dizi[5] = {2, 4, 5, 7, 9};
    int &adres = &a;    // 'Referances' Referanslara sadece basalngic aninda bir deger atamsi yapilabilir ve daha sonrasindan degistirilemez
    int *isaretci = &a; // 'Pointer' Pointerlara her zaman bir deger atamasi yapilip, degistirilebilir
    dizi[3] = 20; // Dizilerde aslinda bir Pointerdir
    */

    int x = 7;
    int *ptr;
    ptr = &x; // &: Adress of ...
    cout << x << endl;
    cout << *ptr << endl;
    cout << ptr << endl; // Hafizadaki adresi verir
    cout << &x << endl;  // x'in hafizadaki adresini verir

    *ptr = 15; // x'in yeni degerini 7'den 15'e cevirir

    x = ucaginYonBilgileriHesaplama(x);
    ucaginYonBilgileriHesaplama2(ptr);
    cout << "x'in yeni degeri: " << x << endl; // x'in hafizadaki adresini verir
}
