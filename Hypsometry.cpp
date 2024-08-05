#include "Hypsometry.h"

Hypsometry::Hypsometry() {
}

double Hypsometry::pressure_2_height_0(double P) {
	return - ((R * T0) / (M * g0)) * log(P / P0);
}

double Hypsometry::pressure_2_height_0L(double P) {
	return (T0 / L) * (pow(P / P0, (-L * R) / (M * g0)) - 1);
}

double Hypsometry::pressure_2_height_0g_exact(double P) {
	double K = ((R * T0) / (M * g0)) * log(P / P0);
	return - (re * K) / (K + re);
}

double Hypsometry::pressure_2_height_0g_approx(double P) {
	return 0.5 * re * (pow(P / P0, -2.0 * (R * T0) / (M * g0 * re)) - 1.0);
}

double Hypsometry::pressure_2_height_0Lg_approx(double P) {
	double a = (M * g0 * re) / (2.0 * L * R);
	double b = T0 / L;
	double c = re / 2.0;
	double K = b / c;
	double delta = (b - c) / a;
	double mu = K * pow(P / P0, delta);
	return (c * mu - b) / (1.0 - mu);
}


void Hypsometry::set_P0(double P0_) {
	P0 = P0_;
}

void Hypsometry::set_T0(double T0_) {
	T0 = T0_;
}

void Hypsometry::set_L(double L_) {
	L = L_;
}

void Hypsometry::set_R(double R_) {
	R = R_;
}

void Hypsometry::set_M(double M_) {
	M = M_;
}

void Hypsometry::set_g0(double g0_) {
	g0 = g0_;
}

double Hypsometry::get_P0() {
	return P0;
}

double Hypsometry::get_T0() {
	return T0;
}

double Hypsometry::get_L() {
	return L;
}

double Hypsometry::get_R() {
	return R;
}

double Hypsometry::get_M() {
	return M;
}

double Hypsometry::get_g0() {
	return g0;
}