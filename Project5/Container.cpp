//
// Created by Sojeong Shin on 2021/10/17.
//

#include "Container.h"

void Container::fill(int n) {
    size += n;
}
void Container::consume(int n) {
    size -= n;
}

int Container::getSize() {
    return size;
}