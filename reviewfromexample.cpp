
#include <iostream>

using namespace std;

int main() {

	int arr[5] = {0, 1, 2, 3, 4};

	for (int i = 0; i <= 5; i++) {
		
		for (int j = 0; j < i ; j++) {
			cout << arr[j]; 

		}
		cout << endl;
	}

}
/*  OUTPUT:  

0
01
012
0123
01234

*/

/*                                               --  VARIABLE SCOPE EXAMPLE  --
#include <iostream>

using namespace std;

int main() {

	int a = 3;

	if (a > 0) {
		int a = 10;						THIS WILL CAUSE OUTPUT TO BE "10 3"
		cout << a << " ";

	}
	cout << a;
	
}

*/

/*
#include <iostream>

using namespace std;

int main() {

	int a = 3;

	if (a > 0) {
		a = 10;							THIS WILL CAUSE OUTPUT TO BE "10 10"
		cout << a << " ";

	}
	cout << a;

}

*/
								
/*
				-- example exam --


question 1:

output: Hello
The operation is ternary operator. How it operates is if the first expression is true then the whole is the value of the second expression.
If the first expression is false then the whole is the value of the third expression. In this case,
the whole value is the value of the third expression because the first expression turned out to be false.
this is due to "hi" being lexicographically larger than "hello"

if (s1 < s2) s3 = s1;
else s3 = s2;

-

question 2:

Increment operator adds one to the operand. If it is in prefix form, the value of the operand in that line is the new incremented value.
If it is in suffix form, the value of the operand in that line is the old value before it was incremented.

This code generates: 4 5 -2

It generates this because in line 2 a is equal to 3 due to it being incremented in suffix form and b is equal to 5 
due to it being incremented in prefix form. 
Therefore, the expression in line 2 is evaluated as c = 3 - 5.

-

question 3:

The difference between while and do-while looping constructs is that in do-while the body of the loop is always executed at least once,
then it evaluates the loop expression. In while looping, the loop expression is evaluated before the body is executed.

int i = 0
while (i < 10) {
	cout << i << ' ';
	i++;
	}

-

question 4:

"Break" statements exit the innermost loop. "Continue" ends the execution of the body and re-evaluates the loop expression.
output: 0 1 2 3 4 5 

If break is replaced by continue the output will be: 0 1 2 3 4 5 10
This is because if it is replaced by continue it will circle back to the loop expression and then go on, making it skip over the cout << i << " ";
When i is 6-9 it will not output i because it executes the if statement which causes continue to be executed. This makes it circle back to 
the loop expression and start the body again.
When continue is ran when i reaches 10 it will not run the body and go to the last line which just outputs i.

-

question 5:

Variable scope is the place in the program where the variable can be used. The scope
of a variable is declared inside a block, including if-block is this block.
The variable a inside the if-block is different from the variable a outside of it.
The code outputs: 10.0 3
This is because the variable scope of double a is only the if-block. cout << a << " "; in line 4 outputs 
the if-block scope of a. the cout << a; in line 6 outputs the outside block scope of a.

-

question 6:

Parameter passing disciplines we studied are call-by-value and call-by-reference.
In call by value the parameter and argument are 2 different variables. Parameter is initialized
to the value of argument and change of parameters value does not affect the argument's value.
In call by reference the parameter and argument are the same variable, they refer to the same memory location.

The code invokes two functions. function1 is called by value and function2 is called by reference.
In both cases the parameter is modified, but in the case of call by reference the modification affects the argument.
The output is: 3 5 4 5

-

question 7:

bool found = false
for (int i = 0; i < SIZE; i++)
	if(myarray[i] == number)
		found = true;
if (found)
	cout << "FOUND";
else 
	cout << "NOT FOUND";

This works through the application of the iterate and keep track idiom.
The for loop sifts through the array from the first element in the array to the last element in the array and checks with the 
if statement if "number" is equal to the value of whichever element it is at. 

-

--- some vocab ---

compiler - translates high level to low level language

include directive - tells compiler where to find certain items about the program

statement - single unit of execution, each statement ends with ;

semantics - meaning of programming constructs

variable - named memory location

<< - insertion operator

>> - extraction operator

initialization - explicitly assigning initial value to a variable

block - sequence of statements enclosed in curly brackets

ternary operator - operator accepting 3 operands. ex: c = (a < b) ? a : b;

increment - increase by 1 ++

decrement - decrease by 1 --

multiple inclusion protection - #ifndef #define x_hpp #endif





*/
