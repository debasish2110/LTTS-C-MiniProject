/**
 * @file myHeader.h
 * @author Debashish Dash (E book on C@domain.com)
 * @brief this header file contains all the functions tha are used in the men method of the main c file
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _MYFUNCH_
#define _MYFUNCH_

/**
 * @brief it will print the cover page after taking userinput
 * 
 */
int Cover_Page();

/**
 * @brief it will print the index page after taking userinput
 * 
 */
int Index();

/**
 * @brief it will print the introduction part of the e book.
 * 
 */
void Introduction();

/**
 * @brief it will print the contents of the declaration part of c programming.
 * 
 */
void C_Declaration();

/**
 * @brief it will print the contents of operators and expressions.
 * 
 */
void Operators_and_Expressions();

/**
 * @brief it will print the contents of input and output.
 * 
 */
void Input_and_Output();

/**
 * @brief it will print the contets of Decision statements of c language.
 * 
 */
void Decision_Statements();

/**
 * @brief it will print the contents of loops.
 * 
 */
void Loops();

/**
 * @brief it will print the contents of Array.
 * 
 */
void Array();

/**
 * @brief it will print the contents of String.
 * 
 */
void String();
/**
 * @brief it will print the contents of Suggestion.
 * 
 */
void Suggestion();

int my_test(int a, int b);
int my_test(int a, int b){
	return a+b;
}

#endif