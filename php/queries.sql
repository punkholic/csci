to create database:
CREATE DATABASE database_name;
example: CREATE DATABASE abc;

to see all databases:
show databases;


to get inside a database:
use database_name;
example: use abc;

CRUD
C - create
R- read
U - update
D - DELETE


to create table
CREATE TABLE table_name(fields);

fields:
VARCHAR(0-255) -> strings (name, addresss)
TEXT -> long data
int -> int(0-11)
date -> DOB
datetime -> timestamp

example: CREATE TABLE student(name VARCHAR(100), roll_no INT(11), email VARCHAR(255));

to list all tables:
show tables;

to see tables fields info:
desc table_name;
example: desc student;

to list all values inside a table:
SELECT * FROM table_name;
* is read as all
example: SELECT * FROM student;


to insert values in a table:
INSERT INTO table_name(fields) VALUES(values);
example: INSERT INTO student(name, roll_no, email) VALUES('sita', 1, 'abc@xyz.com');

conditions:
SELECT * FROM table_name WHERE conditions;
example: SELECT * FROM student WHERE roll_no = 2 and name = "sita";


DELETE:
DELETE FROM table_name;
example: DELETE FROM student WHERE name = "ram";


UPDATE:
UPDATE table_name SET field1=value1, field2=value2;
example: UPDATE student SET name = "kalu", roll_no = 4;