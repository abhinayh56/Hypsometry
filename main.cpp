#include <iostream>
#include <fstream>
#include "Hypsometry.h"

using namespace std;

Hypsometry hypsometry;

int main() {
	ofstream file(".\\Log\\data.log");
	file << "P, z_0, z_0L, z_0g_exact, z_0g_approx, z_0Lg_approx" << endl;

	for (int P = 101325; P >= 26437; P = P - 50) {
		double z_0 = hypsometry.pressure_2_height_0(P);
		double z_0L = hypsometry.pressure_2_height_0L(P);
		double z_0g_exact = hypsometry.pressure_2_height_0g_exact(P);
		double z_0g_approx = hypsometry.pressure_2_height_0g_approx(P);
		double z_0Lg_approx = hypsometry.pressure_2_height_0Lg_approx(P);

		cout << P << ", " << z_0 << ", " << z_0L << ", " << z_0g_exact << ", " << z_0g_approx << ", " << z_0Lg_approx << endl;
		file << P << ", " << z_0 << ", " << z_0L << ", " << z_0g_exact << ", " << z_0g_approx << ", " << z_0Lg_approx << endl;
	}
	
	return 0;
}