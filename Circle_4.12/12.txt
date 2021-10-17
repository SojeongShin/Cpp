#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius; // 원의 반지름 값
    string name; // 원의 이름
public:
    void setCircle(string name, int radius); // 이름과 반지름 설정
    double getArea(){ return 3.14 * radius * radius; }
    string getName() { return name; }
};

void Circle::setCircle(string name, int radius) {
    this -> name = name;
    this -> radius = radius;
}

class CircleManager {
    Circle *p; // Circle 배열에 대한 포인터
    int size; // 배열의 크기
    int radius;
    int area;  // 비교면적
    string name;
public:
    CircleManager(int size); // size 크기의 배열을 동적 생성. 사용자로부터 입력 완료
    ~CircleManager();
    void searchByName(); // 사용자로부터 원의 이름을 입력받아 면적 출력
    void searchByArea(); // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
};

CircleManager::CircleManager(int size) {
    p = new Circle[size];
    this -> size = size;
    for(int i=0; i<size; i++) {
        cout << "원" << i+1 << "의 이름과 반지름 >> ";
        cin >> name >> radius;
        p[i].setCircle(name,radius);
    }
}

CircleManager::~CircleManager() {
    delete [] p;
}

void CircleManager::searchByName() {
    cout << "검색하고자 하는 이름 >> ";
    cin >> name;
    for(int i=0; i<size; i++) {
        if(name == p[i].getName()) {
            cout << name << "의 면적은 " << p[i].getArea() << endl;
        }
    }
}

void CircleManager::searchByArea() {
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> area;
    cout << area << "보다 넓이가 큰 원을 검색합니다.\n";

    for(int i=0; i<size; i++) {
        if(area < p[i].getArea()) {
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
        }
    }
}

int main() {
    int size;
    cout << "원의 개수 >> ";
    cin >> size;
    CircleManager circle(size);
    circle.searchByName();
    circle.searchByArea();
    }
