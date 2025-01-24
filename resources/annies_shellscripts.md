# Shell Scripts
Shell scripting is useful! Not really sure what else to say here. Here are a few shell (bash) scripts that I use (often):

### addzeroes.sh
I configure my simulations through a bulk script I wrote that creates a whole bunch of setup files in specific subdirectories. 

At one point in time, my simulation directories would index from 0 to 99, e.g.:
`0_dustydisc, ..., 10_dustydisc, ..., 100_dustydisc`

This is difficult to work with when trying to refer to the collective group of subdirectories with the ending, `*_dustydisc` if I need to specify the number of integers in my leading index number. 

```bash
# Add leading zeroes to indexed files, e.g.:
# 0_dustydisc, 10_dustysgdisc, 100_dustysgdisc (before)
# 0000_dustysgdisc, 0010_dustysgdisc, 0100_dustysgdisc (after)

#!/bin/bash

# Loop through files matching the pattern
for file in [0-9]*_dustysgdisc; do
    # Extract the number from the filename
    number=$(echo "$file" | cut -d'_' -f1)

    # Create new filename with zero padding to 4 digits
    new_name=$(printf "%04d_dustysgdisc" "$number")

    # Rename the file if the new name is different
    if [ "$file" != "$new_name" ]; then
        mv "$file" "$new_name"
        echo "Renamed: $file -> $new_name"
    fi
done
```

### grabfiles.sh
Each simulation sub-directory houses 'dump files,' which are individual simulation outputs at a certain point in time (e.g. my 1st dump file renders my protoplanetary disk at the 1st time step, 2nd at the 2nd timestep, 3rd at the 3rd timestep, etc.)

When I want to post-process specific dump files, it would be an incredible hassle to have to `cd` into every single directory, copy the n$^{th}$ dump file I want to grab, and then paste it into a directory with all the others.

```bash
for sim_dir in sim_0*; do 
    sim_number=$(basename "$sim_dir" | sed 's/sim_0*//')
    file_to_copy="$sim_dir/dustysgdisc_00010"
    if [ -f "$file_to_copy" ]; then
        cp "$file_to_copy" "/home/adm61595/runs/run10_dumps10/${sim_number}_dustysgdisc"
    fi
done
```

### grabinfo.sh
Sometimes I need to collect all of the `setup` and configuration and parameter files for my simulations to share with Dr. Hall because they fail and I can't figure out why. This script looks for my `setup` files, my `in` (input) files, and my `out` (output) files, renames them specific to each simulation index they belong to, and copies them to a single directory.

```bash
for i in {0000..0099}; do
  sim_dir="sim_$i"
  if [ -d "$sim_dir" ]; then
    # Copy and rename dustydisc.in files
    if [ -f "$sim_dir/dustydisc.in" ]; then
      cp "$sim_dir/dustydisc.in" "dustydisc_setups/sim_${i}_dustydisc.in"
    fi
    
    # Copy and rename dustydisc-dust.discparams files
    if [ -f "$sim_dir/dustydisc-dust.discparams" ]; then
      cp "$sim_dir/dustydisc-dust.discparams" "dustydisc_setups/sim_${i}_dustydisc-dust.discparams"
    fi
    
    # Copy and rename dustydisc.discparams files
    if [ -f "$sim_dir/dustydisc.discparams" ]; then
      cp "$sim_dir/dustydisc.discparams" "dustydisc_setups/sim_${i}_dustydisc.discparams"
    fi
  
    # Copy and rename .out files
    for outfile in "$sim_dir"/ppd_${i}_*.out; do
        if [ -f "$outfile" ]; then
            cp "$outfile" "dustydisc_setups/sim_${i}_$(basename "$outfile")"
        fi
    done
  fi
done
```
