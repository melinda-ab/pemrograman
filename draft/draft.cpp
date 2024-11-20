#include <iostream> //input-output
#include <vector> //dynamic array
#include <string> //string manipulation
#include <cstdlib> //general like rand()
#include <ctime> //date n time
#include <algorithm> //operations

using namespace std;

class hangmangame{
private:
    string ditebak;
    string tertebak;
    string soal;
    vector<char> huruftertebak;
    int sisa;
    const int maksimum = 6;
    struct question{
        string pertanyaan;
        string kuncijawaban;
    };
public:
    hangmangame() {
        srand(time(0));
        sisa=maksimum;
        question q=randomquestion();
        ditebak=q.kuncijawaban;
        soal=q.pertanyaan;
        tertebak=hideanswer(ditebak);
    }

    question randomquestion() {
        question data[]={
            {"Di toko mainan, ada 9 balon berwarna-warni yang cantik. Tiba-tiba, 5 balon dibeli orang. Berapa balon yang masih ada di toko?", "empat balon"},
            {"Budi selalu bangun pagi jam 5. Setelah itu, ia membantu ibunya menyapu halaman. Apa yang biasanya dilakukan Budi setiap pagi?", "menyapu"},
            {"Burung memiliki sayap di tubuhnya. Sayap itu digunakan burung untuk apa ya?", "terbang"},
            {"Setiap pagi, Rina dan Budi suka bangun lebih awal untuk melihat matahari terbit. Dari arah mana sih matahari terbit setiap pagi?", "timur"},
            {"Hewan apa yang suka berenang di air dan bernapas menggunakan insang?", "ikan"},
            {"Rani punya 4 boneka. Lalu, ibunya memberi 2 boneka lagi. Berapa total boneka yang dimiliki Rani sekarang?", "enam boneka"},
            {"Siti pergi ke pasar dan membeli 3 buah mangga serta 2 buah apel.  Buah mana yang biasanya berwarna merah?", "apel"},
            {"Doni sedang berlari di lorong kelas saat istirahat,  tiba-tiba menabrak Pak Guru. Apa yang akan Doni katakan setelah itu?", "maaf pak guru"},
            {"Saat bangun pagi, gigi Beni terasa sakit. Ini karena Beni tidak ..... sebelum tidur.", "sikat gigi"},
            {"Ada 5 apel di meja, lalu Rina mengambil 2. Berapa apel yang masih tersisa di meja?", "tiga apel"},
            {"Ada bangun datar dengan keempat sisi sama panjang dan keempat sudutnya siku-siku. Apa nama bangun datar ini?", "persegi"}
        };
        int randomindex=rand()%(sizeof(data)/sizeof(data[0]));
        return data[randomindex];
    }
    string hideanswer(const string &answer) {
        string hiddenanswer = "";
        for (char a : answer) {
            if (a == ' ') {
                hiddenanswer += '/';
            } else {
                hiddenanswer += '_';
            }
        }
        return hiddenanswer;
    } 
    void displayword() {
        cout<<"Kata: ";
        for (char ch : tertebak) {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    void displayletters() {
        cout<<"Huruf yang telah ditebak: ";
        for (char ch : huruftertebak) {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    bool tebakhuruf(char huruf) {
        bool correctguess = false;
        for (int i = 0; i < ditebak.length(); ++i) {
            if (ditebak[i] == huruf) {
                tertebak[i] = huruf;
                correctguess = true;
            }
        }
        return correctguess;
    }

    bool menang() {
        return ditebak == tertebak;
    }

    bool kalah() {
        return sisa == 0;
    }

    void updateattempts() {
        --sisa;
    }

    void play() {
        char guessedletter;
        while(true) {
            system("clear");
            cout<<soal<<endl;
            displayword();
            displayletters();
            cout<<"Sisa Kesempatan: "<<sisa<<endl;

            if(menang()) {
                cout<<"Selamat kamu menang!"<<endl;
                string playagain;
                cout<<"Apakah kamu ingin main lagi?(boleh/tidak): ";
                cin>>playagain;
                if (playagain == "boleh") {
                    hangmangame newgame;
                    newgame.play();
                    break;
                } else if(playagain == "tidak"){
                    cout<<"Terima Kasih dan Selamat Tinggal!"<<endl;
                    break;
                } else{
                    cout<<"Jawaban invalid";
                    break;
                }
            } else if(kalah()) {
                cout<<"Yah, kamu kalah! Kata yang benar adalah "<<ditebak<<endl;
                string playagain;
                cout<<"Apakah kamu ingin main lagi?(boleh/tidak): ";
                cin>>playagain;
                if (playagain == "boleh") {
                    hangmangame newgame;
                    newgame.play();
                    break;
                } else if(playagain == "tidak"){
                    cout<<"Terima Kasih dan Selamat Tinggal!"<<endl;
                    break;
                } else{
                    cout<<"Jawaban invalid";
                    break;
                }
            }

            cout<<"Tebak suatu huruf: ";
            cin>>guessedletter;
            guessedletter = tolower(guessedletter);

            if(find(huruftertebak.begin(), huruftertebak.end(), guessedletter) != huruftertebak.end()) {
                cout<<"Kamu sudah menembak huruf itu" << endl;
                continue;
            }

            huruftertebak.push_back(guessedletter);

            if (!tebakhuruf(guessedletter)) {
                updateattempts();
                cout << "Tebakan salah!" << endl;
            } else {
                cout << "Tebakan benar!" << endl;
            }

            cout << endl;

            cin.ignore();
            cin.get();
        }
    }
};


int main (){
    string jawaban;
    cout<<"Selamat Datang di Permainan Hangman!"<<endl;
    cout<<"Ayo mulai permainan?(yuk/gak): ";
    cin>>jawaban;
    if(jawaban == "yuk"){
        hangmangame game;
        game.play();
    } else if(jawaban == "gak"){
        cout<<" Terima Kasih dan Selamat Tinggal"<<endl;
    } else{
        cout<<" Jawaban invalid"<<endl;
    }

    return 0;
}