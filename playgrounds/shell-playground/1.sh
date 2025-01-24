#!/bin/bash

echo "Using \$@:"
for arg in "$@"; do
  echo "Argument: $arg"
done

echo -e "\nUsing \$*:"
for arg in $*; do
  echo "Argument: $arg"
done
