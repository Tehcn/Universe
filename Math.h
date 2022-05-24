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

	template<class T>
	T sum(T n, T l, T&& f) {
		T result = n;
		for(int i=0;i<=l;i++) result += f<T>(n);
		return result;
	}

	template<class T>
	T mul(T n, T l, T&& f) {
		T result = n;
		for(int i=0;i<=l;i++) result *= f<T>(n);
		return result;
	} 

	template<class T>
	T factorial(T n) {
		T result = 1;
		for(int i=1;i<n;i++) result *= i;
		return result;
	}
	
	static float hbar = 6.62607015f * (Math::pow<float>(10, -34));
}

template<class T>
T e(T n) {
	return 1 / Math::factorial(n);
}

// tests
void test() {
	float test_result = Math::sum<float>(1, 5, *e);
}
