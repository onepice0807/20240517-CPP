#pragma once
#include <string>
#include <iostream>

class Building {
private:
	std::string _name;
	float _area;
	int _maxFloor;

public:
	Building(std::string name, float area, int maxFloor);

	std::string GetName();

	float GetArea();

	int GetMaxFloor();

	void CheckFloor(int floor);

	// ����Լ��� inline Ű���带 ���̸�
	// �ش��Լ��� inline �Լ��� �����޶�� ��û�� ��.
	inline void CheckAllFloor();
};

inline void Building::CheckAllFloor() {
	std::cout << std::endl;
	std::cout << "������ ��� �ý����� üũ�մϴ�." << std::endl;

	for (int i = 0; i < _maxFloor; i++) {
		CheckFloor(i);
	}
}