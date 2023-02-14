### Creating branch table
```sql
create table branch(
	branch_name varchar2(15) constraint branch_name_pr primary key,
	branch_city varchar2(15),
	assets int);
```

### Creating customer table

```sql
create table customer(
	customer_name varchar2(15) constraint customer_name_pr primary key,
	customer_street varchar2(15),
	customer_city varchar2(15));
```

 The above two tables are the master tables

### Creating account table

```sql
create table account(
	account_number varchar2(6),
	branch_name varchar2(15),
	balance int,
	constraint accnum_branchname_pk primary key(account_number, branch_name),
	foreign key (branch_name) references branch(branch_name));
```

### Creating depositor table

```sql
create table depositor(
	customer_name varchar2(15),
	account_number varchar2(6),
	constraint cname_anum_pr primary key(customer_name, account_number),
	foreign key (customer_name) references customer(customer_name),
	foreign key (account_number) references account(account_number));
```

### Creating loan table

```sql
create table loan(
	loan_number varchar2(5),
	branch_name varchar2(15),
	amount int,
	constraint lnum_bname_pr primary key(loan_number, branch_name),
	foreign key (branch_name) references branch(branch_name));
```

### Creating borrower table

```sql
create table borrower(
	customer_name varchar2(15),
	loan_number varchar2(5),
	constraint cname_lnum_pr primary key(customer_name, loan_number ),
	foreign key (customer_name) references customer(customer_name),
	foreign key (loan_number) references loan(loan_number));
```


### Inserting Data
```sql
INSERT INTO branch (branch_name, branch_city, assets) VALUES 
('Brighton', 'Brooklyn', 7100000), 
('Downtown', 'Brooklyn', 9000000),
('Mianus', 'Horseneck', 400000),
('North Town', 'Rye', 3700000),
('Perryridge', 'Horseneck', 1700000),
('Pownal', 'Bennington', 300000),
('Redwood', 'Palo Alto', 2100000),
('Round Hill', 'Horseneck', 8000000);

INSERT INTO customer (customer_name, customer_street, customer_city) VALUES
('Adams', 'Spring', 'Pittsfield'),
('Brooks', 'Senator', 'Brooklyn'),
('Curry', 'North', 'Rye'),
('Glenn', 'Sand Hill', 'Woodside'),
('Green', 'Walnut', 'Stamford'),
('Hayes', 'Main', 'Harrison'),
('Johnson', 'Alma', 'Palo Alto'),
('Jones', 'Main', 'Harrison'),
('Linsday', 'Park', 'Pittsfield'),
('Smith', 'North', 'Rye'),
('Turner', 'Putnam', 'Stamford'),
('Williams', 'Nassau', 'Princeton');

INSERT INTO account (account_number, branch_name, balance) VALUES
('A-101', 'Downtown', 500),
('A-102', 'Perryridge', 400),
('A-201', 'Brighton', 900),
('A-215', 'Mianus', 700),
('A-217', 'Brighton', 750),
('A-222', 'Redwood', 700),
('A-305', 'Round Hill', 350);

INSERT INTO loan (loan_number, branch_name, amount) VALUES 
('L-11', 'Round Hill', 900),
('L-14', 'Downtown', 1500),
('L-15', 'Perryridge', 1500),
('L-16', 'Perryridge', 1300),
('L-17', 'Downtown', 1000),
('L-23', 'Redwood', 2000),
('L-93', 'Mianus', 500);


INSERT INTO depositor (customer_name , account_number ) VALUES 
('Hayes','A-102'),
('Johnson', 'A-101'),
('Johnson', 'A-201'),
('Jones', 'A-217'),
('Linsday', 'A-222'),
('Smith', 'A-215'),
('Turner', 'A-305');

INSERT INTO borrower (customer_name , loan_number ) VALUES 
('Adams','L-16'),
('Curry','L-93'),
('Hayes','L-15'),
('Jackson','L-14'),
('Jones','L-17'),
('Smith','L-11'),
('Smith','L-23'),
('Williams','L-17');

```
