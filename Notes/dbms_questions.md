##### 7. Consider the following Relational Database \
Student (roll_no, name,city,marks,c_no) \
Course (c_no,cname,fees) \
Construct Queries into Relational algebra. \
a) List Student Details enrolled for ‘BBA (C.A)’ Course. \
b) List the Course having fees < 20000 \
c) Display all students living in either ‘Nasik’ or ‘Pune’ city. \
d) Display Course detail for student ‘Gaurav Sharma’  \

```sql
CREATE table student (
roll_no int,
name varchar(31),
city varchar(15),
marks int,
c_no int
);

CREATE table course (
	c_no int,
	c_name varchar(15),
	fees int
);

INSERT into student values
(1, 'sai krishna', 'vizag', 32, 1 ),
(2, 'Gaurav Sharma', 'Hyderabad', 54, 3),
(3, 'Shuwais Soudager', 'Bhatkal', 58, 2),
(4, 'Pravesh Kumar', 'Tuli', 1, 1),
(5, 'Kamal', 'Pune', 34, 1),
(6, 'Ahmed', 'Nasik', 33, 2),
(7, 'Apurv', 'Nasik', 85, 3),
(8, 'Shivam', 'Pune', 63, 2);

SELECT * FROM student;

INSERT into course values
(1, 'BBA (C.A)', 22000),
(2, 'BCA', 19000),
(3, 'BSc', 25000);


#a
SELECT name from student
join course
on course.c_no = student.c_no
where course.c_name = 'BBA (C.A)';

#b
SELECT c_name from course
WHERE fees < 20000;

#c
SELECT name from student
WHERE city = 'Pune' OR city = 'Nasik';

#d
SELECT c.c_no, c.c_name, c.fees from course c 
join student s 
on s.c_no = c.c_no
WHERE s.name = 'Gaurav Sharma';
```
---

##### 9. Consider the following Relational Database. \
Doctor (dno, dname,address,dcity) \
Hospital (hno,hname,street,hcity)\
Dochosp (dno,hno,date) \
Construct Queries into Relational algebra. \
a) Find hospital names to which ‘Dr. Mehata’ has visited. \
b) Find out all the doctors who have visited hospitals in the same city. \
c) List all the doctors who visited ‘Krishna’ on ‘1-1-19’. \
d) List Name of hospital to which ‘Dr. Aman’ has visited on ‘5-3-2019’ \


```sql
CREATE table doctor (
	dno int,
	dname varchar(31),
	address varchar(31),
	dcity varchar(31)
);

CREATE table hospital (
	hno int,
	hname varchar(31),
	street varchar(31),
	hcity varchar(31)
);

CREATE table docshop (
	dno int,
	hno int,
	date varchar(9)
);

INSERT into doctor values
(1, 'Dr. Krishna', 'Siripuram', 'Vizag'),
(2, 'Dr. Mehta', 'Rushikonda', 'Hyderabad' ),
(3, 'Dr. Aman', 'Ramnagar', 'Banglore'),
(4, 'Dr. Apurv', 'Sheelanagar', 'Tuli'),
(5, 'Dr. Pravesh', 'Balaji Nagar', 'Delhi'),
(6, 'Dr. Gaurav', 'C.B.M. Compound', 'Mumbai');

INSERT into hospital values
(1, 'Krishna', 'Waltair Street', 'Amravati'),
(2, 'Vipin', 'Soup Street', 'Pondhicherry'),
(3, 'Karthik', 'Mango Street', 'Vizag'),
(4, 'GIMSR', 'Gitam street' , 'Vizag');

INSERT into docshop values
(1 , 2 , '1-1-19'),
(3 , 2 , '2-2-19'),
(3 , 3 , '5-3-19'),
(2, 4, '2-2-19'),
(4, 1, '1-1-19'),
(3, 1, '5-3-19'),
(6, 4, '4-2-19'),
(6, 2, '8-8-18'),
(2, 1, '1-1-19'),
(2, 2, '2-4-19'),
(5, 3, '5-1-19'),
(5, 4, '7-4-19'),
(1, 4, '4-3-19'),
(1, 4, '5-5-19');

#a
SELECT h.hname from hospital h
join docshop ds 
on ds.hno = h.hno
join doctor doc
on doc.dno = ds.dno
where doc.dname = 'Dr. Mehta';

#b
SELECT doc.dname from doctor doc
join docshop ds 
on ds.dno = doc.dno
join hospital h 
on h.hno = ds.hno
WHERE h.hcity = doc.dcity
GROUP BY doc.dcity;

#c
SELECT doc.dname from hospital h
join docshop ds 
on ds.hno = h.hno
join doctor doc
on doc.dno = ds.dno
where h.hname = 'Krishna' AND ds.date = '1-1-19';

#d
SELECT h.hname from hospital h
join docshop ds 
on ds.hno = h.hno
join doctor doc
on doc.dno = ds.dno
where doc.dname = 'Dr. Aman' AND ds.date = '5-3-19';

```
---

