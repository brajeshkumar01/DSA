# Write your MySQL query statement below

SELECT MAX(salary)  as SecondHighestSalary from Employee
WHERE salary < (select MAX(salary) FROM Employee);