#!/bin/bash

echo "Enter a number"
read num1
if [ $num1 -gt 0 ];
then echo "positive number"

elif [ $num1 -lt 0 ];
then echo "negative number"

else
echo "it is zero" 
fi
