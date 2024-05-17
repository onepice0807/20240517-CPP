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

	// 멤버함수에 inline 키워드를 붙이면
	// 해당함수를 inline 함수로 만들어달라고 요청을 함.
	inline void CheckAllFloor();
};

inline void Building::CheckAllFloor() {
	std::cout << std::endl;
	std::cout << "빌딩의 모든 시스템을 체크합니다." << std::endl;

	for (int i = 0; i < _maxFloor; i++) {
		CheckFloor(i);
	}
}