while IFS= read -r line; do
if [[ $line == *"Redpill"* || $line == *"redpill"* ]]; then
  echo "$line"
fi
done < "$1"
