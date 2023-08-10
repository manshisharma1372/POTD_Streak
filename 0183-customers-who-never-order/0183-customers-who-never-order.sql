# Write your MySQL query statement below

SELECT name as 'Customers'
FROM Customers c
LEFT JOIN Orders o ON c.ID=o.customerId
WHERE o.customerId IS NULL