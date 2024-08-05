#ifndef HYPSOMETRY
#define HYPSOMETRY

#include <cmath>

class Hypsometry {
	public:
		Hypsometry();
		double pressure_2_height_0(double P);
		double pressure_2_height_0L(double P);
		double pressure_2_height_0g_exact(double P);
		double pressure_2_height_0g_approx(double P);
		double pressure_2_height_0Lg_approx(double P);

		void set_P0(double P0_);
		void set_T0(double T0_);
		void set_L(double L_);
		void set_R(double R_);
		void set_M(double M_);
		void set_g0(double g0_);

		double get_P0();
		double get_T0();
		double get_L();
		double get_R();
		double get_M();
		double get_g0();

	private:
		double P0 = 101325; // Pascal
		double T0 = 288.15; // Kelvin
		double L = -0.0065; // Kelvin/meter (valid upto 11 Km)
		double R = 8.3144594; // Joule/(mol. Kelvin)
		double M = 0.0289644; // Kg/mol
		double g0 = 9.80665; // meter/second^2
		double re = 6356766; // meter
};

#endif