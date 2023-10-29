# Write your MySQL query statement below
SELECT e1.name, b.bonus
FROM Employee e1
LEFT JOIN Bonus b
ON e1.empId = b.empId
WHERE b.bonus < 1000 OR b.bonus IS NULL;
