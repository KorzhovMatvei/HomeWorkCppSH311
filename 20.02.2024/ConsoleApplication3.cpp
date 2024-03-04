#include <iostream>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Rus");
	

	// задание 1

	/*string str;
	do {
		cout << "введите символ: ";
		cin >> str;
		if (str.size() > 1)
			cout << " ввести  только один символ";
	} while (str.size() > 1);
	char buf = str[0];
	if (buf > 47 && buf < 58) {
		cout << "ваш символ - это число";
		return 0;
	}
	if (buf > 64 && buf < 91 || buf > 96 && buf < 123) {
		cout << "ваш символ - буква";
		return 0;
	}
	if (buf == 33 || buf == 44 || buf == 46 || buf == 63) {
		cout << "ваш символ - это знак препинания";
		return 0;
	}
	else cout << "ваш символ - это нечто другое";
*/


	//// задание 2


	//
	/*int rasam, oper, oper2;
	float Beeline, Megafone, TELE2;
	Beeline = 0.02;
	Megafone = 0.01;
	TELE2 = 0.03;
	do {
		cout << "choose your mobile operator: "<<"\n"<<"выберите своего оператора мобильной связи: "<<"\n1 - Beeline; 2 - Megafone; 3 - TELE2\nYour operator? \nВаш оператор? ";
		cin >> oper;
		cout << "choose mobile operator of your companion:\n"<<"выберите оператора мобильной связи вашего собеседника:\n"<<"1-Beeline; 2-Megafone; 3-TELE2\nYour interlocutor's operator? "<<"\n"<<"Оператор вашего собеседника? ";
		cin >> oper2;
		if (oper < 1 || oper > 3 || oper2 < 1 || oper2 > 3) {
			cout << "error  unknown communication operator\n"<<"ошибка неизвестного оператора связи\n";
		}
	} while (oper < 1 || oper > 3 || oper2 < 1 || oper2 > 3);
	if (oper == oper2) {
		cout << "your call is free\n"<<"ваш звонок бесплатный ";
		return 0;
	}
	cout << "input call duration(min): \n"<< "длительность разговора(мин): \n";
	cin >> rasam;
	if (oper == 1){
		cout << "the cost of your conversation:\n " << "стоимость вашего разговора: " << rasam * Beeline << "$";
		
	}
	if (oper == 2) {
		cout << "the cost of your conversation:\n " << "стоимость вашего разговора: " << rasam * Megafone << "$";
		
	}
	if (oper == 3) {
		cout << "the cost of your conversation:\n "<<"стоимость вашего разговора: " << rasam * TELE2 << "$";
		
	}*/



	// задание 3


	/*int sal, later, kod;

	cout << "how much Vasya wants to get?($):\n"<<"сколько Вася хочет получить?($): ";
	cin >> sal;
	do {
		cout << "how many times Vasya has been late?: \n"<<"сколько раз Вася опаздывал?: ";
		cin >> later;
		if (later < 0) {
			cout << "error\nwrong amount of lateness\n"<<"ошибка неправильное количество опозданий: ";
		}
	} while (later < 0);
	if (later < 3) {
		cout << "Vasya must make-Вася должен сделать  " << sal * 2 << " lines of code - строк кода<< endl";
	}
	if (later >= 3) {
		cout << "Vasya must make-Вася должен сделать  \n" << (sal * 2) + ((later / 3) * 40) << " lines of code - строк кода" << endl;
	}

	do {
		cout << "how many lines of kode Vasya has made?: \n" << "сколько строк кода сделал Вася?";
		cin >> kod;
		cout << "how much Vasya wants to get?($):\n "<<"сколько Вася хочет получить?($): ";
		cin >> sal;
		if ((((kod - (sal * 2)) / 20) / 3) < 0) {
			cout << "Vasya has been late too many times"<<"\nВася слишком много раз опаздывал " << endl;
		}
	} while ((((kod - (sal * 2)) / 20) / 3) < 0);
	if ((((kod - (sal * 2)) / 20) / 3) >= 0)
	cout << "Vasya may not be late more than: - Вася может опоздать не более чем:\n" << (((kod - (sal * 2)) / 20) / 3) << " times-раз" << endl;

	cout << "how many lines of kode Vasya has made?: \n"<<"сколько строк кода сделал Вася? ";
	cin >> kod;
	cout << "how many times Vasya has been late?: \n"<<"сколько раз Вася опаздывал?: ";
	cin >> later;
	if ((kod / 2) < ((later / 3) * 20)) {
		cout << "Vasya must pay:\n "<<"Вася должен заплатить: " << ((later / 3) * 20) - (kod / 2) << "$";

	}
	if ((kod / 2) == ((later / 3) * 20)) {
		cout << "you must not pay to Vasya\n"<<"вы не должны платить Васе ";

	}
	if ((kod / 2) > ((later / 3) * 20)) {
		cout << "you must pay to Vasya:\n "<<"вы должны заплатить Васе: " << ((kod / 2) - ((later / 3) * 20)) << "$";

	}*/

}

