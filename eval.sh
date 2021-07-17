#!/usr/bin/env sh

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

i=0
while [ -d "./ex0$i" ]
do
	echo "\n\n"
	echo "####################################"
	echo "############ EX0$i ##################"
	cp ../ex0$i/*.c ex0$i
	cd ex0$i
	gcc  -Wall -Wextra -Werror *.c && ./a.out
	sleep 1
	read -p "Press enter to continue..."
	cd ..
	let "i++"
done
