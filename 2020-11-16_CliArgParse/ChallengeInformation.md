# Cli Argument Parser Application

Source of this challenge: me! I want to get a good baseline for
CLI apps in all of these languages and use them going forwards.

## Step 1: Define Problem

Create a program that

* Shows the user program usage if no arguments
* Parses an array of arguments matching them to their proper flags
* Create these 3 flags
  * -h, --help which prints the help (same as no arguments)
  * -v, --version prints the version of the program 1.0.0 in this case
  * -p, --print which will print the passed argument to console

## Step 2: Iterate And Translate

This problem is mostly a syntax problem for each language.

Helpful flowchart links

* [flowchart.js](https://github.com/adrai/flowchart.js)
* [Basic flow chart guide](https://creately.com/blog/diagrams/flowchart-guide-flowchart-tutorial/)

```flowchart
start=>start
end=>end
argcheck=>condition: Arg count > 0
OptionCheck_help=>condition: Help Option Included
option_help=>inputoutput: Usage
(-v, --version, Print the apllication version)
(-h, --help, Print this help message)
(-p, --print [text], print the text to the screen
OptionCheck_version=>condition: Version Option Included
option_version=>inputoutput: Print app version 1.0.0

OptionCheck_print=>condition: Print option included with valid argument
option_print=>inputoutput: Print [text] to screen
option_print_error=>inputoutput: Error no arg included


start->argcheck
argcheck(yes)->OptionCheck_help
argcheck(no)->option_help->end

OptionCheck_help(yes)->option_help->end
OptionCheck_help(no)->OptionCheck_version

OptionCheck_version(yes)->option_version->end
OptionCheck_version(no)->OptionCheck_print

OptionCheck_print(yes)->option_print->end
OptionCheck_print(no)->option_print_error->end
```

## Step 3: Solve With Programming Languages

### Notes on any special procedure or setup for any of my testing languages

## Step 4: Refactoring Code

### Notes on what I learned from refactoring my code

