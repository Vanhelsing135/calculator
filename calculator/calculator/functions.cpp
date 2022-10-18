#include "functions.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

Operation askForOperation() {
	int num_of_operation;
	cout << "enter the number of operation(1-9):  ";
	cin >> num_of_operation;
	while (cin.fail() || num_of_operation < 0 || num_of_operation>9) {
		cin.clear();
		cin.ignore();
		cout << "enter the number of operation(1-9):  ";
		cin >> num_of_operation;
	}
	switch (num_of_operation) {
	case 1: return Operation::Add;
		break;
	case 2: return Operation::Substract;
		break;
	case 3: return Operation::Multiply;
		break;
	case 4: return Operation::Divide;
		break;
	case 5: return Operation::Negate;
		break;
	case 6: return Operation::Exp;
		break;
	case 7: return Operation::Log;
		break;
	case 8: return Operation::Sqrt;
		break;
	case 9: return Operation::Pow;
		break;
	case 0: return Operation::Exit;
		break;
	}
}


bool isUnary(Operation oper) {
	if (oper == Exp || oper == Sqrt || oper == Log || oper == Negate) {
		return true;
	}
	return false;
}


double askForNumber() {
	double num;
	cout << "enter num: ";
	cin >> num;
	return num;
}


double applyUnaryOperation(Operation oper, double x) {
	switch (oper) {
	case Operation::Exp: return exp(x);
		break;
	case Operation::Sqrt: return sqrt(x);
		break;
	case Operation::Log: return log(x);
		break;
	case Operation::Negate: return (-x);
		break;
	}
}


double applyBinaryOperation(Operation oper, double a, double b) {
	switch (oper) {
	case Operation::Substract: return a - b;
		break;
	case Operation::Multiply: return a * b;
		break;
	case Operation::Pow: return pow(a, b);
		break;
	case Operation::Divide: return a - b;
		break;
	case Operation::Add: return a + b;
		break;
	}
	return 0;
}


void printResult(double res) {
	cout << res << endl;
}