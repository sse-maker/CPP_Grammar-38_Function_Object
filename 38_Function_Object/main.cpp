//
//  main.cpp
//  38_Function_Object
//
//  Created by 세광 on 2021/07/30.
//

// 함수 객체 (Function Object/Functor, 함수처럼 작동하는 객체)
// 어떤 상태를 가지고 있을 수 있다는 점이 함수 포인터와 가장 큰 차이

#include <iostream>

using namespace std;

class Equals {
public:
    Equals(int value) : value(value) {}
    bool operator()(int x, int y = 0) const { // operator() 연산자: 함수를 호출하는 연산자
        return x + y == value;
    }
    
private:
    int value;
};

int main() {
    Equals eq1(123), eq2(234);
    cout << eq1(12, 111) << endl; // eq: 함수처럼 생긴 '객체'
    cout << eq2(234) << endl;
}
