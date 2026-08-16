# Write your MySQL query statement below
select
(select distinct salary from
(select salary, dense_rank() over(order by salary desc) as ranks from Employee) 
as rank_sal where ranks=2) as SecondHighestSalary;