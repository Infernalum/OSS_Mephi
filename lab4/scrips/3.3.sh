#!/bin/bash

./$1 "1" "2" "3"
echo -------------------------
./$1 $RANDOM $RANDOM $RANDOM $RANDOM $RANDOM
echo -------------------------
./$1 "foo" "bar" "foobar" "foo bar"
echo -------------------------
./$1 "foo" "--foo" "--help" "-I"
