#include <iostream>
using namespace std;

// 추상 클래스 printer
class Printer {
public:
    virtual bool check(int pages) = 0;  // 용지와 잉크, 토너가 출력할 양이 되는지 확인
    virtual void print(int pages) = 0;  // pages 수 만큼의 용지와 잉크,토너 소비
    virtual void show() = 0;  // 잔량 확인 함수
};

class Inkjet : public Printer {  // 잉크 사용 프린터
protected:
    int remainPg = 5; int availableInk=10;
public:
    bool check(int pages) {
        if (remainPg >= pages && availableInk >= pages) return true;
    }
    void print(int pages) {
        remainPg -= pages;
        availableInk -= pages;
    }
    void show() {
        cout << "Officejet V40, HP, 남은종이" << remainPg << "장, 남은 잉크" << availableInk << endl;
    }
};


class Laser : public Printer {
protected:
    int remainPg = 3; int availableToner = 20;
public:
    bool check(int pages) {
        if (remainPg >= pages && availableToner >= pages) return true;
    }

    void print(int pages) {
        remainPg -= pages;
        availableToner -= pages/2;
    }
    void show() {
        cout << "Officejet V40, HP, 남은종이" << remainPg << "장, 남은 잉크" << availableToner << endl;
    }
};


int main() {
    Printer* I = new Inkjet();
    Printer* L = new Laser();
    cout << "현재 작동중인 2대의 프린터는 다음과 같다." << endl;
    cout << "잉크젯: Officejet V40, HP, 남은종이 5장, 남은 잉크 10" << endl;
    cout << "레이저: SCX-6x45, 삼성전자, 남은종이 3장, 남은 토너 20" << endl;

    string answer;
    int printer;
    int pages;
    do {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>> ";
        cin >> printer >> pages;

        if(printer==1) {  // 잉크젯 선택
            if(I -> check(pages) == true) {
                cout << "프린트하였습니다." << endl;
                I ->print(pages);
                I -> show();
                L -> show();
            }
            else  {
                cout << "용지 또는 잉크가 부족합니다." << endl;
                I -> show();
                L -> show();
            }
        }
        else {  // 레이저 선택
            if(L ->check(pages) == true) {
                cout << "프린트하였습니다." << endl;
                L ->print(pages);
                I -> show();
                L -> show();
            }
            else  {
                cout << "용지 또는 잉크가 부족합니다." << endl;
                I -> show();
                L -> show();
            }
        }

        cout << "계속 프린트 하시겠습니까?(y/n)>> ";
        cin >> answer;
    }while (answer == "y");
    delete I;
    delete L;

    return 0;
}
