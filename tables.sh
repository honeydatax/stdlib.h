# /bin/usr/sh
echo list all tables:
sqlite address_book.dbf < tables.sql
echo list schema book:
sqlite address_book.dbf < schema.sql

