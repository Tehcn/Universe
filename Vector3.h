#pragma once

#include <vector>
#include <stdint.h>
#include "Math.h"

class Vector3 {
public:
	Vector3() : x{0}, y{0}, z{0} {};
	Vector3(int64_t x, int64_t y, int64_t z) : x{ x }, y{ y }, z{ z } {};
	Vector3(int64_t a[3]) : x{a[0]}, y{a[1]}, z{a[2]} {};
	Vector3(std::vector<int64_t> a) : x{ a[0] }, y{ a[1] }, z{ a[2] } {};
	~Vector3();
private:
	int64_t x;
	int64_t y;
	int64_t z;
};

inline Vector3::~Vector3() {
	delete& x;
	delete& y;
	delete& z;
}