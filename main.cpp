#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

void insert();
void show();

int num = 0;

int *quiz = new int[num];
int *midterm = new int[num];
int *final = new int[num];

int main () {
	system("cls");
	char select;
	cout << string(30, '=') << endl;
	cout << setw(15) << "Menu" << endl;
	cout << string(30, '=') << endl;
	cout << " 1.Input Student records\n";
	cout << " 2.View all student records\n";
	cout << " 3.Exit\n";
	cout << "Select menu : ";
	cin >> select;
	switch (select) {
		case '1':
			insert();
			break;
		case '2':
			show();
			break;
		case '3':
			exit(0);
		default:
			main();
	}
	system("pause");
	return 0;
}

void insert() {
	system("cls");
	cout << "Input Number of Student : ";
	cin >> num;
	for (int a = 0; a < num; a++) {
		cout << "Number " << a+1 << endl;
		cout << " Input Quiz: ";
		cin >> quiz[a];
		cout << " Input Midterm: ";
		cin >> midterm[a];
		cout << " Input Final: ";
		cin >> final[a];
	}
	cout << string(30 ,'=') << endl;
	char select;
	cout << "Enter (1 = Back 2 = Insert): ";
	cin >> select;
	switch (select) {
		case '2':
			insert();
		default:
			main();
	}
}


void show() {
	system("cls");
	cout << string(40, '-') << endl;
	cout << left << setw(10) << "StdID" << setw(10) << "Quiz" << setw(10) << "Midterm" << setw(10) << "Final" << endl;
	cout << string(40, '-') << endl;
	for (int i = 0; i < num; i++) {
		cout << left << setw(10) << i+1 << setw(10) << quiz[i] << setw(10) << midterm[i] << setw(10) << final[i] << endl;
	}
	cout << string(40, '-') << endl;
	char select;
	cout << "Enter (1 = Back 2 = Show): ";
	cin >> select;
	switch (select) {
		case '2':
			show();
		default:
			main();
	}
}
