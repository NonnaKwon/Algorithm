#include <iostream>
#include <string>
using namespace std;

double calScore(string score) {
	double result;
	switch (score.at(0)) {
	case 'A':
		result = 4.0;
		break;
	case 'B':
		result = 3.0;
		break;
	case 'C':
		result = 2.0;
		break;
	case 'D':
		result = 1.0;
		break;
	case 'F':
		return 0.0;
	}

	if (score.at(1) == NULL || score.at(1) == '0') {
		return result;
	}
	else if (score.at(1) == '+') {
		return result + 0.5;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double result;
	double sum = 0.0;
	double cal = 0.0;

	for (int i = 0; i < 20; i++) {
		string input[3];
		cin >> input[0] >> input[1] >> input[2];
		
		if (input[2].at(0) == 'P') {
			continue;
		}
		sum += stod(input[1]);
		cal += (stod(input[1]) * calScore(input[2]));
	}

	printf("%1.6lf", cal / sum);
	return 0;
}


