echo "Enter name of the file"
read file_name 
cat $file_name.xml | grep -i "text"| sed 's/<[^>]*[>]//g' > $file_name.txt
gcc extract.c
./a.out $file_name.txt > Extracted_$file_name.txt
