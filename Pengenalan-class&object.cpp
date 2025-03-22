#include <iostream>
#include <string>

class Mahasiswa{
    public:
        std::string nama;
        std::string NIM;
        std::string jurusan;
        double ipk;
};
int main(){
    Mahasiswa data1;
    data1.nama = "King";
    data1.NIM = "E1E124044";
    data1.jurusan = "TI";
    Mahasiswa data2;
    data2.nama = " Yusuf";
    data2.nama = "King";
    data2.NIM = "E1E124044";
    data2.jurusan = "TI";
    std::cout << data1.nama;
    std::cout << data2.nama;
    std::cout << "Nama dari data 1: " << data1.nama << std::endl;
    std::cout << "NIM dari data 1: " << data1.NIM << std::endl;
    std::cout << "Jurusan dari data 1: " << data1.jurusan << std::endl;
    
    std::cin.get();
    return 0;
}