# /usr/bin/sh
echo "press control-break to exit."
for b in 0 .. 50
do
echo "Insert into book ( ID,NAME,ADDRESS,PHONE)" > ./data/add.sql
printf "%s" "values (" >> ./data/add.sql
echo 'enter all entry in the same line separete by ,'
echo 'ID , NAME , ADDRESS , PHONE'
read a
echo $a >> ./data/add.sql
echo ');' >> ./data/add.sql
echo '.quit' >> ./data/add.sql
sqlite ./data/address_book.dbf < ./data/add.sql
echo ------------------------------------------
done