# Convert Age To Days

Source of this challenge [edabit.com](https://edabit.com/challenge/bL7hSc6Zh4zZJzGmw)

## Step 1: Define Problem

Create a program that takes the age and returns the age in days.

## Step 2: Iterate And Translate

* There are 365 days in a year
* So to solve this you need to multiply the persons age by 365

Helpful flowchart links

* [flowchart.js](https://github.com/adrai/flowchart.js)
* [Basic flow chart guide](https://creately.com/blog/diagrams/flowchart-guide-flowchart-tutorial/)

```flowchart
start=>start
end=>end
io1=>inputoutput: Read age from user
op1=>operation: Calculate days old the person is
io2=>inputoutput: Report to user their age in days

start->io1
io1->op1
op1->io2
io2->end
```

## Step 3: Solve With Programming Languages

### Notes on any special procedure or setup for any of my testing languages

Javascript was the strangest. I needed to import a nodejs module named
'readline' so that I could read from stdin. This was a good starting
project.

## Step 4: Refactoring Code

### Notes on what I learned from refactoring my code

I didn't find much, I just made a few adjustments so that all the prompts and
output messages were spelled the same.
