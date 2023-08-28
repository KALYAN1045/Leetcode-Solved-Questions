# Write your MySQL query statement below
# SELECT e1.name 
# FROM Employee e1
SELECT e1.name 
FROM Employee e1
JOIN Employee e2
ON e1.id = e2.managerId
GROUP BY e1.id
HAVING COUNT(e2.managerId) >= 5;
