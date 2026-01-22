!#/bin/bash

sciezka = read "Podaj ścieżkę do pliku"

if [ -d $sciezka && -w "$sciezka" ]; then
	sciezka_plik = $sciezka + "/normalize"
	gcc normalize.c -o $sciezka_plik 
else
	echo "Ścieżka nie istnieje."
	exit 1;

echo 'export PATH="$PATH:$sciezka_plik"'
