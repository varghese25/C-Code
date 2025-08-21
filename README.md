## Execute C & C++ flies in VSCODE

Step 1: E:\myWorks\C C++\InterView> g++ Prac1.cpp -o Prac1
Step 2: .\Prac1
Step 3: OutPut

Note if ignore (-o Prac1) E:\myWorks\C C++\InterView> g++ Prac1.cpp , it will create a.exe file

Case 1: Without -o
g++ Prac1.cpp

Compiler builds your program.

Default executable name = a.exe (on Windows).

You run it as:

.\a.exe

Case 2: With -o
g++ Prac1.cpp -o Prac1

-o lets you choose the output file name.

Compiler builds Prac1.exe (on Windows).

You run it as:

.\Prac1.exe

or simply:

.\Prac1

So in simple terms:

a.exe → default name if you don’t specify.

Prac1.exe → custom name because you asked for it with -o Prac1.

Both files are the same thing: compiled executables of your code, just with different names.
