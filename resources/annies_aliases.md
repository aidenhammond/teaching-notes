## Aliases
**Aliases** are commands mapped to user-defined shortcuts. They're the CS equivalent of writing "omw" instead of "on my way." Here are some aliases I find particularly useful, copied directly from my `.bashrc`. 

### Miscellaneous Aliases
```
alias ftf="find . -type f -print"
alias ftfg="find . -type f -print | grep"
alias ftfxg="find . -type f -print | xargs grep"
```
These three commands are useful for finding files of a certain name, or finding files with specific contents...
`ftf` displays all objects in your working directory and below of the type, `file`. For example:
```
┌💁  adm61595 @ 💻  ss-sub3 in 📁  0_Scripts
└❯ ftf
./sed-change-phantom-exec.sh
./post-process-0900.py
./post-process-2000.py
./post-process-full.py
./README
./phantom-grab-info.sh
./sed-change-job-time.sh
./post-process-1300.py
```
`ftfg` is used in conjunction with a filename you want to find, for example:
```
┌💁  adm61595 @ 💻  ss-sub3 in 📁  0_Scripts
└❯ ftfg README
./README
```
`ftfxg` is used for finding files containing a specific string. For example:
```
┌💁  adm61595 @ 💻  ss-sub3 in 📁  0_Scripts
└❯ ftfxg output_dir/
./README:output_dir/
```
Some aliases can also be lazy (like this one). The command `history` is just mapped to `h`.
```
alias h="history"
```
I find these aliases particularly useful when trying to comb through a bunch of failed simulations.
```
alias greperrors="grep --include=\*.out -Rnw '.' -e 'FATAL' > errors; cat errors"
alias grepwarnings="grep --include=\*.out -Rnwl '.' -e 'warning' > warnings; cat warnings"
```
Here's an example: let's say I'm in a directory that contains *all* of my simulations. The code I use for running simulations writes logs to output files that log errors and warnings for failed simulations. If all of my simulations fail, I can use `greperrors` and `grepwarnings` to find the specific error and warning statements:

```
┌💁  adm61595 @ 💻  xfer5 in 📁  5_BulkSims
└❯ ls
parameter_database.csv  sim_0011  sim_0023  sim_0035  sim_0047  sim_0059  sim_0071  sim_0083  sim_0095
sim_0000                sim_0012  sim_0024  sim_0036  sim_0048  sim_0060  sim_0072  sim_0084  sim_0096
sim_0001                sim_0013  sim_0025  sim_0037  sim_0049  sim_0061  sim_0073  sim_0085  sim_0097
sim_0002                sim_0014  sim_0026  sim_0038  sim_0050  sim_0062  sim_0074  sim_0086  sim_0098
sim_0003                sim_0015  sim_0027  sim_0039  sim_0051  sim_0063  sim_0075  sim_0087  sim_0099
sim_0004                sim_0016  sim_0028  sim_0040  sim_0052  sim_0064  sim_0076  sim_0088  submit_all.sh
sim_0005                sim_0017  sim_0029  sim_0041  sim_0053  sim_0065  sim_0077  sim_0089
sim_0006                sim_0018  sim_0030  sim_0042  sim_0054  sim_0066  sim_0078  sim_0090
sim_0007                sim_0019  sim_0031  sim_0043  sim_0055  sim_0067  sim_0079  sim_0091
sim_0008                sim_0020  sim_0032  sim_0044  sim_0056  sim_0068  sim_0080  sim_0092
sim_0009                sim_0021  sim_0033  sim_0045  sim_0057  sim_0069  sim_0081  sim_0093
sim_0010                sim_0022  sim_0034  sim_0046  sim_0058  sim_0070  sim_0082  sim_0094

┌💁  adm61595 @ 💻  xfer5 in 📁  5_BulkSims
└❯ greperrors
./sim_0022/ppd_0022_31238882.out:4172: FATAL ERROR! eos: utherm < 0 : u = -6.103E-04
./sim_0056/ppd_0056_31238916.out:7239: FATAL ERROR! eos: utherm < 0 : u = -8.883E-06
./sim_0008/ppd_0008_31238868.out:659: FATAL ERROR! eos: utherm < 0 : u = -3.926E-06

┌💁  adm61595 @ 💻  xfer5 in 📁  5_BulkSims
└❯ grepwarnings
```
So, evidently, I have three errors and no warnings!

Here is a more general version of the above command. 
```
alias grnw="grep -Rnwl '.' -e"
```

Instead of specifically searching for `errors` or `warnings`, you can search for any specific string. Let's say I want to search for the specific cause of my above errors (`utherm < 0`) within my simulation software's code:
```
┌💁  adm61595 @ 💻  ss-sub3 in 📁  13_SG
└❯ cd ~/Software/phantom/src/

┌💁  adm61595 @ 💻  ss-sub3 in 📁  src
└❯ grnw "utherm < 0"
./main/eos_HIIR.f90
./main/eos.f90
```
So the specific files in the simulation code PHANTOM which I can then parse through to find the cause of my errors are `./main/eos_HIIR.f90` and `./main/eos.f90`.

### Navigating Directories
These are a few examples I've created to navigate around my filesystem. Instead of `cd`ing to the entire path of a file every single time I want to get to my `home`/`scratch`/etc. directories, I can just shortcut directly with a single keyword:
```
alias home="cd /home/adm61595/"
alias scratch="cd /scratch/adm61595/"
alias work="cd /work/chlab/"
alias project="cd /project/chlab/annie/"
alias code='cd /home/adm61595/CHLab/1_HCA_PPDs/1_Code/'
```
I've also created a more interactive alias. I organize my research code in 'Experiment' directories which are located in a whole mess of nested subdirectories. Instead of typing `cd ~/CHLab/1_HCA_PPDs/1_Code/1_Notebooks/Exp20`, I've aliased a `cd` command:

```
cdexp() {
    cd "/home/adm61595/CHLab/1_HCA_PPDs/1_Code/1_Notebooks/Exp$1"
```
Now, I simply have to type:
```
┌PHANTOMEnv💁  adm61595 @ 💻  ss-sub3 in 📁  ~
└❯ cdexp 20

┌PHANTOMEnv💁  adm61595 @ 💻  ss-sub3 in 📁  Exp20
└❯ pwd
/home/adm61595/CHLab/1_HCA_PPDs/1_Code/1_Notebooks/Exp20
```
... And I'll be in my `Exp20` directory!

### Activating Virtual Environments
Virtual environments are helpful tools in Python; every single new project I create typically has a specific virtual environment. This can get messy, so I keep them all in a specific directory called `Envs` in my home directory.

They typically require a specific command to activate them:
`source /path/to/environment/folder/bin/activate`

This can be a pain to type when bouncing in and out of projects, so I've aliased this command to `activate_venv`, allowing me to just type the name of the environment I want to activate.
```
alias activate_venv='function _activate_venv(){ read -p "Enter the virtual environment directory (from /home/adm61595/Envs): " venv_dir; source "/home/adm61595/Envs/$venv_dir/bin/activate"; }; _activate_venv'
```
For example, let's say I want to activate a virtual environment called `PHANTOMEnv`:
```
┌💁  adm61595 @ 💻  ss-sub3 in 📁  ~
└❯ activate_venv
Enter the virtual environment directory (from /home/adm61595/Envs): PHANTOMEnv

┌PHANTOMEnv💁  adm61595 @ 💻  ss-sub3 in 📁  ~
└❯
```
