#!/bin/bash
# This script checks the existence of a file
echo "Insert the number of files you wanna check: "
echo

echo "Checking..."
for arg in $@
do
    sleep 2
    if [[ -e $arg ]] ; then
            echo "$arg exists."
        else
            echo "$arg doesn't exist."
    fi
done
sleep 1
echo "...done."
sleep 3

