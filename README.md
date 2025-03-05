# FizzBuzz

This sample code shows various algorithms to solve FizzBuzz using Swift and C. Statement of the [FizzBuzz](https://imranontech.com/2007/01/24/using-fizzbuzz-to-find-developers-who-grok-coding/) problem:

> Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” instead of the number, and for the multiples of five print “Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”.
 
Type the following to build and run the Swift and C versions:
```
swift run FizzBuzz-C
swift run FizzBuzz-Swift
```
or to build and work on the executable directly:
```
swift build
.build/debug/FizzBuzz-C
.build/debug/FizzBuzz-Swift
```

You can double-click the `Package.swift` file to open in Xcode.

> Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” instead of the number, and for the multiples of five print “Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”.

This repository uses Swift, C, and maybe other languages to try various solutions for FizzBuzz. Generally people say they get points for originality (using an esoteric language feature), brevity (smallest possible code), or performance.

This repository uses Xcode projects, with a different scheme and target for each programming language (Swift and C, presently.) Within Xcode, choose `fizzBuzz-C` from the scheme pop-up for C, or `fizzBuzz-Swift` accordingly. You can also build and run from the command line

FizzBuzz is often used in technical interviews to see if people can simply reason about the problem, and write working code. This could simply be writing `if` statements in a loop. But beyond that basic use, it is a fun coding playground.

Also note that the strict interpretation of the instructions are to print the numbers out, except specifically to NOT print the number for instances where Fizz or Buzz apply. Some implementation are more fun or more pretty if the number always prints. This is technically "wrong" (the best kind of wrong) but as long as it is noted in the sample, can make for pretty output.


## Run from within Terminal or a shell

**For the Swift version** just type (in Terminal): `swift main.swift` to build and run the program. The Swift version has some color in it as well, so will look kind of ugly if your Terminal or shell app doesn't support colors.


**For the C version**,  first build, and then run the output using:
```
  clang fizzBuzz.c
  ./a.out
```

There are several version of the implementation in the code, so just change the `main` function in the C file, or change the top-level code in Swift, to call a different implementaiton function. The function names should be pretty easy to identify.


## Xcode Project

Note that only `main.swift` is made a member of the default Xcode target. Xcode won't try to build and run the C code, for example. The files are included just to make it easier to use Xcode as the code editor for any of the samples.


## Origins

Here are a couple articles online about the history of FizzBuzz:

Statement of the [FizzBuzz](https://imranontech.com/2007/01/24/using-fizzbuzz-to-find-developers-who-grok-coding/) problem:

https://www.tomdalling.com/blog/software-design/fizzbuzz-in-too-much-detail/
https://imranontech.com/2007/01/24/using-fizzbuzz-to-find-developers-who-grok-coding/
https://blog.codinghorror.com/why-cant-programmers-program/

