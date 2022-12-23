#include<cmath>

double func_while(double x, double e, int& count, double& fir_no) {

	double an = -1 * (pow(x, 2) / 9.0);
	double result = 0;
	double z = 1;
	double fuct = 2;
	double q = - 1 * (pow(x, 4) / 81.0);

	while (abs(an) > e) {
		result += an;
		count += 1;
		z = fuct * (fuct + 1);
		fuct += 2;
		an *= q / z;
	}

	fir_no = an;
	return result;
}