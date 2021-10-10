//
// Created by Sojeong Shin on 2021/10/10.
//

#include <iostream>
using namespace std;

class Oval {
    int width, height;
public:
    Oval();
    Oval(int w, int h);
    ~Oval();
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();
};

Oval::Oval() {
    width = height = 1;
}
Oval::Oval(int w, int h) {
    width = w; height = h;
}
Oval::~Oval() {
    cout << "Oval 소멸자 ";
    show();
}
void Oval::set(int w, int h) {
    width = w; height = h;
}
void Oval::show() {
    cout << "width = " << width << ", " << "height = " << height << endl;
}
int Oval::getWidth() {
    return width;
}
int Oval::getHeight() {
    return height;
}

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << ", " << b.getHeight() << endl;
}
