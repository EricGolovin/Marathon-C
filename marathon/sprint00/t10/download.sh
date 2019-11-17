NAME=$1
OUTPUT=$2
echo "URL: $NAME"
echo "Output file: $OUTPUT"
$(curl $NAME --output $OUTPUT)
