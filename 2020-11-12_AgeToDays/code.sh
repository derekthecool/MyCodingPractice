#!/bin/bash
# Age To Days Challenge

echo "Enter your age in years"
read age

echo "Your age in days is $(( "$age"*365 ))"
