#! /bin/bash
echo "Enter the numbers"
read a b
temp=$a
a=$b
b=$temp
echo "After swapping:$a $b"
