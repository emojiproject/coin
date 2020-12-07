#!/bin/bash

oldNameLong=catscoin
oldNameShort=cats

newNameLong=emoji
newNameShort=emoj

function renameAllDirs() {
	for file in $(find * -type d -iname "*$oldNameLong*")
	do
		echo "Rename: $file to ${file/$oldNameLong/$newNameLong}"
		mv $file ${file/$oldNameLong/$newNameLong}
	done
	
	for file in $(find * -type d -iname "*$oldNameShort*")
	do
		echo "Rename: $file to ${file/$oldNameShort/$newNameShort}"
		mv $file ${file/$oldNameShort/$newNameShort}
	done
}

function renameAllFiles() {
	for file in $(find * -type f -iname "*$oldNameLong*")
	do
		echo "Rename: $file to ${file/$oldNameLong/$newNameLong}"
		mv $file ${file/$oldNameLong/$newNameLong}
	done
	
	for file in $(find * -type f -iname "*$oldNameShort*")
	do
		echo "Rename: $file to ${file/$oldNameShort/$newNameShort}"
		mv $file ${file/$oldNameShort/$newNameShort}
	done
}

renameAllDirs
renameAllFiles
#chmod 0777 -R EMOJ3
#find . -exec touch {} \;
