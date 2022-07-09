#include "Number.h"

int Number::drawNumber()//losowanie liczb
{
	static std::default_random_engine re{ std::random_device{}() };
	using Dist = std::uniform_int_distribution<int>;
	static Dist num{};
	return num(re, Dist::param_type{ low,high });
}