#pragma once
using namespace std;

void ShowRules() {
	cout << "Правила вводу" << endl;
	cout << "Кожний рахунок/операцію потрібно вводити через пробіл" << endl;
	cout << "Можна вводити тільки цілі числа в діапазоні від -333 до 333" << endl;
	cout << "Можна вводити символи '+','с','д' інші символи не приймаються" << endl;
	cout << "'с' - для скасування попереднього рахунку. Приклад вводу - 3 с " << endl;
	cout << "'д' - для подвоєння попереднього рахунку - 4 д " << endl;
	cout << "'+' - для додавання двох попередніх рахунків - 3 4 + " << endl;
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
			std::cout << "Присутній недопустимий символ, будь-ласка повторіть за прикладом" << std::endl;
			ShowRules();
			break;
		}
	}
	return someVariable;
}
