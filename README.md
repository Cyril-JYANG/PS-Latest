# Gray-scott-sim Professional Skills Coursework 1
## The Gray-Scott Model
The Gray-Scott model is a mathematical model used to describe pattern formation in chemical reaction-diffusion systems. This model is commonly employed to simulate the interaction between two reacting substances, where one substance is converted into another. Initially used to describe spot formation on the skin of zebrafish, the Gray-Scott model has found applications in various fields.

Here's a brief overview of the basic equations of the Gray-Scott model:
![image](https://github.com/Cyril-JYANG/PS-Latest/blob/main/Img-Folder/1700057655668.jpg)

Here, u and v represent the concentrations of the two reacting substances, Du and Dv are their diffusion coefficients, 
F is an external input called "feed," and k is an external influence known as "kill."

Initial Conditions:
Initially, u is set to a constant, while v is set to another constant in a specific region, simulating the initial concentration distribution.

Boundary Conditions:
Boundary conditions are typically periodic to simulate a closed system.

Simulation Steps:
The partial differential equations are discretized using numerical methods (such as finite difference methods), and then the system's time evolution is simulated by stepping through time.

Visualization:
Visualization techniques, such as plotting concentration maps or using three-dimensional graphics, can be employed to observe the formation of patterns and stripes in the Gray-Scott model.

![image](https://github.com/Cyril-JYANG/PS-Latest/blob/main/Img-Folder/unnamed.png)

## Prerequisites
C++ compiler

CMake

Googletest (for testing)

## Simulation Parameters
width: Width of the grid (default: 256)

height: Height of the grid (default: 256)

Du: Diffusion rate of U (default: 0.14)

Dv: Diffusion rate of V (default: 0.07)

F: Feed rate (default: 0.03)

k: Kill rate (default: 0.0648)

threshold: Threshold value (default: 0.1)

dt: Time step (default: 0.06)

numIterations: Number of iterations for the simulation (default: 10000)

outputInterval: Output every nth iteration (default: 100)


## Contributors
Ruibo Gai, Tianchen Yan, Jiahao Yang, Zijun Zhang
## Directory structure

```
main filetree
├── /.gtihub/workflows/
│  ├── cmake-single-platform.yml
├── /lmg-Folder
├── /src/
│  ├── CMakeLists.txt
│  ├── gs.cpp
│  ├── simple_test.cpp
├── /third/
│  ├── googletest
└── README.md
```

## To Use
Pull it down and run!
## Tests Overview
This program is mainly to check the validity of parameter u and v. Whether we can get mathematically correct answer from this model would be tested as well.
### Model Parameter Type Matching Test (ModelParameterTypeTest)

This test verifies the compatibility of variable types between the model parameters (F, k) and the elements within the grid vectors (u, v). Whether we can get mathematically correct answer from this model would be tested as well.

Verification: Compares the types using typeid to ensure F, k types match the types of elements within u and v.

Test Method: ASSERT_EQ for type name comparison.


### Grid Size Test (GridSizeTest)

Ensures consistency in the sizes of the grid vectors u and v.

Verification: Compares the sizes of u and v vectors.

Test Method: ASSERT_EQ to verify size equality.


### Zero Initial Conditions Test (ZeroInitialConditionsTest)

Validates the simulation outcome when both u and v are initialized to zero.

Process: Sets initial conditions of u and v to zero.

Simulation Step: Executes a single simulation step.

Verification: Checks the count of elements above a specified threshold.

Assertion: ASSERT_DOUBLE_EQ to ensure the count is zero.


### Running the Tests


### Build the Test Executable:

Compile the project including the test files and Google Test framework.

Ensure the test executable is generated.

### Run the Tests:

Execute the test executable.

Monitor the test output for PASS/FAIL indications for each test case.


### Usage Notes

Ensure all necessary dependencies, including Google Test, are installed and configured.

Review the test output and assertions to confirm correct model behavior under different conditions.

