```sql
MariaDB [clgdb]> create table emp (
    -> id int,
    -> name varchar(31),
    -> age int,
    -> address varchar(31),
    -> salary int,
    -> deptid int);
Query OK, 0 rows affected (0.036 sec)

MariaDB [clgdb]> desc emp
    -> ;
+---------+-------------+------+-----+---------+-------+
| Field   | Type        | Null | Key | Default | Extra |
+---------+-------------+------+-----+---------+-------+
| id      | int(11)     | YES  |     | NULL    |       |
| name    | varchar(31) | YES  |     | NULL    |       |
| age     | int(11)     | YES  |     | NULL    |       |
| address | varchar(31) | YES  |     | NULL    |       |
| salary  | int(11)     | YES  |     | NULL    |       |
| deptid  | int(11)     | YES  |     | NULL    |       |
+---------+-------------+------+-----+---------+-------+
6 rows in set (0.001 sec)


MariaDB [clgdb]> create table dept (
    -> did int,
    -> dname varchar(31),
    -> jid int);
Query OK, 0 rows affected (0.034 sec)

MariaDB [clgdb]> desc dept;
+-------+-------------+------+-----+---------+-------+
| Field | Type        | Null | Key | Default | Extra |
+-------+-------------+------+-----+---------+-------+
| did   | int(11)     | YES  |     | NULL    |       |
| dname | varchar(31) | YES  |     | NULL    |       |
| jid   | int(11)     | YES  |     | NULL    |       |
+-------+-------------+------+-----+---------+-------+
3 rows in set (0.001 sec)

MariaDB [clgdb]> insert into emp values 
    -> (1, 'Shuwais', 21, 'vskp', 200000, 1),
    -> (2, 'Pravesh', 33, 'kol', 100000, 3),
    -> (3, 'Kamal', 27, 'pun', 3000000, 2),
    -> (4, 'Shivam', 19, 'Hyd', 300000, 2),
    -> (5, 'Niteesh', 29, 'vskp', 1000000, 1),
    -> (6, 'Abhiram', 38, 'nel', 300000, 2),
    -> (7, 'Karthik', 15, 'Hyd', 4000, 2),
    -> (8, 'Sumanth', 18, 'Ell', 5000, 1);


MariaDB [clgdb]> select * from emp;
+------+---------+------+---------+---------+--------+
| id   | name    | age  | address | salary  | deptid |
+------+---------+------+---------+---------+--------+
|    1 | Shuwais |   21 | vskp    |  200000 |      1 |
|    2 | Pravesh |   33 | kol     |  100000 |      3 |
|    3 | Kamal   |   27 | pun     | 3000000 |      2 |
|    4 | Shivam  |   19 | Hyd     |  300000 |      2 |
|    5 | Niteesh |   29 | vskp    | 1000000 |      1 |
|    6 | Abhiram |   38 | nel     |  300000 |      2 |
|    7 | Karthik |   15 | Hyd     |    4000 |      2 |
|    8 | Sumanth |   18 | Ell     |    5000 |      1 |
+------+---------+------+---------+---------+--------+

------------------QUESTION - 1 ----------------------

MariaDB [clgdb]> create table emp_bk(
    -> id int,
    -> name varchar(31),
    -> age int,
    -> address varchar(31),
    -> salary int,
    -> deptid int);
Query OK, 0 rows affected (0.032 sec)

MariaDB [clgdb]> desc emp_bk;
+---------+-------------+------+-----+---------+-------+
| Field   | Type        | Null | Key | Default | Extra |
+---------+-------------+------+-----+---------+-------+
| id      | int(11)     | YES  |     | NULL    |       |
| name    | varchar(31) | YES  |     | NULL    |       |
| age     | int(11)     | YES  |     | NULL    |       |
| address | varchar(31) | YES  |     | NULL    |       |
| salary  | int(11)     | YES  |     | NULL    |       |
| deptid  | int(11)     | YES  |     | NULL    |       |
+---------+-------------+------+-----+---------+-------+
6 rows in set (0.001 sec)

MariaDB [clgdb]> insert into emp_bk select * from emp;
Query OK, 8 rows affected (0.014 sec)
Records: 8  Duplicates: 0  Warnings: 0

MariaDB [clgdb]> select * from emp_bk;
+------+---------+------+---------+---------+--------+
| id   | name    | age  | address | salary  | deptid |
+------+---------+------+---------+---------+--------+
|    1 | Shuwais |   21 | vskp    |  200000 |      1 |
|    2 | Pravesh |   33 | kol     |  100000 |      3 |
|    3 | Kamal   |   27 | pun     | 3000000 |      2 |
|    4 | Shivam  |   19 | Hyd     |  300000 |      2 |
|    5 | Niteesh |   29 | vskp    | 1000000 |      1 |
|    6 | Abhiram |   38 | nel     |  300000 |      2 |
|    7 | Karthik |   15 | Hyd     |    4000 |      2 |
|    8 | Sumanth |   18 | Ell     |    5000 |      1 |
+------+---------+------+---------+---------+--------+
8 rows in set (0.000 sec)

-----------------------------------------------------------

--------------------QUESTION - 2---------------------------

MariaDB [clgdb]> update emp 
    -> set salary = salary * 1.25
    -> where age > 29;

MariaDB [clgdb]> select * from emp;
+------+---------+------+---------+---------+--------+
| id   | name    | age  | address | salary  | deptid |
+------+---------+------+---------+---------+--------+
|    1 | Shuwais |   21 | vskp    |  200000 |      1 |
|    2 | Pravesh |   33 | kol     |  125000 |      3 |
|    3 | Kamal   |   27 | pun     | 3000000 |      2 |
|    4 | Shivam  |   19 | Hyd     |  300000 |      2 |
|    5 | Niteesh |   29 | vskp    | 1000000 |      1 |
|    6 | Abhiram |   38 | nel     |  375000 |      2 |
|    7 | Karthik |   15 | Hyd     |    4000 |      2 |
|    8 | Sumanth |   18 | Ell     |    5000 |      1 |
+------+---------+------+---------+---------+--------+
8 rows in set (0.000 sec)

-----------------------------------------------------------

-------------------QUESTION - 3----------------------------

MariaDB [clgdb]> delete from emp
    -> where age < 20;
Query OK, 3 rows affected (0.013 sec)

MariaDB [clgdb]> select * from emp;
+------+---------+------+---------+---------+--------+
| id   | name    | age  | address | salary  | deptid |
+------+---------+------+---------+---------+--------+
|    1 | Shuwais |   21 | vskp    |  200000 |      1 |
|    2 | Pravesh |   33 | kol     |  125000 |      3 |
|    3 | Kamal   |   27 | pun     | 3000000 |      2 |
|    5 | Niteesh |   29 | vskp    | 1000000 |      1 |
|    6 | Abhiram |   38 | nel     |  375000 |      2 |
+------+---------+------+---------+---------+--------+
5 rows in set (0.000 sec)

-----------------------------------------------------------

-------------------QUESTION - 4----------------------------

MariaDB [clgdb]> select name, id from emp e 
    -> where salary = (
    -> select min(salary) from emp 
    -> where deptid = e.deptid);
+---------+------+
| name    | id   |
+---------+------+
| Shuwais |    1 |
| Pravesh |    2 |
| Abhiram |    6 |
+---------+------+
3 rows in set (0.001 sec)

-----------------------------------------------------------

-----------------QUESTION - 5------------------------------

MariaDB [clgdb]> select deptid, name, jid, dname
    -> from emp
    -> join dept
    -> on deptid = did
    -> where dname = 'finance';
+--------+---------+------+---------+
| deptid | name    | jid  | dname   |
+--------+---------+------+---------+
|      2 | Kamal   |    4 | Finance |
|      2 | Abhiram |    4 | Finance |
+--------+---------+------+---------+
2 rows in set (0.001 sec)

-----------------------------------------------------------
```
