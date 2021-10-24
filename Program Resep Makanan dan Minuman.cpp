/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char JenisResep,Masakan,Minuman;
    cout<<"Selamat datang di Program Resep Makanan dan Minuman\n";
    cout<<"Silahkan pilih jenis resep yang ingin anda buat\n( A untuk makanan, B untuk minuman )";
    cout<<"\nJenis resep : ";
    cin>>JenisResep;
    
    switch (JenisResep) {
        case 'A' :
            cout<<"\nAnda memilih jenis resep makanan\nSilahkan pilih jenis makanan yang ingin anda masak";
            cout<<"\n( C untuk orak-arik telur, D untuk oseng sawi putih jagung manis, E untuk nasi goreng )";
            cout<<"\nJenis makanan : ";
            cin>>Masakan;
            switch (Masakan) {
                case 'C' :
                    cout<<"\nAnda memilih orak-arik telur\n\n";
                    cout<<"Bahan-bahan :\n";
                    cout<<"- Telur\n- Wortel\n- Bakso\n";
                    cout<<"- Garam secukupnya\n- Saos tiram\n- Gula pasir\n- Merica bubuk\n- Kaldu bubuk\n\n";
                    cout<<"Untuk bumbu :\n- 1/2 bawang bombai\n- 3 bawang putih\n- 6 cabai rawit merah\n\n";
                    cout<<"Langkah pembuatan :\n";
                    cout<<"- Pertama, goreng bakso yang sudah dipotong menjadi dadu dan kemudian sisihkan\n";
                    cout<<"- Selanjutnya, goreng telur dengan diorak-arik dan kemudian sisihkan\n";
                    cout<<"- Lalu, tumis bumbu yang sudah diiris sampai harum\n";
                    cout<<"- Kemudian, campurkan bakso dan telur orak-arik ke dalam bumbu dan aduk hingga merata\n";
                    cout<<"- Selanjutnya, tambahkan sedikit air, garam, gula pasir, merica bubuk, saos tiram, dan kaldu bubuk\n";
                    cout<<"- Lalu, aduk hingga merata\n";
                    cout<<"- Terakhir, angkat masakan dan sajikan pada piring\n";
                    break;
                case 'D' :
                    cout<<"\nAnda memilih oseng sawi putih jagung manis\n\n";
                    cout<<"Bahan-bahan :\n";
                    cout<<"- 1 buah sawi putih( potong-potong )\n- 1 buah jagung manis ( serut )\n- 3 bawang putih";
                    cout<<"\n- Cabai ( jumlah sesuai selera )\n- Gula pasir\n- Garam\n- Kaldu bubuk\n- Air secukupnya";
                    cout<<"\n\nLangkah pembuatan :";
                    cout<<"\n- Pertama, tumis bawang putih sampai harum\n";
                    cout<<"- Lalu, masukkan cabai yang sudah di haluskan, jagung serut, dan air secukupnya\n";
                    cout<<"- Setelah jagung bertekstur lunak, masukkan sawi putih, garam, gula pasir, dan kaldu bubuk\n";
                    cout<<"- Kemudian, aduk merata hingga matang\n";
                    cout<<"- Terakhir, angkat masakan dan sajikan pada mangkuk\n";
                    break;
                case 'E' :
                    cout<<"\nAnda memilih nasi goreng\n\n";
                    cout<<"Bahan-bahan :";
                    cout<<"\n- 1 cangkir beras";
                    cout<<"\n- 1 buah wortel";
                    cout<<"\n- 2 buah tahu";
                    cout<<"\n- 3 buah bakso";
                    cout<<"\n- 2 buah cabai rawit merah ( jika ingin pedas )";
                    cout<<"\n- 1 buah tomat";
                    cout<<"\n- 2 siung bawang merah";
                    cout<<"\n- Kecap manis secukupnya";
                    cout<<"\n- Kaldu ayam secukupnya";
                    cout<<"\n- Minyak sayur secukupnya";
                    cout<<"\n\nLangkah pembuatan :";
                    cout<<"\n- Pertama, iris tipis cabai, bawang, tomat, dan wortel"; 
                    cout<<"\n- Lalu, potong dadu bakso dan tahu";
                    cout<<"\n- Kemudian, cuci secangkir beras sebanyak 2 kali pencucian";
                    cout<<"\n- Selanjutnya, masukkan beras, cabai, bawang, tomat, wortel, bakso, dan tahu ke dalam rice cooker";
                    cout<<"\n- Setelah itu, masukkan pula air, penyedap rasa, dan sedikit minyak";
                    cout<<"\n- Kemudian, aduk hingga merata";
                    cout<<"\n- Lalu, nyalakan rice cooker";
                    cout<<"\n- Setelah 10 menit, aduk kembali dan tutup rice cooker";
                    cout<<"\n- Terakhir, ambil nasi goreng dari rice cooker dan sajikan pada piring\n";
                    break;
            default: cout<<"\nInput anda salah, coba ulangi lagi";    
            }
            break;        
        case 'B' :
            cout<<"\nAnda memilih jenis resep minuman\nSilahkan pilih jenis minuman yang ingin anda buat";
            cout<<"\n( F untuk es kopi susu gula aren, G untuk dalgona coffee, H untuk es cokelat cincau )";
            cout<<"\nJenis minuman : ";
            cin>>Minuman;
            switch (Minuman) {
                case 'F' :
                    cout<<"\nAnda memilih es kopi susu gula aren\n\n";
                    cout<<"Bahan-bahan :";
                    cout<<"\n- 2 gram espresso bubuk";
                    cout<<"\n- 250 ml susu cair full cream";
                    cout<<"\n- Es batu secukupnya";
                    cout<<"\n- Garam secukupnya";
                    cout<<"\n- 100 ml air";
                    cout<<"\n- 100 gram gula aren";
                    cout<<"\n- 1 sendok teh esens pandan";
                    cout<<"\n\nLangkah pembuatan :";
                    cout<<"\n- Pertama, siapkan panci, lalu didihkan air ";
                    cout<<"\n- Kemudian, masukkan gula aren yang sudah diiris, Masak hingga seluruh gula larut";
                    cout<<"\n- Setelah dimasak, matikan kompor, lalu dinginkan";
                    cout<<"\n- Selanjutnya, tambahkan esens pandan ke dalam larutan gula aren, kemudian aduk merata dan kemudian sisihkan";
                    cout<<"\n- Setelah itu, larutkan espresso bubuk dalam 50 ml air panas, lalu dinginkan";
                    cout<<"\n- Lalu, tuang larutan gula aren ke dalam gelas saji";
                    cout<<"\n- Kemudian, masukkan es batu secukupnya ";
                    cout<<"\n- Lalu, tuang espresso, susu cair, dan garam ";
                    cout<<"\n- Terakhir, aduk hingga tercampur rata dan sajikan\n";
                    break;
                case 'G' :
                    cout<<"\nAnda memilih dalgona coffee\n\n";
                    cout<<"Bahan-bahan :";
                    cout<<"\n- 1 sendok makan kopi instan bubuk";
                    cout<<"\n- 2 sendok makan gula pasir";
                    cout<<"\n- 2 sendok makan air panas";
                    cout<<"\n- 200 ml susu cair full cream";
                    cout<<"\n- Es batu secukupnya";
                    cout<<"\nLangkah pembuatan :";
                    cout<<"\n- Pertama, campurkan kopi bubuk, gula pasir, dan air panas pada wadah ";
                    cout<<"\n- Lalu, kocok menggunakan mixer atau whisker hingga tercampur rata dan mengental";
                    cout<<"\n- Kemudian, siapkan gelas saji, lalu masukkan es batu secukupnya ";
                    cout<<"\n- Setelah itu, tuang susu hingga hampir memenuhi gelas";
                    cout<<"\n- Terakhir, tuang adonan dalgona di atas susu secara perlahan agar tidak berantakan\n";
                    break;
                case 'H' :
                    cout<<"\nAnda memilih es cokelat cincau\n\n";
                    cout<<"Bahan-bahan :";
                    cout<<"\n- 150 gram cincau hitam ";
                    cout<<"\n- 2 sendok makan cokelat bubuk ";
                    cout<<"\n- 2 sendok makan gula pasir";
                    cout<<"\n- Air panas secukupnya";
                    cout<<"\n- Es batu secukupnya ";
                    cout<<"\n\nLangkah pembuatan :";
                    cout<<"\n- Pertama, potong atau serut cincau sesuai selera dan kemudian sisihkan";
                    cout<<"\n- Lalu, masukkan bubuk cokelat, gula pasir, dan sedikit air panas ke dalam gelas ";
                    cout<<"\n- Kemudian, aduk hingga tercampur rata ";
                    cout<<"\n- Terakhir, tuangkan air, es batu, dan cincau yang sudah dipotong tadi\n";
                    break;
            default: cout<<"\nInput anda salah, coba ulangi lagi";
            }
            break;
        default: cout<<"\nInput anda salah, coba ulangi lagi";}
        cout<<"\nTerima kasih";
    
    return 0;}



