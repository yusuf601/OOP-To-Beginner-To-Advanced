#include <iostream>
#include <string>

class Mahasiwa{
    public:
        std::string nama;
        double IPK;

        Mahasiwa(std::string nama,double ipk){
            Mahasiwa::nama = nama;
            Mahasiwa::IPK = ipk;

        }
        //method tanpa parameter dan tanpa return
    void TampilkanData(){
        std::cout << Mahasiwa::nama << std::endl;
        std::cout << Mahasiwa::IPK << std::endl;
    }
    //method dengan parameter dan tanpa return
    void UbahNama(const char* namaBaru){
        Mahasiwa::nama = namaBaru;

    }
    //method tanpa parameter dan tanpa return
    std::string getNama(){
        return Mahasiwa::nama;
    }
    double getIPK(){
        return Mahasiwa::IPK;
    }


    //Method dengan parameter dan return
    double KatrolIPK(const double& tambahan_nilai){
        return Mahasiwa::IPK + tambahan_nilai;
    }



};
//menampilkan diluar class
// tidak disarankan
// void TampilkanData(Mahasiwa& data){
//     std::cout << data.nama << std::endl;
//     std::cout << data.IPK << std::endl;
// }

int main(){
    Mahasiwa Mahasiwa1 = Mahasiwa("King",4.0);
    Mahasiwa Mahasiwa2 = Mahasiwa("NO",4.0);
    Mahasiwa1.TampilkanData();
    Mahasiwa2.TampilkanData();
    Mahasiwa1.UbahNama("Mario");
    Mahasiwa1.TampilkanData();

    std::string dataNama = Mahasiwa1.getNama();
    double dataIPK = Mahasiwa1.getIPK();
    std::cout << Mahasiwa1.getIPK() << std::endl;

    std::cout << "Nilai katrol " << Mahasiwa1.KatrolIPK(-2.1) << std::endl;
    std::cin.get();
    return 0;
}