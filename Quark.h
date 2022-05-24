#pragma once

#include "General.h"

class Quark {
public:
	Quark();
	~Quark();
private:
	float charge;
	Vector3 spin;
};