# Database Excercises

#### 1 - Retrieve all data from customer, branch, depositor, loan, account, borrower
```sql
SELECT * FROM branch;
SELECT * FROM customer;
SELECT * FROM depositor;
SELECT * FROM loan;
SELECT * FROM account;
SELECT * FROM borrower;
```

#### 2 - Retrieve the names and cities of all borrowers
```sql
SELECT customer_name, customer_city
FROM customer
WHERE customer_name in (SELECT customer_name FROM borrower);
```


#### 3 - Retrieve set of names and cities of customers who have loan at 'Perryridge' branch
```sql
SELECT borrower.customer_name, branch.branch_city
from borrower
JOIN loan
on loan.loan_number = borrower.loan_number
JOIN branch
on loan.branch_name = 'Perryridge' AND branch.branch_name = 'Perryridge';
```


#### 4 - Retrieve the number of accounts with balance between 700 and 900
```sql
SELECT count(account_number)
FROM account
WHERE balance BETWEEN 700 AND 900;
```

#### 5 - Retrieve the names of customer on streets with names ending in 'hill' - string pattern matching
```sql
SELECT customer_name
FROM customer
WHERE customer_street like '%hill';
```

#### 6 - Retrieve the names of customer with both account and loan at 'Perryridge'  
```sql
SELECT depositor.customer_name
FROM depositor
JOIN borrower
on borrower.customer_name = depositor.customer_name
JOIN loan
on loan.branch_name = 'Perryridge' and loan.loan_number = borrower.loan_number
JOIN account
on account.branch_name = 'Perryridge' and account.account_number = depositor.account_number;
```

#### 7 - Retrieve the names of customer with account but not a loan at 'Perryridge'  
```sql
SELECT depositor.customer_name
FROM depositor
JOIN borrower
on borrower.customer_name = depositor.customer_name
JOIN loan
on loan.branch_name != 'Perryridge' and loan.loan_number = borrower.loan_number
JOIN account
on account.branch_name = 'Perryridge' and account.account_number = depositor.account_number;
```

#### 8 - List the name and cities of all borrowers
```sql
select borrower.customer_name, branch.branch_city
FROM borrower
LEFT JOIN loan
on borrower.loan_number = loan.loan_number
JOIN branch
on branch.branch_name = loan.branch_name;
```

#### 9 - Retrieve the set of names of customers where accounts at a branch 'Hayes' has
```sql
SELECT depositor.customer_name
FROM account
JOIN depositor
on depositor.account_number = account.account_number
WHERE depositor.customer_name = 'Hayes';
```

#### 10 - Retrieve the set of names of branches having largest average balance
```sql
SELECT max(avg_balance)
FROM (
	SELECT branch_name,avg(balance) as avg_balance
	from account
	GROUP by branch_name);
```
#### 11 - Retrieve the whose assets are greater than the assets of some branch in brooklyn.
#### 12 - Retrieve the names of customers with both account and loans at 'Perryridge' branch.
```sql
SELECT customer.customer_name
FROM customer
LEFT JOIN depositor
on depositor.customer_name = customer.customer_name
LEFT JOIN borrower
on borrower.customer_name = customer.customer_name
LEFT JOIN account
on account.account_number = depositor.account_number
LEFT JOIN loan
on loan.loan_number = borrower.loan_number
WHERE loan.branch_name = 'Perryridge' OR account.branch_name = 'Perryridge'
```

#### 13 - Retrieve the names of customer at 'Perryridge' branch in alphabetical order.
```sql
SELECT customer.customer_name
FROM customer
LEFT JOIN depositor
on depositor.customer_name = customer.customer_name
LEFT JOIN borrower
on borrower.customer_name = customer.customer_name
LEFT JOIN account
on account.account_number = depositor.account_number
LEFT JOIN loan
on loan.loan_number = borrower.loan_number
WHERE loan.branch_name = 'Perryridge' or account.branch_name = 'Perryridge'
ORDER by customer.customer_name ASC
```
#### 14 - Retrieve the loan data order by decreasing amonuts and than increasing loan numbers
```sql
SELECT * FROM loan
ORDER by amount DESC , loan_number;
```

#### 15 - Retrieve the names of branches having atleast 1 account having average balance.

#### 16 - Retrieve the names of branches having atleast one account, with size of set of customers having one account one account at that branch
#### 17 - Print average balance of all accounts.
```sql
SELECT avg(balance) FROM account;
```

#### 18 - Find the names of branches having atleast 1 account with average balances of accounts at each branch, if that balance is above 700
#### 19 - Find a name or names of branch / branches having largest average balance.
```sql
SELECT max(avg_balance)
FROM (
    SELECT branch_name,avg(balance) as avg_balance
    from account
    GROUP by branch_name);
```
#### 20 - Find the number of customers
```sql
SELECT count(customer_name) from customer;
```

#### 21 - Find average balance of all customers in 'Harrison', having atleast 2 accounts.
```sql
SELECT avg(balance)
FROM account
JOIN depositor
on depositor.account_number = account.account_number
JOIN customer
on customer.customer_name = depositor.customer_name
where (SELECT count(customer_name) FROM depositor) >= 2 AND customer.customer_city = 'Harrison';
```
