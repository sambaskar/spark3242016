#!/usr/bin/python

#what does this program supposed to do?
#is this complex enough that I have to worry about the data structure?
#what is the input format?
#what is the output format?

#Is it understandable?

import re

def mysplit(mystring):
    return re.split("([()+-/*])", mystring.replace(" ", ""))
    
yes = set(['yes','y', 'q', 'quit'])

#firstNumber = raw_input("Please input a number: ")
#operator = raw_input ("Pease input the operator: ")
#secondNumber = raw_input ("Please inout the second number: ")
#mathExpression = raw_input("expression please:" )
#print  firstNumber, " ", operator, "", secondNumber
#print mathExpression
#print mathExpression.replace(" ", "")
#splitExpression = re.split(r"[^0-9+*-/]*", mathExpression)
#splitExpression = mysplit(mathExpression)
#print splitExpression
#text = re.sub(r'([a-zA-Z)([+-/*])', r'\1 \2', mathExpression)
#print text

#check program for errors and for proper working
# input sequence
# 5 * 5
# (5 + 5) *5
# 5d + 3s - ERROR
# 5.2 *3
#5.2.2 *3  - ERROR!
# 5+++2 - should be error, but some how it works, so need to fix it!! BUG!!
# These values can be out in a file and read from the file, so automatically this program can be 
#verified  - Unit tests.



while True:
    try:
        mathExpression = raw_input("expression please:" )
        print eval(mathExpression)
    except (NameError, SyntaxError):
        print ("")
        print ("Input error, missing brackets, or incorrect symbols  or alphabets entered")
        print ("Please Try again")

    print("")
    choice = raw_input ("Do you want to quit? y/yes/q/quit to quit,  \nany other character to continue: ")
    print (" ")
    if ( choice in yes) :
        print ("Thanks for using my program")
        break
    else :
        continue
     

