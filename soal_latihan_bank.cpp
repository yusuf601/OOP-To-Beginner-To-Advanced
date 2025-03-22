#include <iostream>
#include <string>

class BankAccount{
    public:
        std::string AccountNumber;
        float balance;

        BankAccount(std::string InputAccountNumber,float InputBalance){
            this->AccountNumber = InputAccountNumber;
            BankAccount::balance = InputBalance;
        }
        //method dengan parameter dan return
        void deposit(float Tambah_Saldo){
            BankAccount::balance += Tambah_Saldo;
            std::cout << "Saldo setelah deposit: " << BankAccount::balance<< std::endl;
        }  
        //method dengan parameter dan return
        void withdraw(float mengurangi_saldo){
            if (mengurangi_saldo > balance) {
                std::cout << "Saldo tidak cukup!" << std::endl;
            }else{
            balance -= mengurangi_saldo;
            std::cout << "Berhasil menarik saldo. Saldo baru: " << balance << std::endl;
            }
    
        }
        //method tanpa parameter dan tanpa return 
        void DisplayBalance(){
            std::cout << "Nomor Rekening: " << BankAccount::AccountNumber << std::endl;
            std::cout << "Sisa Saldo: " << BankAccount::balance << std::endl;
        }

};


int main(){
    int pilihan;
    int choice;
    int deposit;
    int withdraw;
    int choiceWhile;
    bool condition;
    BankAccount Person1 = BankAccount("E1E124044",500.0);
    std::cout << "Apakah anda ingin melakukan transaksi? (1-> ya/0-> no)";
    std::cin >> pilihan;
    if(pilihan == 1){
        condition = true;
    }else{
        condition = false;
    }
    while(condition == true){
        std::cout << "MENU" << std::endl;
        std::cout << "1.Deposit" << std::endl;
        std::cout << "2.Withdraw" << std::endl;
        std::cout << "Masukkan Pilihan anda: ";
        std::cin >> choice;
        while(choice < 1 || choice > 2){
            return 1;
        }
        if(choice == 1){
            std::cout << "Masukkan jumlah saldo deposit: ";
            std::cin >> deposit;
            Person1.deposit(deposit);
        }else if(pilihan == 2){
            std::cout << "Masukkan jumlah Withdraw: ";
            std::cin >> withdraw;
        }
        std::cout << "apakah anda ingin melanjutkan:(1-> ya/2->no) ";
        std::cin >> choiceWhile;
        if(choiceWhile == 2){
            condition = false;
        }else if(choiceWhile == 1){
            condition = true;
        }

    }
    Person1.DisplayBalance();
    std::cin.get();
    return 0;    
}