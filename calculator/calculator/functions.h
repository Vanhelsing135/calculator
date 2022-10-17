using namespace std;

enum Operation {
	Add = 1,
	Substract = 2,
	Multiply = 3,
	Divide = 4,
	Negate = 5, // -x
	Exp = 6,
	Log = 7,
	Sqrt = 8,
	Pow = 9,
	Exit = 0
};

Operation askForOperation();
bool isUnary(Operation);
double askForNumber();
double applyUnaryOperation(Operation oper, double x);
double applyBinaryOperation(Operation oper, double a, double b);
void printResult(double res);