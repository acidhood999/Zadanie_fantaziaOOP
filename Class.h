#pragma once

#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

template <typename T>
class Dnevnik
{

protected:
	T vozrast;
	string name;
public:
	Dnevnik(string name, T vozrast) : name{ name }, vozrast{ vozrast } {}
	Dnevnik(initializer_list<int> list)
	{
		for (const auto& e : list)
		{
			cout << e << " ";
		}
	}
		
	void print() const
	{
		cout << "���������� �� �������: " << endl;
		cout << "�.�.�: " << name << endl;
		cout << "�������: " << vozrast << endl;
	}

	void printb() {
		for (const auto& value : ocenki) {
			cout << ocenki << ' ';
		}
		std::cout << std::endl;
	}

	//void printb() const
	//{
	//	cout << "������: ";
	//	/*for (auto i = ocenki.begin(); i != ocenki.end(); ++i) {
	//		cout << *i << ' ';
	//	}*/
	//	for (int i = 0; i < ocenki.size(); i++) {
	//		cout << ocenki[i] << ' ';
	//	}
	//}

	
	

};