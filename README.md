## Make

Make is a build tool primarily used in Unix-based operating systems for software development. It allows you to compile a program by defining the dependencies between multiple files and the commands required for each file, and has a standardized syntax for describing the process of creating a final program. The file that describes this structure, typically called a Makefile, is interpreted by the make command to perform the program build.

<br/>

## Makefile

Before running make, you need to create a list of targets and the compile and link rules for your project. This is typically done using a Makefile, which contains rules that define how files should be built.

<br/>

## Rules

```
TARGET ...: PREREQUISITES ...
	RECIPE
	...
```

Another format is

```
TARGETS: PREREQUISITES ; RECIPE
	RECIPE
	...

```

**TARGET**

-   Defines the target rule for executable files, object files, libraries, etc. It is created as a result of executing the recipe. Multiple command lines can be used in the recipe, allowing for complex functionality such as creating files or performing installations.

**PREREQUISITES**

-   Specifies the dependencies (relationships) when creating the TARGET. If any of the files listed in this section have been modified, the TARGET will be recreated.

**RECIPE**

-   The executable file used to create the TARGET. The TARGET is generated according to this execution rule. This usually involves using cc or Linux commands. Multiple command lines are possible in the recipe. It's important to note that the beginning of the recipe should be indented with a keyboard Tab ↹ rather than spaces.

```
     foo.o : foo.c defs.h       # module for twiddling the frobs
             cc -c -g foo.c
```

If foo.c or defs.h is modified, the `cc -c -g foo.c` command will be executed to create foo.o.

<br/>

### Reference

-   https://www.gnu.org/software/make/manual/make.html
