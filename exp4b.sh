#! /bin/bash
echo "Enter the year"
read year
if [ `expr $year % 4` == 0 ]
then
echo "Leap year"
else
echo "Not leap year"
fi

