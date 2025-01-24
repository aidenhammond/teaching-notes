# Things to go over
- Basic git
  - Clone
  - Branches
- Vim
    - basic Commands
    - search and replace
- Unix Commands
    - man pages
- Shell scripts / bash
    - Special parameters 
        - !$ = last argument
        - $@ = all arguments --> "$@" = "$1" "$2" "$3" ...
            - $* = one parameter consisting of all parameters added together
        - $1, $2, ... = First argument, second argument, and so on
    - loops
    - Pipe

- Regex
    - searching in vim using Regex
    - wildcard (*%) 
        * = "any number (including none) of the previous 'atom' "
        % = when in maching mode, matches one or more characters in a string, called a stem
            when in replacing mode, it takes the stem and replaces that in a string
    - anchor (^$)
    - Others https://www.tads.org/t3doc/doc/sysman/regex.htm

" The answer to any 'why' question is because of design "
- What is linking
    - Import / include statements
        - System headers <> / include path list
        - Local directory ""
        - `echo | gcc -E -Wp,-v -` shows the include path in use
        - circular imports
    - Compile time code / runtime code
    - Name spaces
    - Paths
- Make files
    - Static pattern rules
    targets...: target-pattern: prereq-patterns ...
           commands
- CMake
- Printing
- Types / typing
    - const
    - Pointers and references
    - Arrays
        - Indexing
- Loops
    - while
    - do while
    - for
    - pragma unpack
- Debugging / GDB
    - Signals
        - Segfaults
- Functions
    - main function
- Objects
    - Access modifiers (public/private/protected/friend/static/virtual) (go over virtual later)
    - Structs
    - Enums
- Inheritance 
    - Public / private / protected / virtual
        - Accessibility in inheritance (accessiblity-in-inheritance)
        |---|---|---|---|
        | Accessibility | Private members | protected members | public members |
        |---|---|---|---|
        | Base class | Yes | Yes | Yes |
        |---|---|---|---|
        | Derived Class | No | Yes | Yes |
        |---|---|---|---|
        - Go over it in the order protected -> private -> public
    - Abstract classes / virtual functions / "interfaces"
    - Object oriented design
- Templates
- General comments
    - Doxygen



# Helpful Vim Commands

|---|---|
| Keys | Description | 
|---|---|
| : | Starts a command |
|---|---|
| :w | Writes / saves the file |
|---|---|
| :q | Exits a file / vim |
|---|---|
| i | Insert |
|---|---|
| a | Append |
|---|---|
| A | Append at the end |
|---|---|
| I | Insert at the beginning |
|---|---|
| gg | Go to top of the file |
|---|---|
| G | Go to the bottom of the file |
|---|---|
| d | Delete |
|---|---|
| c | Change |
|---|---|
| w | Word / forward a word |
|---|---|



# Helpful Unix-like Operating System Commands

|---|---|
| Command | Description | 
|---|---|
| ls | "List" / Lists all files in the current working directory |
|---|---|
| cd | "Change Directory" / Changes your current working directory |
|---|---|
| pwd | "Print Working Directory" / Tells you where you are |
|---|---|
| mkdir | "Make Directory" |
|---|---|
| rm | "Remove" / scary |
|---|---|
| ps | "Processes" / Lists processes. With no flags, then only lists processes attached to your current shell session |
|---|---|
| find | Paired with flags. Very helpful use of this command is `find . -type f -print | xargs grep -i -s "something"` |
|---|---|
| head | Prints first 10 (?) lines of a file |
|---|---|
| tail | Prints the last 10 (?) lines of a file |
|---|---|
| which | Prints the full path of the executable for the argument | 
|---|---|
| whereis | Locates source/binary for specified files in a list of standard Linux places |
|---|---|
| echo | Print to console |
|---|---|
| touch | Creates a file |
|---|---|
| man | Print manual for a command |
|---|---|
