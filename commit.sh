#!/bin/sh

if [ -z "$1" ]
then
    echo "Error: u should input commit name as the 1th argument"
    exit 0
fi

git add .
git commit -m "$1"
git push origin main
