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
	typedef							Псевдоним типа. Возьми уже известный тебе тип и ассоциируй его с новым, мною указанным типом.

	inline							Возьми этот кусок кода и вставь его в место вызова функции на этапе компиляции

	virtual							Используй эту функцию в зависимости от того контекста, в которой ее вызываешь. 
									Если ее переопределят наследники, используй код наследников.

	explicit						Используй только явные преобразования типов, с этой переменной никакого синтаксического сахара.

	friend							Относись к этой функции как к публичному методу класса. В ее теле можешь обращаться к приватным полям.

	constexpr						Я тебе посчитаю все еще на этапе компеляции, но сделай так чтобы это поле или функция не при каких обстоятельствах
									не вызывала ошибок. Поосторожнее со мной.
									https://habr.com/ru/post/228181/

	consteval,						(C++20) Я безотлагательная функция, это значит что я посчитаюсь еще на этапе компиляции. У меня куча ограничений.
	
	constinit						Я переменная и тоже посчитаюсь на этапе компиляции, при условии что просуществую в глобальной области видимости 
									на всем протяжении работы программы
									https://ravesli.com/c-20-dva-novyh-klyuchevyh-slova-consteval-i-constinit/


	auto							Я могу быть чем угодно, в зависимости от контекста, используй меня во всяких там for each для удобства

	register						Данный спецификатор указывает компилятору хранить значение переменной не в памяти, а в регистре процессора. 
									Иной трактовкой спецификатора register служит подсказка компилятору, что данный объект используется очень интенсивно.
									http://www.quizful.net/post/cpp-keywords-usage

	static							Ты будешь помнить обо мне на всем протяжении работы программы. Доступ ко мне будет только в области видимости файла.
									https://habr.com/ru/post/527044/

	extern							Я расширяю область видимости этой переменной. Ее теперь должны видеть все. 
									Спецификатор extern указывает, что переменная обладает внешними связями.  

	volatile						Меня можно изменить неявным способом, не используя оператор присвоения. 
									Например, каким-то процессом за пределами программы.

	mutable							Я могу изменять значения переменных, которые компилятор считает константами. Например мной можно помечать переменные,
									которые нужно менять в методах константного типа.

	thread_local					Храни меня в локальном хронилище. 
									Спецификатор класса хранения — это рекомендуемый способ указания локального хранилища потока для объектов и членов класса.
									https://docs.microsoft.com/ru-ru/cpp/parallel/thread-local-storage-tls?view=msvc-160
*/

	return 0;
}


