#include<cmath>

double func_do(double x, double e, int& count, double& fir_no) {
	
	double an = -1 * (pow(x, 2) / 9.0);
	double result = 0;
	double z = 1;
	double fuct = 2;
	double q = -1 * (pow(x, 4) / 81.0);

	if (abs(an) > e) {
		do {
			result += an;
			count += 1;
			z = fuct * (fuct + 1);
			fuct += 2;
			an *= q / z;
		} while (abs(an) > e);
	}

	fir_no = an;
	return result;
}