# Database Excercises

#### 1 - Reterive all data from customer, branch, depositor, loan, account, borrower
```sql
SELECT * FROM branch;
SELECT * FROM customer;
SELECT * FROM depositor;
SELECT * FROM loan;
SELECT * FROM account;
SELECT * FROM borrower;
```

#### 2 - Reterive the names and cities of all borrowers
```sql
SELECT customer_name, customer_city
FROM customer
WHERE customer_name in (SELECT customer_name FROM borrower);
```


#### 3 - Reterive set of names and cities of customers who have 'Perryridge' branch *??
```sql
SELECT customer_name, customer_city
FROM customer
where customer_city = 'Horseneck';
```


#### 4 - Reterive the number of accounts with balance between 700 and 900
```sql
SELECT count(account_number)
FROM account
WHERE balance BETWEEN 700 AND 900;
```

#### 5 - Reterive the names of customer on streets with names ending in 'hill' - string pattern matching
```sql
SELECT customer_name
FROM customer
WHERE customer_street like '%hill';
```

#### 6 - Reterive the names of customer with both account and loan at 'Perryridge'  
#### 7 - Reterive the names of customer with account but not a loan at 'Perryridge'  
#### 8 - List the name and cities of all borrowers
#### 9 - Reterive teh set of names of customers where accounts at a branch 'Hayes' has
#### 10 - Reterive the set of names of branches having largest average balance
#### 11 - Reterive the whose assets are greater than the assets of some branch in brooklyn.
#### 12 - Reterive the names of customers with both account and loans at 'Perryridge' branch.
#### 13 - Reterive the names of customer at 'Perryridge' branch in alphabetical order.
#### 14 - Reterive the loan data order by decreasing amonuts and than increasing loan numbers
#### 15 - Reterive the names of branches having atleast 1 account having average balance.
#### 16 - Reterive the names of branches having atleast one account, with size of set of customers having one account one account at that branch
#### 17 - Print average balance of all accounts.
#### 18 - Find the names of branches having atleast 1 account with average balances of accounts at each branch, if that balance is above 700
#### 19 - Find a name or names of branch / branches having largest average balance.

#### 20 - Find the number of customers
```sql
SELECT count(customer_name) from customer;
```

#### 21 - Find average balance of all customers in 'Harrison', having atleast 2 accounts.
