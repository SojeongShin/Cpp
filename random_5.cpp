//
// Created by Sojeong Shin on 2021/10/10.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
public:
    Random();
    int next();
    int nextInRange(int a, int b);

};

Random::Random() {
    srand((unsigned)time(0));
}

int Random::next() {
    return rand();
}

int Random::nextInRange(int a, int b) {
    int interval = b - a + 1;
    return a + (rand() % interval);
}

int main() {
    Random r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
    for(int i=0; i<10; i++) {
        int n = r.next();  // 0에서 Rand_Max(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++) {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}
