int main(int argc, char const *argv[])
{
	int xNumber, yNumber;
	if (mx_isdigit(argv[1]) && mx_isdigit(argv[3])) {
		xNumber = 
	}

	e_operation mathOperation = NULL;
	switch (argv[2]) {
		case "-":
			mathOperation = SUB;
			break;
		case "+":
			mathOperation = ADD;
			break;
		case "*":
			mathOperation = MUL;
			break;
		case "/":
			mathOperation = DIV;
			break;
		case "%":
			mathOperation = MOD;
			break;
		default:
			break;
	}

	e_error errorMessege = INCORRECT_OPERAND;

	if (mathOperation == NULL) {
		switch
	}

	return 0;
}