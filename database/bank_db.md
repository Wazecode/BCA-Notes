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

