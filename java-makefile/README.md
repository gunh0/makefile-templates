## Java Makefile Example

This is an example Makefile for compiling and running a Java program.

<br/>

### Directory Structure

The directory structure for this example should look like this:

```
.
├── Makefile
├── Main.java
└── bin
```

-   `Makefile` is the Makefile for compiling and running the Java program.

-   `Main.java` is the source code for the Java program.

-   `bin` is the directory where the compiled Java program will be placed.

<Br/>

### Usage

**Compiling**

To compile the Java program, run the following command in the terminal:

```bash
make
```

This will compile the Main.java file and place the compiled class file in the bin directory.

<br/>

**Running**

To run the Java program, run the following command in the terminal:

```bash
make run
```

This will compile the Java program (if it hasn't already been compiled) and then run it.

<br/>

**Cleaning Up**

To clean up the compiled files, run the following command in the terminal:

```bash
make clean
```

This will remove the `bin` directory and all of its contents.

<br/>

**Customize**
To customize this Makefile for your own Java program, you will need to modify the following variables:

-   `SRC`: The source code file(s) for your Java program. You can specify multiple source code files separated by spaces.
-   `OUT`: The output directory where the compiled class file(s) will be placed.
-   `MAIN_CLASS`: The main class of your Java program.

You can also modify the`JFLAGS` variable to specify additional flags to pass to the Java compiler.
