CREATE DATABASE abc;

use abc;

CRUD
C - create
R- read
U - update
D - DELETE



CREATE TABLE table_name(fields);


VARCHAR(0-255) -> strings (name, addresss)

TEXT -> long data

int -> int(0-11)
DOB -> date

timestamp -> datetime

CREATE TABLE student(name VARCHAR(100), roll_no INT(11), email VARCHAR(255));


show tables;


desc table_name;


SELECT * FROM student;




INSERT INTO student(name, roll_no, email) VALUES('sita', 1, 'abc@xyz.com');
INSERT INTO student(name, roll_no, email) VALUES('hari', 2, 'xyz@abc.com');



DELETE FROM student WHERE roll_no = 1;