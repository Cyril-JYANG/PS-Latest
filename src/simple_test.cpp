#include <gtest/gtest.h>
#include <typeinfo>
//#include "gs.cpp"  // Include the source file for testing
extern double F,k,threshold;
extern std::vector<std::vector<double>> u,v;
const int width = 256;                // Width of the grid
const int height = 256;               // Height of the grid
extern void simulateStep();
const int numIterations = 10000;
extern double countElementsAboveThreshold(double threshold);

TEST(type_test, F_k_u_v) {
	//	ASSERT_EQ(typeid(double), typeid(F));
	//	ASSERT_EQ(typeid(double), typeid(k));
	//	ASSERT_EQ(typeid(std::vector<std::vector<double>>), typeid(u));
	//	ASSERT_EQ(typeid(std::vector<std::vector<double>>), typeid(v));
	ASSERT_EQ(typeid(F), typeid(u[0][0]));
	ASSERT_EQ(typeid(k), typeid(v[0][0]));
}

TEST(size_test, u_v) {
	ASSERT_EQ(u.size(), v.size());

	for (size_t i = 0; i < u.size(); i++)
		ASSERT_EQ(u[i].size(), v[i].size());
}

TEST(answer_test, u_v_time0) {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	for (int x = 0; x < width; ++x)
		for (int y = 0; y < height; ++y) {
			u[x][y] = 0.0;
			v[x][y] = 0.0;
		}
	for (int iteration = 0; iteration < numIterations; ++iteration)
		simulateStep();
	ASSERT_EQ(dV, Dv * laplaceV);
	ASSERT_EQ(dU, 1.7009796349221062e-12);
}