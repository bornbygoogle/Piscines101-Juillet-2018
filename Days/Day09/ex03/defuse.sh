#!/bin/bash
var=`ls -lu bomb.txt | date | awk '{ print $4 }' | cut -d':' -f3`
echo "$var - 1" | bc