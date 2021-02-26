#include "Summary.h"

#pragma warning( disable : 4101)
#pragma warning( disable : 4305)

#include <iostream>
using std::cout;
using std::endl;


int Summary02023() {

/* 
	II 2.3 Declaration. Specifiers. 
*/
	cout << "Declaration. Specifiers." << endl;
/*
	Such us:

	explicit
	extern
	friend
	inline
	mutable
	noexept ...
*/


/*
	Declarations introduce (or re-introduce) names into the C++ program. 
	Each kind of entity is declared differently. 
	Definitions are declarations that are sufficient to use the entity identified by the name.
*/

/*
	A declaration is one of the following:

	Function definition														https://en.cppreference.com/w/cpp/language/function#Function_definition
	Template declaration (including Partial template specialization)		https://en.cppreference.com/w/cpp/language/templates
	Explicit template instantiation											https://en.cppreference.com/w/cpp/language/class_template#Explicit_instantiation
	Explicit template specialization										https://en.cppreference.com/w/cpp/language/template_specialization
	Namespace definition													https://en.cppreference.com/w/cpp/language/namespace
	Linkage specification													https://en.cppreference.com/w/cpp/language/language_linkage
	Attribute declaration (attr ;) (since C++11)
	Empty declaration (;) (since C++11)
	A function declaration without a decl-specifier-seq: *(1)
	block-declaration (a declaration that can appear inside a block), which, in turn, can be one of the following:
		asm declaration														https://en.cppreference.com/w/cpp/language/asm
		type alias declaration (since C++11)								https://en.cppreference.com/w/cpp/language/type_alias
		namespace alias definition											https://en.cppreference.com/w/cpp/language/namespace_alias
		using declaration													https://en.cppreference.com/w/cpp/language/using_declaration
		using directive														https://en.cppreference.com/w/cpp/language/namespace#Using-directives
		using-enum-declaration (since C++20)								https://en.cppreference.com/w/cpp/language/enum#Using-enum-declaration
		static_assert declaration (since C++11)								https://en.cppreference.com/w/cpp/language/static_assert
		opaque enum declaration (since C++11)								https://en.cppreference.com/w/cpp/language/enum
		simple declaration

*/

/*
	Simple declaration.	
*/

/*
	A simple declaration is a statement that introduces, creates, and optionally initializes one or several identifiers, typically variables.
	
	attr (since C++11)	-	sequence of any number of attributes
	decl-specifier-seq	-	sequence of specifiers (see below).
	init-declarator-list	-	comma-separated list of declarators with optional initializers. 
								init-declarator-list is optional when declaring a named class/struct/union or a named enumeration
*/

/*
	A structured binding declaration is also a simple declaration. https://en.cppreference.com/w/cpp/language/structured_binding
*/

/*
	Specifiers.
*/

/*
	Declaration specifiers /decl-specifier-seq/ is a sequence of the following whitespace-separated specifiers, in any order:
	
	the typedef specifier.			If present, the entire declaration is a typedef declaration and each declarator 
									introduces a new type name, not an object or a function.
									https://en.cppreference.com/w/cpp/language/typedef

	function specifiers:			only allowed in function declarations
		inline,						https://en.cppreference.com/w/cpp/language/inline
		virtual,					https://en.cppreference.com/w/cpp/language/virtual
		explicit					https://en.cppreference.com/w/cpp/language/explicit
	
	the inline specifier			is also allowed on variable declarations. (since C++17)

	the friend specifier			allowed in class and function declarations.
									https://en.cppreference.com/w/cpp/language/friend

	the constexpr specifier			only allowed in variable definitions, function and function template declarations, 
									and the declaration of static data members of literal type. (since C++11)
									https://en.cppreference.com/w/cpp/language/constexpr

	the consteval specifier			only allowed in function and function template declarations. (since C++20)
									https://en.cppreference.com/w/cpp/language/consteval

	the constinit specifier			only allowed in declaration of a variable with static or thread storage duration. 
									At most one of the constexpr, consteval, and constinit specifiers 
									is allowed to appear in a decl-specifier-seq. (since C++20)
									https://en.cppreference.com/w/cpp/language/constinit

	storage class specifier *(2)	Only one storage class specifier is allowed, 
									except that thread_local may appear together with extern or static.
									https://en.cppreference.com/w/cpp/language/storage_duration

		auto						automatic storage duration.(until C++11)

		register					automatic storage duration. 
									Also hints to the compiler to place the object in the processor's register. (deprecated)(until C++17)

		static						static or thread storage duration and internal linkage.

		extern						static or thread storage duration and external linkage.

		thread_local				thread storage duration.(since C++11)

		mutable						does not affect storage duration or linkage. See const/volatile for the explanation.

									Only one storage class specifier may appear in a declaration except that thread_local 
									may be combined with static or with extern (since C++11).

	Type specifiers					/type-specifier-seq/ a sequence of specifiers that names a type. 
									The type of every entity introduced by the declaration is this type, 
									optionally modified by the declarator (see below). 
									This sequence of specifiers is also used by type-id. Only the following specifiers 
									are part of type-specifier-seq, in any order:

		class specifier				https://en.cppreference.com/w/cpp/language/class

		enum specifier				https://en.cppreference.com/w/cpp/language/enum

		simple type specifier		char, char8_t (since C++20), char16_t, char32_t (since C++11), 
									wchar_t, bool, short, int, long, signed, unsigned, float, double, void

		auto						https://en.cppreference.com/w/cpp/language/auto

		decltype specifier			(since C++11)https://en.cppreference.com/w/cpp/language/decltype

		previously declared class name (optionally qualified)
		
		previously declared enum name (optionally qualified)
		
		previously declared typedef-name or type alias (since C++11) (optionally qualified)
		
		template name with template arguments (optionally qualified, optionally using template disambiguator)

		template name without template arguments (optionally qualified): see class template argument deduction(since C++17)

		elaborated type specifier	https://en.cppreference.com/w/cpp/language/elaborated_type_specifier

			the keyword class, struct, or union, followed by the identifier (optionally qualified), 
			previously defined as the name of a class, struct, or union.
			
			the keyword class, struct, or union, followed by template name with template arguments 
			(optionally qualified, optionally using template disambiguator), previously defined as the name of a class template.
			
			the keyword enum followed by the identifier (optionally qualified), 
			previously declared as the name of an enumeration.

		typename specifier	https://en.cppreference.com/w/cpp/language/dependent_name

		cv qualifier		https://en.cppreference.com/w/cpp/language/cv
			
			const			an object whose type is const-qualified, or a non-mutable subobject of a const object. 
							Such object cannot be modified: attempt to do so directly is a compile-time error, 
							and attempt to do so indirectly (e.g., by modifying the const object through a reference 
							or pointer to non-const type) results in undefined behavior. 
			
			volatile		an object whose type is volatile-qualified, or a subobject of a volatile object, 
							or a mutable subobject of a const-volatile object.

			const volatile  an object whose type is const-volatile-qualified, a non-mutable subobject of a const volatile object, 
							a const subobject of a volatile object, or a non-mutable volatile subobject of a const object. 
							Behaves as both a const object and as a volatile object.

*/

/*
	*(1) A function declaration without a decl-specifier-seq:

		 attr(optional) declarator ;

		 attr (since C++11)	-	sequence of any number of attributes
		 declarator	-	A function declarator.

		 This declaration must declare a constructor, destructor, or user-defined type conversion function.
		 It can only be used as part of a template declaration, explicit specialization, or explicit instantiation.
*/


/*
	*(2) The auto specifier			was only allowed for objects declared at block scope or in function parameter lists. 
									It indicated automatic storage duration, which is the default for these kinds of declarations. 
									The meaning of this keyword was changed in C++11.(until C++11)

		The register specifier		is only allowed for objects declared at block scope and in function parameter lists. 
									It indicates automatic storage duration, which is the default for these kinds of declarations. 
									Additionally, the presence of this keyword may be used as a hint for the optimizer to store the value 
									of this variable in a CPU register. This keyword was deprecated in C++11.(until C++17)
		
		The static specifier		is only allowed in the declarations of objects (except in function parameter lists), 
									declarations of functions (except at block scope), and declarations of anonymous unions. 
									When used in a declaration of a class member, it declares a static member. 
									When used in a declaration of an object, it specifies static storage duration 
									(except if accompanied by thread_local). When used in a declaration at namespace scope, 
									it specifies internal linkage.

		The extern specifier		is only allowed in the declarations of variables and functions (except class members or function parameters). 
									It specifies external linkage, and does not technically affect storage duration, 
									but it cannot be used in a definition of an automatic storage duration object, 
									so all extern objects have static or thread durations. In addition, 
									a variable declaration that uses extern and has no initializer is not a definition.

		The thread_local keyword	is only allowed for objects declared at namespace scope, objects declared at block scope, 
									and static data members. It indicates that the object has thread storage duration. 
									It can be combined with static or extern to specify internal or external linkage 
									(except for static data members which always have external linkage), respectively, 
									but that additional static doesn't affect the storage duration.(since C++11)

*/

/*
	Одним предложением:
*/

/*
	typedef							Type alias. Take the type you already know and associate it with the new type I indicated.

	inline							Take this piece of code and paste it where the function is called at compile time

	virtual							Use this function depending on the context in which you call it. 
									If inheritors override it, use the inheritors code.

	explicit						Use only explicit type conversions, no syntactic sugar with this variable.

	friend							Treat this function as a public method of the class. In its body, you can access private fields.

	constexpr						I'll count it for you still at the stage of compilation, 
									but make sure that this field or function is not under any circumstances did not cause errors. 
									Be careful with me.
									https://habr.com/ru/post/228181/

	consteval,						(C++20) I am an immediate function, which means that I will be counted at the compilation stage. 
									I have a lot of restrictions.
	
	constinit						I am a variable and will also be counted at the compilation stage, 
									provided that I exist in the global scope throughout the program
									https://ravesli.com/c-20-dva-novyh-klyuchevyh-slova-consteval-i-constinit/


	auto							I can be anything, depending on the context, use me in all sorts of for each for convenience

	register						This specifier tells the compiler to store the value of a variable not in memory, but in a processor register.
									Another interpretation of the register specifier is a hint to the compiler that this object is being used very heavily.
									http://www.quizful.net/post/cpp-keywords-usage

	static							You will remember me throughout the program. Access to me will only be within the scope of the file.
									https://habr.com/ru/post/527044/

	extern							I am expanding the scope of this variable. Everyone should see it now.
									The extern specifier indicates that the variable has external links. 

	volatile						I can be changed implicitly without using the assignment operator.
									For example, by some process outside the program.

	mutable							I can change the values of variables that the compiler considers constants. For example, I can mark variables,
									which need to be changed in constant type methods.

	thread_local					Keep me in the local chronicle.
									The storage class specifier is the recommended way to specify stream local storage for objects and class members.
									https://docs.microsoft.com/ru-ru/cpp/parallel/thread-local-storage-tls?view=msvc-160
*/

	return 0;
}


