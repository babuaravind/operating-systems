echo "Enter any filename(with extension): "
read filename
echo "No. of spaces in the file = "
grep -o " " $filename|wc -l