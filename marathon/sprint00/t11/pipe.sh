touch tempFile.txt
TEMP=tempFile.txt
while IFS= read -r line; do
if [[ $line == *"Redpill"* || $line == *"redpill"* ]]; then
	echo "$line" >> tempFile.txt
	
fi
done < "$1"

sed  's/redpill/bluepill/g;s/Redpill/bluepill/g' tempFile.txt

$(rm -rf tempFile.txt)
