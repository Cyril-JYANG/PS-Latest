#include <gtest/gtest.h>
#include <typeinfo>
extern double F, k, threshold;
extern std::vector<std::vector<double>> u, v;
const int width = 256;                // Width of the grid
const int height = 256;               // Height of the grid
extern void simulateStep();
extern double countElementsAboveThreshold(double threshold);

TEST(ModelParameterTypeTest, TypeMatch) {
	// F and k should have the same type as the elements of u and v vectors
	ASSERT_EQ(typeid(F).name(), typeid(u[0][0]).name());
	ASSERT_EQ(typeid(k).name(), typeid(v[0][0]).name());
}

// Test case 0.2: Check that the variables u and v are the same size.
TEST(GridSizeTest, SameSize) {
	ASSERT_EQ(u.size(), v.size());
	ASSERT_EQ(u[0].size(), v[0].size());
}

// Test case 0.3: Check that the simulation produces the mathematically correct answer when u = 0 and v = 0.
TEST(ZeroInitialConditionsTest, MathematicallyCorrect) {
	// Set initial conditions to zero
	for (int x = 0; x < width; ++x) {
		for (int y = 0; y < height; ++y) {
			u[x][y] = 0.0;
			v[x][y] = 0.0;
		}
	}

	// Run one simulation step
	simulateStep();

	double re = countElementsAboveThreshold(threshold);
	ASSERT_DOUBLE_EQ(0.0, re);
}
// TEST END.
