# Write your MySQL query statement below
SELECT max(num) as num FROM
(select num from MyNumbers group by num having count(*) = 1)
as num;
