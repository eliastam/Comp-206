#!/bin/bash
# .bashrc
#260871813
#Elias Tamraz
# User specific aliases and functions

echo "Welcome $USER to SOCS Bash!" #prints a welcome msg and uses the variable USER to print username
export HISTSIZE=10             #sets history to 10 (stores the previous 10 commands)
alias la='ls -l -a'           #alias changes the format of specific command for shortcut reasons
 export PS1="$USER, \w "       #set prompt to username, current directory
who | grep 'gpadda'     #check if gpadda is online
mesg n   #turn off messages
