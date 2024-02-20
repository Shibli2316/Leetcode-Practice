# Write your MySQL query statement below
select Users.name as NAME, 
    sum(Transactions.amount) as BALANCE 
    from Users 
    join Transactions on Users.account = Transactions.account 
    group by Transactions.account 
    having BALANCE > 10000