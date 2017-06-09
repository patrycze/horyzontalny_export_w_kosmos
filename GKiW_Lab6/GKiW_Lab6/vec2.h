#pragma once

/******************************************************************************/

// 2D mathematical vector. T can be any basic numeric C++ type.
template<typename T> struct vec2 {
	T x;
	T y;

	// Sets both x and y to 0.
	vec2();

	// Sets both x and y to the given value.
	vec2(T both);

	// Sets x and y separately.
	vec2(T x, T y);

	// Create a vector using another vector.
	vec2(const vec2& original);

	// Create a vector using another vector of a different type.
	template <typename R>
	vec2(const vec2<R>& original);


	// Assignment operation.
	vec2& operator=(const vec2& right);


	// Compound assignment: addition.
	vec2& operator+=(const vec2& right);

	// Compound assignment: subtraction.
	vec2& operator-=(const vec2& right);

	// Compound assignment: multiplication.
	vec2& operator*=(const vec2& right);

	// Compound assignment: division.
	vec2& operator/=(const vec2& right);


	// Arithmetic operator: addition.
	const vec2 operator+(const vec2& other) const;

	// Arithmetic operator: subtraction.
	const vec2 operator-(const vec2& other) const;

	// Arithmetic operator: multiplication.
	const vec2 operator*(const vec2& other) const;

	// Arithmetic operator: division.
	const vec2 operator/(const vec2& other) const;
};


extern template struct vec2<short>;
extern template struct vec2<int>;
extern template struct vec2<long>;
extern template struct vec2<long long>;

extern template struct vec2<unsigned short>;
extern template struct vec2<unsigned int>;
extern template struct vec2<unsigned long>;
extern template struct vec2<unsigned long long>;

extern template struct vec2<float>;
extern template struct vec2<double>;
extern template struct vec2<long double>;