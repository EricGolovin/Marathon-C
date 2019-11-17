FILE01="$1"
FILE02="$2"
#FILE03="$3"
DIFFER=$(diff -c compare01.txt compare02.txt)

echo "$DIFFER" >> $3
cat "$3"
