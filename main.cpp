#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <stdexcept>
#include "InputChecker.h"
using namespace std;
int main() {
	system("chcp 1251>nul");
	std::string someString;
	vector<string> items;
	vector<int> total;
	string item;
	std::cout << "������ �������" << std::endl;
	ShowRules();
	while (true) {
		while (someString.length() == 0) {
			std::getline(std::cin, someString);
		}
		if (CheckInputOnCorrectChars(someString) == false) {
			istringstream is(someString);
			while (is >> item) {
				items.push_back(item);
			}
			for (int i = 0; i < items.size(); i++)
			{
				if (items[i] == "+") {
					if (total.size() >= 2) {
						total.push_back(total[total.size() - 1] + total[total.size() - 2]);
					}
					else {
						cout << "��� �������� �������� ���������, ����� ��� �������� ��� �������� ���� �������, �� ��� ����� ����� 2 ����� �� '+' ��� ������ ��" << endl;
						ShowRules();
						someString = "";
						total.clear();
						items.clear();
					}
				}
				else if (items[i] == "�") {
					if (total.size() >= 1)
						total.pop_back();
					else {
						std::cout << "��� ��������� �������, ��������� ������� �� ���� �����, ����-����� �������� �� ���������" << std::endl;
						ShowRules();
						someString = "";
						total.clear();
						items.clear();
					}
				}
				else if (items[i] == "�") {
					if (total.size() >= 1)
						total.push_back(total[total.size() - 1] * 2);
					else {
						std::cout << "��� ������� �������, ��������� ������� �� ���� �����, ������� �� ���� ������� ��� �� �����, ����-����� �������� �� ���������" << std::endl;
						ShowRules();
						someString = "";
						total.clear();
						items.clear();
					}
				}
				else {
					if (std::stoi(items[i]) < -333 || std::stoi(items[i]) > 333) {
						cout << "���� � ����� �������� �� ��� ����������� ��������" << endl;
						ShowRules();
						someString = "";
						total.clear();
						items.clear();
					}
					else
						total.push_back(std::stoi(items[i]));
				}
			}
			if (someString != "") {
				break;
			}
		}
		else 
			someString = "";
	}
	int sum = 0;
	for (size_t i = 0; i < total.size(); i++)
	{
		sum += total[i];
	}
	std::cout << "ʳ������ ������� = "<< sum << std::endl;
	return 0;
}
