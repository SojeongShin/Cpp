//
// Created by Sojeong Shin on 2021/10/10.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class SelectableRandom {
    int seed = 0;
public:
    int Even();
    int Odd();
    int EvenInRange(int a, int b);
    int OddInRange(int a, int b);
};

int SelectableRandom::Even() {
    //srand((unsigned int)time(0));
    int n;
    do {
        n = rand();
    } while (n % 2 != 0);
    return n;
}
int SelectableRandom::Odd() {
    //srand((unsigned int)time(0));
    int n;
    do {
        n = rand();
    } while (n % 2 != 1);
    return n;
}
int SelectableRandom::EvenInRange(int a, int b) {
    //srand((unsigned int)time(0));
    int n;
    do {
        n = rand() % (b - a + 1) + b;
    } while (n % 2 != 0);
    return n;
}
int SelectableRandom::OddInRange(int a, int b) {
    //srand((unsigned int)time(0));
    int n;
    do {
        n = rand() % (b - a + 1) + b;
    } while (n % 2 != 1);
    return n;
}

int main() {
    SelectableRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.Even();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 9까지의 랜덤 홀수 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.OddInRange(2, 9);
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}