CREATE TABLE customer2 --used to create a table
(
Name varchar(225), -- create a colum name
Age INT(24),
Address varchar(224),
Salary INT(22)
);

-- insert is used to stored a data inside a table of colum;
INSERT INTO customer2 VALUES
("Shiva Tiwari",22,"Bhopal",22000),
("Ajeet Bhargav",45,"Meerut",65000),
("Ajeet Yadva",36,"Azamgarh",45000),
("Balvant Singh",26,"Varnarsi",36000),
("Uday Pratap Singh",24,"Maunath Bhanjan",63000),
("Sahil Sheik",45,"Lucknow",89000),
("Mahesh Rudra",56,"Delhi",34000),
("Akash Maurya",19,"Rajasthan",56000),
("Alok Prajapati",63,"Bhopal",62000),
("Ranjeet kumar",35,"Bihar",68000)
;
-- update is used to upate colume in table;
UPDATE customer2 set Name = "Raj Chauhan" WHERE Salary = 22000;

SELECT *FROM customer2 WHERE Salary>60000 OR Address = 'Bhopal';
SELECT *FROM customer2 WHERE Salary=22000 AND Address ="Bhopal";
DELETE FROM customer2 WHERE Address ="Bhopal" or Salary = 62000;
SELECT *FROM customer2;
DROP TABLE customer1;