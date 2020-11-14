#!/usr/bin/pwsh
# Age To Days Challenge

[int]$age = Read-Host "Enter your age in years"
Write-Host "You are $($age * 365) years old"
