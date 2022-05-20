#!/bin/bash

gcc -Wall $1.c -o $1	
./$1 &
pstree -p | grep "$1"
