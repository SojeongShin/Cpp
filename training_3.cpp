//
// Created by Sojeong Shin on 2021/10/10.
//

#include <iostream>
using namespace std;

class Account{
    string name;
    int id;
    int balance;  // 잔액

public:
    Account(string a, int b, int c);  // 계좌주인, 번호, 잔액
    string getOwner();  // 계좌 주인
    int inquiry();  // 계좌 잔액
    int deposit(int plus);  // 저금
    int withdraw(int minus); // 출금
};

Account::Account(string a, int b, int c) {
    name = a; id = b; balance = c;
}

string Account::getOwner() { return name; }


int Account::inquiry() { return balance; }


int Account::deposit(int plus) {
    balance += plus;
}


int Account::withdraw(int minus) {
    balance -= minus;
}

int main() {
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout  << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    return 0;
}
