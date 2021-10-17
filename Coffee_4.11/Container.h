//
// Created by Sojeong Shin on 2021/10/17.
//

#ifndef PROJECT4_CONTAINER_H
#define PROJECT4_CONTAINER_H

class Container { // 통 하나를 나타내는 클래스
    int size; // 현재 저장 량, 최대 저장 가능량은 10
public:
    Container() { size = 10; }
    ~Container() {};

    void fill(int n); // n 만큼 채우기
    void consume(int n); // n 만큼 소모하기
    int getSize(); // 현재 크기 리턴
};



#endif //PROJECT4_CONTAINER_H
