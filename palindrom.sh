#!/bin/bash
echo "podaj liczbe"
read n
liczba=$n
odwr=0
while [ $n -gt 0 ]
do
tyl=`expr $n % 10 `
n=`expr $n / 10 `
odwr=`expr $odwr \* 10 + $tyl`
done
echo $odwr
if [ $liczba -eq $odwr ]
then
    echo "pailndrom"
else
	echo "nie palindrom"
fi
