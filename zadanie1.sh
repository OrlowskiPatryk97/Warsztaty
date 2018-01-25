#!/bin/sh  
awk '{print $1}' /etc/passwd | cut -d ':' -f 1

