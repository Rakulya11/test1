// c++ test.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{

    int secim;
    cout << " \tMenyu " << endl << endl;
    cout << " Muvafiq ededi qeyd ederek seciminizi ede bilersiniz! " << endl;
    cout << " Seciminizi edin: " << endl;
    cout << " Yeni Oyun - 1 " << endl;
    cout << " Oyunu davam etmek - 2 " << endl;
    cout << " Cixis - 3 " << endl;
    cout << " Oyunu SAVE etmek ve Masaustune cixis etmek - 4 " << endl;
    cin >> secim;

    switch (secim)
    {
    case 1:
        cout << " Yeni Oyun acilir... " << endl << " Zehmet olmasa gozleyin " << endl;
        break;

    case 2:
        cout << " Oyuna davam edilir... " << endl << " Xos eylenceler " << endl;
        break;

    case 3:
        cout << " Oyundan cixilir. " << endl;
        break;
    case 4:
        cout << " Oyunu SAVE edilir. Zehmet olmasa gozleyin.... " << endl;
        break;
    }
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
