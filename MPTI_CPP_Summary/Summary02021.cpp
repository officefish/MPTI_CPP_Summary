#include <iostream>

#include "Summary.h"

#pragma warning( disable : 4101)
#pragma warning( disable : 4305)



int Summary02021() {

/*	
	II 2.1 Declaration. Variable Types	
*/
	std::cout << "Declaration. Variable Types." << std::endl;
/*	
	A variable provides us with named storage that our programs can manipulate. 
	Each variable in C++ has a specific type, which determines the size and layout of the variable's memory; 
	the range of values that can be stored within that memory; and the set of operations that can be applied to the variable.

	The name of a variable can be composed of letters, digits, and the underscore character. 
	It must begin with either a letter or an underscore. Upper and lowercase letters are distinct because C++ is case-sensitive −

	There are following basic types of variable in C++ as explained in last chapter 
*/

/*
	Sr.No			Type& Description

		1
		bool		Stores either value true or false.
							
		2
		char		Typically a single octet(one byte).This is an integer type.
		
		3
		int			The most natural size of integer for the machine.
		
		4			
		float		A single - precision floating point value. 

		5			
		double		A double - precision floating point value.
		
		6
		void		Represents the absence of type.

		7
		wchar_t		A wide character type.
*/

/*
	C++ also allows to define various other types of variables, which we will cover 
	in subsequent chapters like Enumeration, Pointer, Array, Reference, Data structures, and Classes.

	Following section will cover how to define, declare and use various types of variables.
*/ 
		
/*
	A variable definition tells the compiler where and how much storage to create for the variable. 
	A variable definition specifies a data type, and contains a list of one or more variables of that type as follows
*/

/*
	type variable_list;
*/

/*
	Here, type must be a valid C++ data type including char, w_char, int, float, double, bool or any user-defined object, etc., 
	and variable_list may consist of one or more identifier names separated by commas. Some valid declarations are shown here
*/

	int    iX, jX, kX;
	char   cX, chX;
	float  fX, salaryX;
	double dX;

/*
	The line int i, j, k; both declares and defines the variables i, j and k; 
	which instructs the compiler to create variables named i, j and k of type int.

	Variables can be initialized (assigned an initial value) in their declaration.
	The initializer consists of an equal sign followed by a constant expression as follows −
*/

/*
	type variable_name = value;
*/

/*
	Some examples are:
*/
	int a = 3, b = 5;    // declaration of a and b. 
	int d = 3, f = 5;    // definition and initializing d and f. 
	char x = 'x';        // the variable x has the value 'x'.

/*
	Initialization is not an expression, even if look like the same and using same syntax. 
*/
	return 0;
}


// Variable declaration:
extern int aE, bE;
extern int cE;
extern float fE;

void Example() {

	// Variable definition:
	int a, b;
	int c;
	float f;

	// actual initialization
	a = 10;
	b = 20;
	c = a + b;
	f = 70.0 / 3.0; // first time intialization = actually not = operator here!

	// using float can can lead to warning calls such us: warning C4305: =: усечение из "double" в "float"

	// expression
	f = 100.0 / 5.0; // = - is operator in expression

}
/*
	Same concept applies on function declaration where you provide a function name at the time 
	of its declarationand its actual definition can be given anywhere else.For example −
*/

// function declaration
int func();
void example2() {
	// function call
	int i = func();
}

// function definition
int func() {
	return 0;
}

/*
	rValue / lValue
*/

/*
	Lvalues and Rvalues
*/
	
/*
	There are two kinds of expressions in C++ −

	lvalue − Expressions that refer to a memory location is called "lvalue" expression. 
	An lvalue may appear as either the left-hand or right-hand side of an assignment.

	rvalue − The term rvalue refers to a data value that is stored at some address in memory. 
	An rvalue is an expression that cannot have a value assigned to it which means an rvalue 
	may appear on the right- but not left-hand side of an assignment.
*/

/*
	Variables are lvalues and so may appear on the left-hand side of an assignment. 
	Numeric literals are rvalues and so may not be assigned and can not appear 
	on the left-hand side. Following is a valid statement
*/

	int g = 20;

/*
	But the following is not a valid statement and would generate compile-time error −
*/
	// 10 = 20; // error C2106: =: левый операнд должен быть левосторонним значением