##### 12. Consider the following relation \
Department (dept_name, building, budget) \ 
Course (course_id, title, dept_name) \
Instructor ( id, name, dept_name, salary) \
Teaches (id, course_id, section_id, semester, year) \
The key fields are underline as primary key. Give the SQL express of the following:- \
a. Select the department name of instructor whose name neither "A" nor "B". \
b. Find the number of instructors of each department who teach course "DBMS" \
c. Find the department that have the highest average salary. \
d. Give a 5% salary raise to instructor whose salary is less than average. \

```sql
CREATE table Department (
	dept_name varchar(15),
	building varchar(15),
	budget int
);

CREATE table Course (
	course_id int,
	title varchar(15),
	dept_name varchar(15)
);

CREATE table Instructor (
	id int,
	name varchar(15),
	dept_name varchar(15),
	salary int
);

CREATE table Teaches (
	id int,
	course_id int,
	section_id int,
	semester int,
	year int
);

INSERT into Department values
('Computers', 'Sciences', 4000000),
('Mathematics', 'Sciences', 300000),
('Nursing', 'Pharmacy', 2000000),
('Business', 'Businesss', 5000000);


INSERT into Course values
(1, 'BCA', 'Computers'),
(2, 'AI', 'Computers'),
(3, 'BSc', 'Mathematics'),
(4, 'MSc', 'Mathematics'),
(5, 'BPharma', 'Nursing'),
(6, 'BBA', 'Business'),
(7, 'DBMS', 'Computers');


INSERT into Instructor values
(1, 'Sai', 'Mathematics', 300000),
(2, 'Gaurav', 'Nursing', 200000),
(3, 'Pravesh', 'Business', 400000),
(4, 'Apurv', 'Computers', 250000),
(5, 'Shivam', 'Nursing', 100000),
(6, 'Roshan', 'Nursing', 200000),
(7, 'Shuwais', 'Business', 200000),
(8, 'Kamal', 'Mathematics', 300000),
(9, 'Karthik', 'Computers', 5000000);

INSERT into Teaches values
(1, 2, 4, 2, 2022),
(2, 1, 3, 1, 2021),
(3, 4, 8, 2, 2020),
(4, 5, 4, 1, 2019),
(5, 2, 2, 2, 2022),
(6, 1, 3, 1, 2021);

#b question
SELECT i.name from Instructor i 
join Teaches t 
on t.id = i.id 
JOIN Course c 
on c.course_id = t.course_id 
WHERE c.title = 'DBMS';

#c question
SELECT dept_name , AVG(salary) as avgSal 
from Instructor 
group by dept_name 
order by avgSal desc limit 1;

#d
UPDATE Instructor 
set salary = salary + salary * 5/100
where salary < (SELECT AVG(salary) from Instructor);

```
