/*
	https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
*/

#include "Summary.h"

#include <iostream>
using std::cout;
using std::endl;


	/*
		C++ Declarations and definitions
		
		There is a difference between declaration and definition in C++

		Nevertheless, they are up to the same goal, the only difference is in how abstractly the variable is supposed to be declared, 
		the declaration takes place in the header files and global variables, and the definition takes place inside individual functions.
	*/

	/*
		Variable Definition in C++
		A variable definition tells the compiler where and how much storage to create for the variable. 
		A variable definition specifies a data type, and contains a list of one or more variables of that type as follows −

		type variable_list;
	*/

	/*
		Variable Declaration in C++
		A variable declaration provides assurance to the compiler that there is one variable existing with the given type and name 
		so that compiler proceed for further compilation without needing complete detail about the variable. A variable declaration 
		has its meaning at the time of compilation only, compiler needs actual variable definition at the time of linking of the program.

		A variable declaration is useful when you are using multiple files and you define your variable in one of the files which will 
		be available at the time of linking of the program. You will use extern keyword to declare a variable at any place. 
		Though you can declare a variable multiple times in your C++ program, but it can be defined only once in a file, 
		a function or a block of code.
	*/

	/* 
		All definitions are declarations, but not all declarations are definitions! 
	*/


// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int Summary0202() {
	
	
	// Variable definition:
	int a, b;
	int c;
	float f;
	
	/*
		Declaration syntax:
		(type) (name) [= (initial value)];
	*/

	char a;
	char b = 'b';

	/*
		C++ Identifiers

		A C++ identifier is a name used to identify a variable, function, class, module, or any other user-defined item. 
		An identifier starts with a letter A to Z or a to z or an underscore (_) followed by zero or more letters, underscores, and digits (0 to 9).

		C++ does not allow punctuation characters such as @, $, and % within identifiers. 
		C++ is a case-sensitive programming language. Thus, Manpower and manpower are two different identifiers in C++.

		Here are some examples of acceptable identifiers −

		mohd       zara    abc   move_name  a_123
		myname50   _temp   j     a23b9      retVal


	*/

	/*
		C++ Keywords

		The following list shows the reserved words in C++. 
		These reserved words may not be used as constant or variable or any other identifier names.

			asm			else		new					this
			auto		enum		operator			throw
			bool		explicit	private				true
			break		export		protected			try
			case		extern		public				typedef
			catch		false		register			typeid
			char		float		reinterpret_cast	typename
			class		for			return				union
			const		friend		short				unsigned
			const_cast	goto		signed				using
			continue	if			sizeof				virtual
			default		inline		static				void
			delete		int			static_cast			volatile
			do			long		struct				wchar_t
			double		mutable		switch				while
			dynamic_cast			namespace			template

	*/

	/*
		C++ offers the programmer a rich assortment of built-in as well as user defined data types. 
		Following table lists down seven basic C++ data types −

		Type	Keyword
		Boolean	bool
		Character	char
		Integer	int
		Floating point	float
		Double floating point	double
		Valueless	void
		Wide character	wchar_t

		Several of the basic types can be modified using one or more of these type modifiers −

		signed
		unsigned
		short
		long
	*/

	/*
		The following table shows the variable type, how much memory it takes to store the value in memory, 
		and what is maximum and minimum value which can be stored in such type of variables.

		Type					Typical Bit Width		Typical Range
		char					1byte					-127 to 127 or 0 to 255
		unsigned char			1byte					0 to 255
		signed char				1byte					-127 to 127
		int						4bytes					-2147483648 to 2147483647			[-2^31, 2^31 - 1] / prime number
		unsigned int			4bytes					0 to 4294967295
		signed int				4bytes					-2147483648 to 2147483647
		short int				2bytes					-32768 to 32767
		unsigned short int		2bytes					0 to 65,535
		signed short int		2bytes					-32768 to 32767
		long int				8bytes					-2,147,483,648 to 2,147,483,647
		signed long int			8bytes					same as long int
		unsigned long int		8bytes					0 to 4,294,967,295
		long long int			8bytes					-(2^63) to (2^63)-1
		unsigned long long int	8bytes					0 to 18,446,744,073,709,551,615
		float					4bytes
		double					8bytes
		long double				12bytes
		wchar_t					2 or 4 bytes			1 wide character

	*/

	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

	/*
		typedef Declarations
		You can create a new name for an existing type using typedef. Following is the simple syntax to define a new type using typedef −

		typedef type newname; 
		For example, the following tells the compiler that feet is another name for int −

	*/

	typedef int feet;
	
	/*
		Now, the following declaration is perfectly legal and creates an integer variable called distance −
	*/

	feet distance;

	/*
		C++ Literals
		https://www.tutorialspoint.com/cplusplus/cpp_constants_literals.htm

		Constants refer to fixed values that the program may not alter and they are called literals.

		Constants can be of any of the basic data types and can be divided into Integer Numerals, 
		Floating-Point Numerals, Characters, Strings and Boolean Values.

		Again, constants are treated just like regular variables except that their values cannot be modified after their definition.
	
	*/

	/*
		Integer Literals
		An integer literal can be a decimal, octal, or hexadecimal constant. 
		A prefix specifies the base or radix: 0x or 0X for hexadecimal, 0 for octal, and nothing for decimal.

		An integer literal can also have a suffix that is a combination of U and L, for unsigned and long, respectively. 
		The suffix can be uppercase or lowercase and can be in any order.

		Here are some examples of integer literals −
	*/

