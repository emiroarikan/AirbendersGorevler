#include<iostream>
#define DISTANCE(t) (0.5)*(9.80665)*(t*t)

int main(){
    float x, dist;
    std::cin >> x;
    dist = DISTANCE(x);
    std::cout << dist;
    return 0;
}