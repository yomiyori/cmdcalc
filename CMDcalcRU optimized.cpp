#include <locale>
#include <windows.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
void Help() {
	cout << "------------------------------------------------" << endl;
	cout << "" << endl;
	cout << "������� ������������ ������������ - 'bcalc'" << endl;
	cout << "������� ����� ����������� - 'fcalc'" << endl;
	cout << "������ - '-v'" << endl;
	cout << "------------------------------------------------" << endl;
}
void bcalcplus(int a, int b) {
	int answer;
	answer = a + b;
	cout << "�����: " << answer;
}

void bcalcminus(int a, int b) {
	int answer;

	answer = a - b;
	cout << "�����: " << answer;
}

void fcalcplus(float a, float b) {
	float answer;

	answer = a + b;
	cout << "�����: " << answer;
}

void fcalcminus(float a, float b) {
	float answer;

	answer = a - b;
	cout << "�����: " << answer;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int bcalca;
	int bcalcb;
	float fcalca;
	float fcalcb;
	int i;
	int a;
	string version;
	string bcalcoperator;
	version = "0.1 alpha";
	cout << "" << endl;
	cout << "-------------------" << endl;
	cout << "" << endl;
	cout << "����� ����������!" << endl;
	cout << "����� �����!" << endl;
	cout << "������ 'help'''" << endl;
	cout << "" << endl;
	cout << "-------------------" << endl;
	cout << "" << endl;
	a:
	string answer;
	cin >> answer;
	if (answer == "Help"){
	     Help();
	}else if(answer == "help") {
	    Help();
	}
	if (answer == "bcalc") {
		cout << "" << endl;
		cout << "������ �����: " << endl;
		cin >> bcalca;
		cout << "������ �����: " << endl;
		cin >> bcalcb;
		cout << "��������(����/�����): " << endl;
		cin >> bcalcoperator;
		cout << "" << endl;
		if (bcalcoperator == "plus") {
			bcalcplus(bcalca, bcalcb);
		}
		else if (bcalcoperator == "minus") {			
			bcalcminus(bcalca, bcalcb);
		}
	}
	if (answer == "fcalc") {
		cout << "" << endl;
		cout << "������ �����: " << endl; 
		cin >> fcalca;
		cout << "������ �����: " << endl;
		cin >> fcalcb;
		cout << "��������(����/�����): " << endl;
		cin >> bcalcoperator;
		cout << "" << endl;

		if (bcalcoperator == "plus") {
			fcalcplus(fcalca, fcalcb);
		}
		else if (bcalcoperator == "minus") {
			fcalcminus(fcalca, fcalcb);
		}

	}
	if (answer == "-v") {
		cout << "������ CMDCalc - " << version << endl;
	}
	if (answer == "secret") {
		cout << "   _______________                        |*\_/*|________" << endl;
		cout << "  |  ___________  |     .-.     .-.      ||_/-\_|______  |" << endl;
		cout << "  | |           | |    .****. .****.     | |           | |" << endl;
		cout << "  | |   0   0   | |    .*****.*****.     | |   0   0   | |" << endl;
		cout << "  | |     -     | |     .*********.      | |     -     | |" << endl;
		cout << "  | |   \___/   | |      .*******.       | |   \___/   | |" << endl;
		cout << "  | |___     ___| |       .*****.        | |___________| |" << endl;
		cout << "  |_____|\_/|_____|        .***.         |_______________|" << endl;
		cout << "   _|__|/ \|_|_.............*.............._|________|_" << endl;
		cout << "'   / ********** \                          / ********** \'" << endl;
		cout << "' /  ************  \                      /  ************  \'" << endl;
		}
	if(answer == "secondsecret") {
        cout << "_00000000_0000000" << endl;
		cout << "_0000000000000000" << endl;	
		cout << "__00000000000000" << endl;	
		cout << "____00000000000" << endl;	
		cout << "_______00000" << endl;	
		cout << "_________0" << endl;	
		cout << "________*__000000___00000" << endl;	
		cout << "_______*__00000000_0000000" << endl;	
		cout << "______*___0000000000000000" << endl;	
		cout << "______*___0000000000000000" << endl;	
		cout << "_______*_____00000000000" << endl;	
		cout << "________*_______00000" << endl;	
		cout << "_________*________0" << endl;	
		cout << "000000___00000___*" << endl;	
		cout << "00000000_0000000___*" << endl;	
		cout << "0000000000000000____*" << endl;	
		cout << "_00000000000000_____*" << endl;	
		cout << "___00000000000_____*" << endl;	
		cout << "______00000_______*" << endl;	
		cout << "________0________*" << endl;		
}
	goto a;
}
