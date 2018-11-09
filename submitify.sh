#This is a script to turn a nice looking code golf submission into a one line turd
#Be careful on the space around else statements within in c if no curly boys are used
#Author: Jarod Keene
#Date: 10/12/2018


#!/bin/bash

input="nice.c"
output="submit.c"

if [ $# -eq 0 ]; then
	echo "Usage: ./submitify.sh <INPUT FILE> <OUTPUT FILE>"
	exit
fi

input=$1

if [ $# -eq 1 ]; then
	echo "Output file not given, defaulting to submit.c"
else
	output=$2
fi

echo "Input file name:  "$input
echo "Output file name: "$output


check1=$(ls ./$input 2>/dev/null)
check2=$(ls ./$output 2>/dev/null)

if [ -z "$check1" ]; then
	echo "Input file not found, exiting"
	exit
fi

cat $input | tr -d "\n\t" > $output


echo "Done! Output written to $output"

echo "Bytes written:"

cat submit.c | wc -c
