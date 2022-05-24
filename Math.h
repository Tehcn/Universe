#pragma once

namespace Math {
	template<class T>
	T pow(T n, T p) {
		T s = n;
		if (p == 0) return 0;
		else if (p == 1) return n;
		else if (p < 0) for (T i = 1; i < -p; i++) n /= s;
		else if (p > 0) for (T i = 1; i < p; i++) n *= s;
		return n;
	}

	template<class T, typename F>
	T Σ(T n, T i, F&& f) {
		for()
	}
	
	static float hbar = 6.62607015f * (Math::pow<float>(10, -34));
}

template<class T>
T e(T n) {

}

// tests
void test() {

}