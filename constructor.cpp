#include <iostream>
#include <string>
//class tanpa constructor
class polos{
    std::string dataString;
};
// class dengan constructor

class Mahasiswa{
    public:
        std::string nama;
        std::string jurusan;
        std::string NIM;
        double IPK;
    //ini adalah constructor
        // Mahasiswa(){
        //     std::cout << "Ini adalah Constructor" << std::endl;
        // }

        //Constructor dengan parameter
        Mahasiswa(std::string Inputnama,std::string InputJurusan,std::string InputNim,double InputIpk){
            Mahasiswa::nama = Inputnama;
            Mahasiswa::jurusan = InputJurusan;
            Mahasiswa::NIM = InputNim;
            Mahasiswa::IPK = InputIpk;
            std::cout << Mahasiswa::nama << std::endl;
            std::cout << Mahasiswa::jurusan << std::endl;
            std::cout << Mahasiswa::NIM << std::endl;
            std::cout << Mahasiswa::IPK << std::endl;
        }

};

int main(){
    double ipk;
    std::string nama,jurusan,NIM;
    std::cout << "Masukkan nama: ";
    getline(std::cin,nama);
    std::cout << "Masukkan jurusan: ";
    getline(std::cin,jurusan);
    std::cout << "Masukkan NIM: ";
    getline(std::cin,NIM);
    std::cout << "Masukkan IPK: ";
    std::cin >> ipk;
    Mahasiswa Mahasiswa1 = Mahasiswa(nama,jurusan,NIM,ipk);
    Mahasiswa Mahasiswa2 = Mahasiswa("abcsd","asd","asa",4);

    std::cin.get();
    return 0;
}