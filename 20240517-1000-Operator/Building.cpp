#include "Building.h"

using namespace std;

Building::Building(string name, float area, int maxFloor)
    : _name(name), _area(area), _maxFloor(maxFloor) {}

string Building::GetName() {
    return _name;
}

float Building::GetArea() {
    return _area;
}

int Building::GetMaxFloor() {
    return _maxFloor;
}

void Building::CheckFloor(int floor) {
    switch (floor) {
    case -1:
        cout << "���� 1�� ��� �ý����� üũ�մϴ�." << endl;
        break;

    case 1:
        cout << "1�� ���������� �ý����� üũ�մϴ�." << endl;
        break;

    case 2:
        cout << "2�� ��ȭ �ý����� üũ�մϴ�." << endl;
        break;

    default:
        cout << floor << "�� �Ϲ� �ý����� üũ�մϴ�." << endl;
        break;
    }
}

