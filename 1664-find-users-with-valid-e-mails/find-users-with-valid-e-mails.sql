# Write your MySQL query statement below
SELECT * from Users 
where BINARY mail LIKE '%@leetcode.com'
AND mail REGEXP '^[A-Za-z][A-Za-z0-9_.-]*@leetcode\\.com$';