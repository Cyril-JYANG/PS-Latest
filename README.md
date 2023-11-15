# Gray-scott-sim Professional Skills Coursework 1

## What can our program do?

## Contributors
Jiahao Yang, Ruibo Gai, Tianchen Yan, Zijun Zhang
## Directory structure

```
filetree
├── .gtihub/workflows
├── /src/
│  ├── CMakeLists.txt
│  ├── gs.cpp
│  ├── simple_test.cpp
├── /third/
│  ├── googletest
└── README.md
```

## How to build and use this program?

##Tests Overview
##Model Parameter Type Matching Test (ModelParameterTypeTest)
This test verifies the compatibility of variable types between the model parameters (F, k) and the elements within the grid vectors (u, v).
Verification: Compares the types using typeid to ensure F, k types match the types of elements within u and v.
Test Method: ASSERT_EQ for type name comparison.

##Grid Size Test (GridSizeTest)
Ensures consistency in the sizes of the grid vectors u and v.
Verification: Compares the sizes of u and v vectors.
Test Method: ASSERT_EQ to verify size equality.

##Zero Initial Conditions Test (ZeroInitialConditionsTest)
Validates the simulation outcome when both u and v are initialized to zero.
Process: Sets initial conditions of u and v to zero.
Simulation Step: Executes a single simulation step.
Verification: Checks the count of elements above a specified threshold.
Assertion: ASSERT_DOUBLE_EQ to ensure the count is zero.

##Running the Tests
Follow the steps below to run the tests:
##Build the Test Executable:
Compile the project including the test files and Google Test framework.
Ensure the test executable is generated.
##Run the Tests:
Execute the test executable.
Monitor the test output for PASS/FAIL indications for each test case.

##Usage Notes
Ensure all necessary dependencies, including Google Test, are installed and configured.
Adjust test parameters or thresholds as needed for specific validation scenarios.
Review the test output and assertions to confirm correct model behavior under different conditions.
