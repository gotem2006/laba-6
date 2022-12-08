#include<iostream>
#include<locale>
#include<limits>
#include <windows.h>
using namespace std;


class Double
{
public:
	double doub;

	void zero()
	{
		doub = 0;
	}
	void GetDoub()
	{
		cout << "Введите значение:";
		cin >> doub;
		
	}
	double showDoub()
	{
		cout << "Переменная равна:" << doub;
	}
	int integerDoub()
	{
		int doub;
	}
	void summ(Double doub1, Double doub2)
	{
		cout << "Результат:" << doub1.doub + doub2.doub << endl;

	}
};
class date
{
public:
	int month, day, year;
	void gateDate()
	{
		char stop;
	metka1:
		cout << "Введите дату:";
		cin >> month >> stop >> day >> stop >> year;
		if (month > 12)
		{
			cout << "Месяцев не может быть больше чем 12!" << endl;
			goto metka1;
		}
		if (day > 31)
		{
			cout << "Дней не может быть больше чем 31!" << endl;
			goto metka1;
		}
		if ((month == (4, 6, 9, 11)) and (day > 30))
		{
			cout << "В этом месяце всего 30 дней!" << endl;
			goto metka1;
		}
		if ((month == 2) and (day > 28))
		{
			cout << "В феврале всего 28 дней!" << endl;
			goto metka1;
		}


	}
	void showdate()
	{
		cout << "Дата:" << month << "." << day << "." << year << endl;
	}
};
class employee
{
private:
	enum etype
	{
		СЕКРЕТАРЬ,
		ЛАБОРАНТ,
		МЕНЕДЖЕР,
		БУХГАЛТЕР,
		РУКОВОДИТЕЛЬ,
		ИСЛЕДОВАТЕЛЬ
	};
	etype post;
	char letter;
	date date2;

public:
	int number;
	float salary;
	void getdata()
	{
		
		cout << "Введите номер сотрудника:";
		cin >> number;
		cout << "Введите оклад сотрудника:";
		cin >> salary;
	}
	void putdata(employee informat[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			int d = 1;
			cout << "Номер " << d << " сотрудника: " << informat[i].number << endl;
			cout << "Оклад: " << informat[i].salary << endl;
			d += 1;
		}
	}
	void getemploy()
	{
		char dvoe2;
		cout << "Введита дату приема сотрудника:";
		cin >> date2.month >> dvoe2 >> date2.day >> dvoe2 >> date2.year;
		cout << "Введите номер сотрудника:";
		cin >> number;
		cout << "Введите оклад сотрудника:";
		cin >> salary;
		cout << "Выбирите перевую букву должности сотрудника(ЛАБОРАНТ, СЕКРЕТАРЬ, МЕНЕДЖЕР, БУХГАЛТЕР, РУКОВОДИТЕЛЬ, ИСЛЕДОВАТЕЛЬ):";
		cin >> letter;
		switch (letter)
		{
		case 'Л': 
			post = ЛАБОРАНТ; 
			break;
		case 'С': 
			post = СЕКРЕТАРЬ;
			break;
		case 'М': 
			post = МЕНЕДЖЕР; 
			break;
		case 'Б':
			post = БУХГАЛТЕР; 
			break;
		case 'Р': 
			post = РУКОВОДИТЕЛЬ; 
			break;
		case 'И':
			post = ИСЛЕДОВАТЕЛЬ;
			break;
		}
	}
	void putemploy()const
	{
		cout << "Дата приема сотрудника:" << date2.month << ":" << date2.day << ":" << date2.year << endl;
		cout << "Номер сотрудника:" << number << endl;
		cout << "Оклад сотрудника:" << salary << endl;
		switch (post)
		{
		case ЛАБОРАНТ:
			cout << "Должность сотрудника: ЛАБОРАНТ" << endl;
			break;
		case СЕКРЕТАРЬ:
			cout << "Должность сотрудника: СЕКРЕТАРЬ" << endl;
			break;
		case МЕНЕДЖЕР: 
			cout << "Должность сотрудника: МЕНЕДЖЕР" << endl;
			break;
		case БУХГАЛТЕР: 
			cout << "Должность сотрудника: БУХГАЛТЕР" << endl;
			break;
		case РУКОВОДИТЕЛЬ: 
			cout << "Должность сотрудника: РУКОВОДИТЕЛЬ" << endl; 
			break;
		case ИСЛЕДОВАТЕЛЬ:
			cout << "Должность сотрудника: ИСЛЕДОВАТЕЛЬ" << endl;
			break;
		}

	}
};
class Time
{
public:
	int hour, minutes, seconds;

	void nul()
	{
		hour = 0;
		minutes = 0;
		seconds = 0;
	}
	void getTime()
	{
		char stop;
		metka2:
		cout << "Введите время:";
		cin >> hour >> stop >> minutes >> stop >> seconds;
		if (minutes > 59)
		{
			cout << "В минут не может быть больше чем 60!";
			goto metka2;
		}
		if (seconds > 59)
		{
			cout << "В секундах нем может быть больше чем 60!";
			goto metka2;
		}
	}
	void sumtime(Time one, Time two)
	{
		Time sum;
		sum.hour = one.hour + two.hour;
		sum.minutes = one.minutes + two.minutes;
		sum.seconds = one.seconds + two.seconds;
		if (sum.seconds > 60)
		{
			sum.seconds = sum.seconds - 60;
			sum.minutes += 1;
		}
		if (sum.minutes > 60)
		{
			sum.minutes = sum.minutes - 60;
			sum.hour += 1;
		}
		cout << "Сумма равна:" << sum.hour << ":" << sum.minutes << ":" << sum.seconds << endl;
	}
};



int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	cout <<  "Введите номер задания:";
	cin >> a;
	switch (a)
	{
	case 1:
	{
		Double d1, d2, d3, d4;
		d1.GetDoub();
		d2.GetDoub();
		d3.summ(d1, d2);
		return main();
	}
	case 2:
	{
		int const size = 3;
		employee information[size];
		for (int i = 0; i < size; i++)
		{
			information[i].getdata();
		}
		information->putdata(information, size);
		return main();
	}
	case 3:
	{
		date data;
		data.gateDate();
		data.showdate();
		return main();
	}
	case 4:
	{
		Time t1, t2, t3;
		t1.getTime();
		t2.getTime();
		t3.sumtime(t1, t2);
		return main();
	}
	case 5:
	{
		int const size3 = 3;
		employee sotrud[size3];
		for (int i = 0; i < size3; i++)
		{
			sotrud[i].getemploy();
		}
		for (int i = 0; i < size3; i++)
		{
			sotrud[i].putemploy();
		}
	}

	}

}
