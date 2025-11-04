#include <iostream>
#include "Auto.h"

//// BEISPIEL AUTO ////

using namespace std;

// class Auto
//{
// public:
//     string Farbe;

//}

int main()
{

    // Header dosyasinin icindeki default olarak gelen Konstruktoru tekrar olusturup Auto.cpp dosyasinda bunu bicimlendirdigimiz icin
    // burada nesne olustururken direkt nitelikleri parantez icerisine Auto.cpp icindeki niteliklerin sirasiyla yazabiliyoruz
    Auto Auto1("Ford", "Siyah", 90);
    Auto Auto2("Audi", "Mavi", 120),
        Auto3("Ferrari", "Kirmizi", 260);

    Auto1.setAutoFarbe("beyaz");
    Auto2.setAutoModel("Fiat");
    Auto3.setAutops(300);

    // Header dosyasinda olusturdugumuz nesne ve onun özelliklerini ve fonksiyonlari
    // diger olusturdugumuz Auto.cpp dosyasinda bicimlendirdikten sonra burada cok temiz bir sekilde terminalde gösterebiliyoruz
    Auto1.AutoinformationZeigen();
    Auto2.AutoinformationZeigen();
    Auto3.AutoinformationZeigen();

    Haus Haus1;
    Haus Haus2;

    Haus1.InformationEingeben();
    Haus1.InformationenZeigen();

    Haus2.InformationEingeben();
    Haus2.InformationenZeigen();

    return 0;
}
