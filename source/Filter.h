#pragma once

#include <array>
#include <cmath>

enum FilterModes
{
	onePole,
	twoPole,
	fourPole,
	stateVariable,
	numFilterModes
};

class OnePoleFilter
{
public:
	double Process(double dt, double input, double cutoff, bool highPass = false);

private:
	double a = 0.0;
};

class TwoPoleFilter
{
public:
	double Process(double dt, double input, double cutoff, bool highPass = false);

private:
	double a = 0.0;
	double b = 0.0;
};

class FourPoleFilter
{
public:
	double Process(double dt, double input, double cutoff, bool highPass = false);

private:
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double d = 0.0;
};

class StateVariableFilter
{
public:
	double Process(double dt, double input, double cutoff, bool highPass = false);

private:
	double pi = 2 * acos(0.0);
	double band = 0.0;
	double low = 0.0;
};

class DualFilterBase
{
public:
	void Process(double dt, double inL, double inR, double cutoff, double &outL, double &outR, bool highPass = false) {}
};

template<class T>
class DualFilter : public DualFilterBase
{
public:
	void Process(double dt, double inL, double inR, double cutoff, double &outL, double &outR, bool highPass = false)
	{
		outL = left.Process(dt, inL, cutoff, highPass);
		outR = right.Process(dt, inR, cutoff, highPass);
	}

private:
	T left;
	T right;
};

class MultiFilter
{
public:
	void SetMode(FilterModes m) { mode = m; }
	void Process(double dt, double &l, double &r, double cutoff, bool highPass = false);

private:
	FilterModes mode = FilterModes::onePole;
	std::array<DualFilterBase, numFilterModes> filters = {
		DualFilter<OnePoleFilter>(),
		DualFilter<TwoPoleFilter>(),
		DualFilter<FourPoleFilter>(),
		DualFilter<StateVariableFilter>()
	};
	std::array<double, numFilterModes> mix = {0.0, 0.0, 0.0, 0.0};
};