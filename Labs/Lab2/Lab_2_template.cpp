/***
 * CSE 2010 Fall 2023
 * Lab #{n}
 * {Lizbeth Jimenez} {007670332}
 * {22 October 2023}
 * 
 * {To oragnize code into functions and use different functions that will return data types or objects. }
 * 
 * {The most challenging was getting Github, I am still struggling so I am using VS studio. I am trying
 * to open the templates on the browser but it doesnt let me and it says theres an error that I will 
 * have to look into. Another problem was oraganizng code, i have a hard time with function names 
 * that I believe I will quickly learn.Also runnng the code the compile code given to us was not working
 * but i plan to find out soon through the lectures. }
 * 
***/

#include <iostream>
#include <string>
#include <cassert>
using namespace std;
/**
* @brief power(): calculates and returns the base to the power of
exponent
*
* @param base int: base number that is positive
* @param exponent int: exponent that is positive that the base is raised
to
* @return int
*/
int power(int base, int exponent){
assert(base >= 0);
assert(exponent >= 0);
int power_output = 1;
for(int i = 0; i < exponent; i++){
power_output *= base;
}
return power_output;
}

/**
* @brief floorDivision(): calculates and returns the dividend / divisor
using for loops
*
* @param dividend int: whole number to be dividend that is positive
* @param divisor int: whole number that is positive to divide the
dividend by
* @return int
*/

// write floorDivision function here
int floorDivision(int & dividend, int & divisor){
int floor_div_output = 0;
while (dividend - divisor >= 0) {
dividend -= divisor; // dividend = dividend - divisor;
floor_div_output += 1;
}
return floor_div_output;
}
/**
* @brief modDivision(): returns the remainder from dividend / divisor
*
* @param dividend int: whole number to be dividend that is positive
* @param divisor int: whole number that is positive to divide the
dividend by
* @return int
*/

int modDivision(int dividend, int divisor){
int mod_output = dividend;
while (mod_output - divisor >= 0) {
mod_output -= divisor; // dividend = dividend - divisor;
}
return mod_output;
}

/**
* @brief print(): prints out the statement "Output of {operation} between
{x}
* and {y} is {output}"
*
* @param operation string: which should be any of the following: power,
floorDivision,
* modDivision
* @param x int: first variable that is positive
* @param y int: second variable that is positive
* @param output int: output of the operation
*/

void print(string operation, double output,int x, int y){
cout << "Output of " << operation << " between " << x << " and " << \
y << " is : " << output << endl;
}

/**
* @brief op(): returns the name of the operation based on the following
cases:
* 1 : power
* 2 : floorDivision
* 3 : modDivision
* All other cases: invalid
* This function supplies the operation to print()
* @param selection int: ranging from 1 to 3 that specifies the operation.
All other cases results
* in "invalid"
* @return string
*/

string operation(int selection){
if (selection ==1){
return "power";
} else if (selection == 2){
return "floorDivision";
} else if (selection == 3){
return "modDivision";
} else {
return "invalid";
}
}
int main()
{

// test input for power
int x = 2;
int y = 5;
int base = x;
int exponent = y;
// power
int power_output = power(base, exponent);

string op = operation(1);
print(op ,power_output, base, exponent);
// test input for floor and modulos
x = 65;
y = 11;
// floor division
int dividend = x;
int divisor = y;
int floor_div_output = floorDivision(dividend, divisor);

op = operation(2);
print(op ,floor_div_output, dividend, divisor);
// reset test input for modulos division
dividend = x;
divisor = y;

// modules division
int mod_output = modDivision(dividend, divisor);

op = operation(3);
print(op, mod_output, dividend, divisor);

// 