#pragma once
using namespace std;

void ShowRules() {
	cout << "������� �����" << endl;
	cout << "������ �������/�������� ������� ������� ����� �����" << endl;
	cout << "����� ������� ����� ��� ����� � ������� �� -333 �� 333" << endl;
	cout << "����� ������� ������� '+','�','�' ���� ������� �� �����������" << endl;
	cout << "'�' - ��� ���������� ������������ �������. ������� ����� - 3 � " << endl;
	cout << "'�' - ��� �������� ������������ ������� - 4 � " << endl;
	cout << "'+' - ��� ��������� ���� ��������� ������� - 3 4 + " << endl;
}
bool Compare(char cr){
	switch (cr)
	{
	case 48:
		return false;
		break;
	case 49:
		return false;
		break;
	case 50:
		return false;
		break;
	case 51:
		return false;
		break;
	case 52:
		return false;
		break;
	case 53:
		return false;
		break;
	case 54:
		return false;
		break;
	case 55:
		return false;
		break;
	case 56:
		return false;
		break;
	case 57:
		return false;
		break;
	case -28:
		return false;
		break;
	case -15:
		return false;
		break;
	case 43:
		return false;
		break;
	case 32:
		return false;
		break;
	case 45:
		return false;
		break;
	default:
		return true;
		break;
	}
}

bool CheckInputOnCorrectChars(std::string _arr)
{
	bool someVariable;
	for (int i = 0; i < _arr.size(); i++)
	{
		someVariable = Compare((int)_arr[i]);
		if (someVariable) {
			std::cout << "�������� ������������ ������, ����-����� �������� �� ���������" << std::endl;
			ShowRules();
			break;
		}
	}
	return someVariable;
}
