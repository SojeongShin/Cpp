//
// Created by Sojeong Shin on 2021/10/17.
//
#include <iostream>
using namespace std;
#include "CoffeeVendingMachine.h"

void CoffeeVendingMachine::fill() {
    int remain;
    for(int i=0;i<3;i++) {
        remain = 10 - tong[i].getSize();
        tong[i].fill(remain);  // 컨테이너 생성자 받아오기
    }
        cout << "커피" << tong[0].getSize() << ", ";
        cout << "물" << tong[1].getSize() << ", ";
        cout << "설탕" << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::selectEspresso() {
    for (int i=0; i<2; i++) {
        if (tong[i].getSize() <= 0 ) {
            cout << "원료가 부족합니다." << endl;
            run();
        }
    }
    tong[0].consume(1);
    tong[1].consume(1);
    cout << "에스프레소 드세요." << endl;
}

void CoffeeVendingMachine::selectAmericano() {
    for (int i = 0; i < 2; i++) {
        if (tong[i].getSize() <= 0) {
            cout << "원료가 부족합니다." << endl;
            run();
        }
    }
        tong[0].consume(1);
        tong[1].consume(2);
        cout << "아메리카노 드세요." << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
    for (int i=0; i<3; i++) {
        if (tong[i].getSize() <= 0) {
            cout << "원료가 부족합니다." << endl;
            run();
        }
    }
    tong[0].consume(1);
    tong[1].consume(2);
    tong[2].consume(1);
    cout << "설탕커피 드세요." << endl;
}

void CoffeeVendingMachine::show() {
    cout << "커피" << tong[0].getSize() << "물" << tong[1].getSize()
    << "설탕" << tong[2].getSize() << endl;
}

bool CoffeeVendingMachine::checkInputError() {
    if(pick)
}

void CoffeeVendingMachine::run() {
    int pick;  // 사용자 입력 숫자

    cout << "***** 커피자판기를 작동합니다. *****" << endl;
    while(true) {
        cout << "메뉴를 눌러 주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기) >> ";

        cin >> pick;

        switch (pick) {
            case 1:
                selectEspresso();
                break;
            case 2:
                selectAmericano();
                break;
            case 3:
                selectSugarCoffee();
                break;
            case 4:
                show();
                break;
            case 5:
                fill();
                break;
        default:
                break;
        }

    }
}