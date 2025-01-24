## Itinerary

**basic `git` operations.**
- Cloning repositories from GitHub
- Utility of branches in a respository

**an introduction to Vim.**
- Basic commands for navigation and editing
- Searching and replacing text

**Unix and Linux commands.**
- manual ('man') pages and documentation

**Bash, Zsh, and Shell Scripting**
- special parameters/operators and syntax specific to Bash/Zsh (e.g. `!$`, `$@`, `$*`)
- loops and how to write/use them
- the Pipe operator (`|`)

**Regex (Regular Expressions)**
- How to search in Vim using Regex
- special parameters/operators specific to Regex (e.g. `*`, `%`, `^$`), more information available ![here](https://www.tads.org/t3doc/doc/sysman/regex.htm)

**Understanding Code Organization**
- What is linking (combining code from different documents into a single sequence).
- `Import`/`Include` statements (e.g. `import numpy as np`).
- Organizing code with namespaces and directories
- Working with paths and file locations

**Build Systems and Compilation**
- Using Makefiles to build projects
- Introduction to CMake
- Understanding compile time vs runtime code

**Data Types and Memory**
- Constants and variables
- Working with pointers and references
- Arrays and indexing

**Flow Control and Debugging**
- Different types of loops (while, do-while, for)
- Using GDB for debugging
- Understanding common errors like segmentation faults

**Functions and Object-Oriented Programming**
- The main function and program entry points
- Access modifiers (public, private, protected)
- Working with structs and enums

**Advanced Object-Oriented Concepts**
- Inheritance and access levels
- Abstract classes and virtual functions
- Object-oriented design principles

**Templates and Documentation**
- Basic template usage
- Writing documentation with Doxygen
- Best practices for code comments

# Helpful Vim Commands

| Keys | Description |
|------|-------------|
| : | Starts a command |
| :w | Writes / saves the file |
| :q | Exits a file / vim |
| i | Insert |
| a | Append |
| A | Append at the end |
| I | Insert at the beginning |
| gg | Go to top of the file |
| G | Go to the bottom of the file |
| d | Delete |
| c | Change |
| w | Word / forward a word |

# Helpful Unix/Linux Operating System Commands

| Command | Description |
|---------|-------------|
| ls | "List"; Lists all files in the current working directory |
| cd | "Change Directory"; Changes your current working directory to a specified target directory; e.g. `cd Desktop/`|
| pwd | "Print Working Directory"; Tells you where you are |
| mkdir | "Make Directory"; e.g. `mkdir NewDirectoryName`|
| rm | "Remove"; scary if used carelessly; e.g. `rm Image.png` |
| ps | "Processes" / Lists processes. With no flags, then only lists processes attached to your current shell session |
| find | Paired with flags. Very helpful use of this command is `find . -type f -print | xargs grep -i -s "something"` |
| head | Prints first 10 (?) lines of a file |
| tail | Prints the last 10 (?) lines of a file |
| which | Prints the full path of the executable for the argument | 
| whereis | Locates source/binary for specified files in a list of standard Linux places |
| echo | Print to console; e.g. `echo "hello world!"` |
| touch | Creates a file; e.g. `touch notes.txt` |
| man | Print manual for a command; e.g. `man ls` |
