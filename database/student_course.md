### Student course db

#### Student table
```sql
CREATE TABLE student (
  id int,
  name varchar(31),
  PRIMARY KEY (id)
);
```
#### Course table
```sql
CREATE TABLE course (
  id int,
  name varchar(31),
  PRIMARY KEY (id)
);
```

#### Reg table
```sql
CREATE TABLE reg (
  sid int,
  cid int,
  FOREIGN KEY (sid) REFERENCES student (id),
  FOREIGN KEY (cid) REFERENCES course (id)
);
```


#### Inserting data
```sql
INSERT INTO student (id, name) VALUES
(1, 'Pavan'),
(2, 'Shuwais'),
(3, 'Ramesh'),
(4, 'Aditya');

INSERT INTO course (id, name) VALUES
(1, 'Python'),
(2, 'Java'),
(3, 'Dbms'),
(4, 'AI');

INSERT INTO reg (sid, cid) VALUES
(1,2),
(1,3),
(2,1),
(2,4),
(3,2);
```

#### Join command example
```sql

select student.name, course.name
    -> from student
    -> join reg
    -> on reg.sid = student.id
    -> join course
    -> on course.id = reg.cid;
+---------+--------+
| name    | name   |
+---------+--------+
| Pavan   | Java   |
| Pavan   | Dbms   |
| Shuwais | Python |
| Shuwais | AI     |
| Ramesh  | Java   |
+---------+--------+
6 rows in set (0.000 sec)
```
