#include <stdlib.h>
#include<iostream>
#include<random>
using namespace std;

void Help() {
	cout << "------------------------------------------------" << endl;
	cout << "" << endl;
	cout << "Basic integral calculator - 'bcalc'" << endl;
	cout << "Basic float calculator - 'fcalc'" << endl;
	cout << "Int loop - 'loop'" << endl;
	cout << "Version - '-v'" << endl;
	cout << "Random number beetwen x and y - 'random'" << endl;
	cout << "------------------------------------------------" << endl;
}

void bcalcplus(int a, int b) {
	int answer;
	answer = a + b;
	cout << "Answer: " << answer;
}
void bcalcminus(int a, int b) {
	int answer;

	answer = a - b;
	cout << "Answer: " << answer;
}

void fcalcplus(float a, float b) {
	float answer;

	answer = a + b;
	cout << "Answer: " << answer;
}

void fcalcminus(float a, float b) {
	float answer;

	answer = a - b;
	cout << "Answer: " << answer;
}

void loop(int i, int a) {
	int c;
	for (c = i; c < a; c++) {
		cout << c << endl;
	}
}

int main() {
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
	cout << "Welcome!" << endl;
	cout << "Let's get started!" << endl;
	cout << "Print 'help'" << endl;
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
		cout << "First number: " << endl;
		cin >> bcalca;
		cout << "Second number: " << endl;
		cin >> bcalcb;
		cout << "Operator(plus/minus): " << endl;
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
		cout << "First number: " << endl;
		cin >> fcalca;
		cout << "Second number: " << endl;
		cin >> fcalcb;
		cout << "Operator(plus/minus): " << endl;
		cin >> bcalcoperator;
		cout << "" << endl;

		if (bcalcoperator == "plus") {
			fcalcplus(fcalca, fcalcb);
		}
		else if (bcalcoperator == "minus") {
			fcalcminus(fcalca, fcalcb);
		}
	}

	if (answer == "loop") {
		cout << "" << endl;
		cout << "First number: " << endl;
		cin >> i;
		cout << "Second number: " << endl;
		cin >> a;
		cout << "" << endl;
		loop(i, a);
	}

	if (answer == "-v") {
		cout << "version of cmdcalc - " << version << endl;
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

	if (answer == "random") {
		int x;
		int w;
		cout << "" << endl;
		cout << "if you choose between 20 and 10(or something like that) program will be crash" << endl;
		cout << "First number: " << endl;
		cin >> x;
		cout << "Second number: " << endl;
		cin >> w;
		cout << "" << endl;
		random_device rd;
		mt19937 engine(rd());
		uniform_int_distribution<> dist(x, w);
		auto random_number = dist(engine);
		cout << "Random number beetwen " << x << " and " << w << " is : " << random_number << endl;
	}
	goto a;
}