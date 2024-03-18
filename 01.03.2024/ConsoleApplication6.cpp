#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int ram, go;
	cout << "Введите сторону и высоту(для того чтоб выйти с проекта нажмите 0): ";
	cin >> ram;

	while (ram != 0) {
		cin >> go;
		if (ram == 1) {
			for (int i = 1; i <= go; i++) {
				for (int j = 1; j < i; j++) {
					cout << "  ";
				}
				for (int j = 0; j <= go - i; j++) {
					cout << "*";
				}
				cout << endl;
			}
		
		}
	

		else if (ram == 2) {
			for (int i = 1; i <= go; i++) {
				for (int j = 1; j <= i; j++) {
					cout << "*";
				}
				cout << endl;
			}
		}


		else if (ram == 3) {
			go++;
			for (int i = 1; i <= go / 2; i++) {
				for (int j = 1; j < i; j++) {
					cout << "  ";
				}
				for (int j = 0; j <= go - i - i; j++) {
					cout << "*";
				}
				cout << endl;
			}
		}


		else if (ram == 4) {
			if (go % 2) {
				for (int i = 0; i <= go; i += 2) {
					for (int j = 1; j < go - i; j += 2) {
						cout << "  ";
					}
					for (int j = 0; j <= i; j++) {
						cout << "*";
					}
					cout << endl;
				}
			}
			else {
				for (int i = 1; i <= go; i += 2) {
					for (int j = 1; j < go - i; j += 2) {
						cout << "  ";
					}
					for (int j = 0; j <= i; j++) {
						cout << "*";
					}
					cout << endl;
				}
			}
		}


		else if (ram == 5) {
			go++;
			for (int i = 1; i <= go / 2; i++) {
				for (int j = 1; j < i; j++) {
					cout << "  ";
				}
				for (int j = 0; j <= go - i - i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
			go--;
			if (go % 2) {
				for (int i = 2; i <= go; i += 2) {
					for (int j = 1; j < go - i; j += 2) {
						cout << "  ";
					}
					for (int j = 0; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			}
			else {
				for (int i = 1; i <= go; i += 2) {
					for (int j = 1; j < go - i; j += 2) {
						cout << "  ";
					}
					for (int j = 0; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			}
		}

		else if (ram == 6) {
			for (int i = 1; i <= (go / 2); i++) {
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				for (int j = 1; j <= go - (i * 2); j++) {
					cout << "  ";
				}
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
			if (go % 2) {
				for (int i = go; i > 0; i--) {
					cout << "* ";
				}
				cout << endl;
				for (int i = (go / 2); i > 0; i--) {
					for (int j = 1; j <= i; j++) {
						cout << "* ";
					}
					for (int j = 1; j <= go - (i * 2); j++) {
						cout << "  ";
					}
					for (int j = 1; j <= i; j++) {
						cout << "* ";
					}
					cout << endl;
				}
			}
			else {
				for (int i = (go / 2); i >= 0; i--) {
					for (int j = 1; j <= i; j++) {
						cout << "* ";
					}
					for (int j = 1; j <= go - (i * 2); j++) {
						cout << "  ";
					}
					for (int j = 1; j <= i; j++) {
						cout << "* ";

						cout << endl;
					}
				}
			}
		}

		else if (ram == 7) {
			go++;
			for (int i = 1; i <= go / 2; i++) {
				for (int j = 0; j < i; j++) {
					cout << "*";
				}

				cout << endl;
			}

			if (go % 2) {
				for (int i = -3; i <= (go / 2); i += 2) {
					for (int j = (go / 2); j > i; j -= 2) {
						cout << "*";
					}

					cout << endl;
				}
			}
			else {
				for (int i = -2; i <= go / 2; i += 2) {
					for (int j = (go / 2); j > i + 1; j -= 2) {
						cout << "*";
					}
					cout << endl;
				}
			}
		}
		else if (ram == 8) {
			if (go % 2) {
				for (int i = 1; i < (go + 3) / 2; i++)
				{
					for (int j = go - i; j > 0; j--)
					{
						cout << "  ";
					}
					for (int j = 0; j < i; j++)
					{
						cout << "*";
					}
					cout << endl;
				}

			}
			else {

				for (int i = 1; i < (go + 2) / 2; i++) {
					for (int j = go - i; j > 0; j--)
					{
						cout << "  ";
					}
					for (int j = 0; j < i; j++)
					{
						cout << "*";
					}
					cout << endl;
				}
			}
			for (int i = go / 2; i > 0; i--) {
				for (int j = go - i; j > 0; j--) {
					cout << "  ";
				}
				for (int j = 1; j <= i; j++) {
					cout << "*";
				}
				cout << endl;
			}

		}


		else if (ram == 9) {
			for (int i = go; i >= 0; i--) {
				for (int j = 1; j <= i; j++) {
					cout << "*";
				}
				cout << endl;
			}
		}

		else if (ram == 10) {
			for (int i = 0; i < go + 1; i++)
			{
				for (int j = go - i; j > 0; j--)
				{
					cout << "  ";
				}
				for (int j = 0; j < i; j++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}
		cout << "Введите сторону и высоту(для того чтоб выйти с проекта нажмите 0) ";
		cin >> ram;
	
	}



	}





