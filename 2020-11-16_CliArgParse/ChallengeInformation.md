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
parseargs=>operation: Parse args

arg_version=>condition: Version arg found?
arg_help=>condition: Help arg found?
arg_print=>condition: Print arg found?
arg_print_text=>condition: Print command text found?

show_version=>inputoutput: Print version 1.0.0
show_help=>inputoutput: Usage:
(-h, --help, shows this help and exits)
(-v, --version, prints version and exits)
(-p, --print [text], Text to print to screen)
check_printtext=>condition: Text included with print command?
show_print_argmissing=>inputoutput: You did not enter any text with the (-p, --print) option
show_print=>inputouput: You printed [text] with the print command

start->argcheck
argcheck(yes)->parseargs
argcheck(no)->show_help->end

parseargs->arg_version
arg_version(yes)->show_version->end
arg_version(no)->arg_help
arg_help(yes)->show_help->end
arg_help(no)->arg_print
arg_print(yes)->check_printtext
arg_print(no)->end
```

## Step 3: Solve With Programming Languages

### Notes on any special procedure or setup for any of my testing languages

## Step 4: Refactoring Code

### Notes on what I learned from refactoring my code

