/* Calclulator program by Sam Baksar
*REQUIREMENTS
● You commit the code to an online public accessible Git repository (such as Github)
● Handle binary operations, e.g. 5 6, 8 * 4
● The calculator should be able to handle a full arithmetic expression at once, for example:, e.g. 1 + 1 4 * 4
● The library must take Order of Operations into account
● No need to handle parentheses, e.g. ( 1 + 1 4 ) * 4
● Must be extendableso that it accepts userdefined operands

NOT ALLOWED
Use of eval() in PHP or similar functions in other languages that allow you to evaluate the equation in a oneliner

OBJECTIVES​
● Demonstrate skills in OOP code design
● Showcase development best practices
● Demonstrate good algorithmic thinking
*
*/

/* Analysis
* Yes eval in python would have resulted in 1 liner program for this
* In real world if I were tasked to do such a work, unless there was reason not to use it
* I would have opted to use eval - but for this interview will play along the rquirement
*/

/* Handling Pranthesis would have resulted in little more complex, but for the 90 minutes it might be complex
*/

/* First what is the problem?
* A simple calculator that  calculates per order of operations, 
* take care of binary opratrions
* GOOD! Don't have to take care of unary opartions and paranthesis for this project - but need to 
* keep it in mind for further improvement and future cases in design
*Must  be extendeable - so if user wants to expand this to new character - it must be possible!
* The order of precedence is * / % + 1
*
*/

/* Now that I understand the problem,
* first what is the data structure to be used?
*
* first thing that comes to mind is a binary tree
*
*so 5 * 3  = will be represented as (left operrand) operator and (right operator)
*				*
*			5		3
*
*
*  a <op> b - will be represented as 
*
*			<op>
*		a			b
*
*
*so let us see how  5 *3 + 1 - 2 /4 should be represnted? with operator procedence in mind
*step 1 - parse and form a tree
			*
		5		3


*step 2 - parse and add
*
				+
			*		1
		5		3
*
*
*step 3 - parse and subtract

					-
				+		2
			*		1
		5		3
*
*				

step 4

							/
					-
				+		2		4
			*		1
		5		3
*


Once the tree is formed, traverse it and follow the order of prcedence and 
calculate higher order operations (like multiplication and division first)
traverse again to complete the lower order operations.

It is possible to optimize this, but for now keep it un optimized

*/


/* wait a minute, for quick implementation, I see that this tree could be 
* implemented as an array as well
with elements as operator and operand  - so the array could look like
5 *3 + 1 - 2 /4 


 arry 	0 	1	2	3	4	5	6	7	8
		5	*	3	+	1	-	2	/	4

This might be faster way to program within the given time, but might not be extensible.
I might do this for now!
*/

/* Ok got the algo part correct I think, how about the OOP part, and scalable part?
*
*/

/* Before we start - the following test cases should pass
5+6 = 30
5-5 = 0
a + 5 == should error
a $ 5 == should error  
5/0 = should error and should not crap outp
1 + 3 * 5 - 4 /2 = 1 + (3 *5 ) - (4 / 2) = 1 + 15 - 2 = 14 (should be returned)

*/

/* Think about the following after the basic program is done
* if user wants to add # as a user defined operator how to do that?
*/

/*Pseudo code
* 1. Parse expression
* 2. Form a tree as above
* 3. Traverse multipe times or use recrusive function evaluate the complete tree
* 4. Print the results

*Unit test and check the program results with the unit tests written above
* 1. Check the results
* 2. Add user defined operand

*/

/* WAIT A MINUTE - just thought about this!!!
  most programming languages follow operator precedence -
  so in laguage I can just evaluate the expression isn't it?
  NO that does not solve the puprpose of the interview - ok will proceed further
  Sorry for one second distraction
*/

/* C might  not be suitable for OOP design, too late to change to a different language!
but no time to complete here, will attempt in python!!
*/

#include <stdlib.h>
#include <stdio.h>

struct element {
	char operaror;
	element *left;
	elelemtn *right;
}

bool opertorIsValid(char operaror){
	if ((operator == "+") || 
		(operator == "-" ) ||
		(operator == "/") ||
		(operator == "*") {
			return TRUE;
		}
	else 
			return FALSE;
		
}



parseExpression(expr *expr) {
	/* parse expression and make a tree */

}

void main(arc, argv[]) {
	sscanf(
)
	
}




