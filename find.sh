# /usr/bin/sh
echo "press control-break to exit."
for b in 0 .. 50
do
printf "%s" "select * from book where Name like " > ./data/find.sql
echo 'enter Name to find like part of it  ,'
read a
echo $a >> ./data/find.sql
echo ';' >> ./data/find.sql
echo '.quit' >> ./data/find.sql
sqlite ./data/address_book.dbf < ./data/find.sql
echo ------------------------------------------
done