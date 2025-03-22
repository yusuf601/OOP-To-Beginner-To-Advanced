#include <iostream>

class rectangle{
    public:
        float lenght;
        float width;
        rectangle(float InputLenght,float InputWidth){
            rectangle::lenght = InputLenght;
            rectangle::width = InputWidth;
        }
        float GetLenght(){
            return rectangle::lenght;
        }
        float Getwidth(){
            return rectangle::width;
        }
        float getArea(){
            return this->GetLenght() * this->Getwidth();
        }

        void tampilkan(){
            std::cout <<"Nilai Panjang: " <<  this->GetLenght() << std::endl;
            std::cout <<"Nilai lebar: " <<  this->Getwidth() << std::endl;
            std::cout <<"Nilai Panjang: " <<  this->getArea() << std::endl;
        }

};


int main(){
    float panjang,lebar;
    std::cout << "Masukan panjang: ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar: ";
    std::cin >> lebar;
    rectangle persegi1 = rectangle(panjang,lebar);
    persegi1.tampilkan();

    std::cin.get();
    return 0;
}