#include <iostream>
#include <string>
#include "Building.h"

using namespace std;

// C++언어는 태생적으로 C언어의 구문 구조를 기반으로 개발 되어서
// 선언부(.h), 구현부(.cpp)로 나누어서 개발하게 되어있습니다.
// 클래스 선언부 내부에서 멤버함수를 구현하는 경우 컴파일러는 구현부에서 구현했을때와
// 다르게 받아드린다
// inline함수로 만들어 달라는 요청으로 받아드린다

int main() {
    Building starTower("스타타워", 112300.23f, 23);

    cout << "빌딩명: " << starTower.GetName() << endl;
    cout << "전체면적: " << starTower.GetArea() << "평" << endl;
    cout << "전체층수: " << starTower.GetMaxFloor() << "층" << endl;

    starTower.CheckFloor(-1);

    /*
    int floor = -1;

    switch (floor) {
    case -1:
        cout << "지하 1층 배수 시스템을 체크합니다." << endl;
        break;

    case 1:
        cout << "1층 엘리베이터 시스템을 체크합니다." << endl;
        break;

    case 2:
        cout << "2층 방화 시스템을 체크합니다." << endl;
        break;

    default:
        cout << floor << "층 일반 시스템을 체크합니다." << endl;
        break;
    }

    */


    starTower.CheckAllFloor();


    return 0;
}