212;         // Legal
215u;        // Legal
0xFeeL;      // Legal
// 078;         // Illegal: 8 is not an octal digit
// 032UU;       // Illegal: cannot repeat a suffix

/* Following are other examples of various types of Integer literals */

85;         // decimal
0213;       // octal
0x4b;       // hexadecimal
30;         // int
30u;        // unsigned int
30l;        // long
30ul;       // unsigned long*/

/*
	Floating-point Literals
	A floating-point literal has an integer part, a decimal point, a fractional part, and an exponent part.
	You can represent floating point literals either in decimal form or exponential form.

	While representing using decimal form, you must include the decimal point, the exponent, or both and while representing
	using exponential form, you must include the integer part, the fractional part, or both. The signed exponent is introduced by e or E.

	Here are some examples of floating-point literals −
*/

3.14159;       // Legal
314159E-5L;    // Legal
//510E          // Illegal: incomplete exponent
//210f          // Illegal: no decimal or exponent
//.e55          // Illegal: missing integer or fraction

/* Boolean Literals

	true/false - both keywords and literals
*/

/*
	Character Literals

	Character literals are enclosed in single quotes. If the literal begins with L (uppercase only),
	it is a wide character literal (e.g., L'x') and should be stored in wchar_t type of variable .
	Otherwise, it is a narrow character literal (e.g., 'x') and can be stored in a simple variable of char type.

	A character literal can be a plain character (e.g., 'x'), an escape sequence (e.g., '\t'), or a universal character (e.g., '\u02C0').

	There are certain characters in C++ when they are preceded by a backslash they will have special meaning
	and they are used to represent like newline (\n) or tab (\t).

	Here, you have a list of some of such escape sequence codes −

	Escape	sequence		Meaning
	\\						\character
	\'						'character
	\"						"character
	\?						?character
	\a						Alert or bell
	\b						Backspace
	\f						Form feed
	\n						Newline
	\r						Carriage return
	\t						Horizontal tab
	\v						Vertical tab
	\ooo					Octal number of one to three digits
	\xhh . . .				Hexadecimal number of one or more digits

*/
"\\ \* \' \? \a \b \f \n \r \t \v \000 ";


return 0;
}

/*
	Defining Constants
	There are two simple ways in C++ to define constants −

	Using #define preprocessor.

	Using const keyword.
*/

/* The #define Preprocessor */

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

/*

	The const Keyword
	You can use const prefix to declare constants with a specific type as follows −

	const type variable = value;
	Following example explains it in detail −
*/
int ConstExample () {
	const int  C_LENGTH = 10;
	const int  C_WIDTH = 5;
	const char C_NEWLINE = '\n';
	int area;

	area = C_LENGTH * C_WIDTH;
	cout << area;
	cout << C_NEWLINE;
	return 0;
}
