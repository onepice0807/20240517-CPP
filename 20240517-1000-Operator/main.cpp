#include <iostream>
#include <string>
#include "Building.h"

using namespace std;

// C++���� �»������� C����� ���� ������ ������� ���� �Ǿ
// �����(.h), ������(.cpp)�� ����� �����ϰ� �Ǿ��ֽ��ϴ�.
// Ŭ���� ����� ���ο��� ����Լ��� �����ϴ� ��� �����Ϸ��� �����ο��� ������������
// �ٸ��� �޾Ƶ帰��
// inline�Լ��� ����� �޶�� ��û���� �޾Ƶ帰��

int main() {
    Building starTower("��ŸŸ��", 112300.23f, 23);

    cout << "������: " << starTower.GetName() << endl;
    cout << "��ü����: " << starTower.GetArea() << "��" << endl;
    cout << "��ü����: " << starTower.GetMaxFloor() << "��" << endl;

    starTower.CheckFloor(-1);

    /*
    int floor = -1;

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

    */


    starTower.CheckAllFloor();


    return 0;
}