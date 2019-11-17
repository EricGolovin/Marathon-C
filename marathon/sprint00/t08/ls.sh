touch listOfFiles.txt
for f in $*
do
	FILESIZE=$(stat -f%z $f)
	echo "$f $FILESIZE""K" >> listOfFiles.txt
done
cat listOfFiles.txt | sort
rm -rf listOfFiles.txt
