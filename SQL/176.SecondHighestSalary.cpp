SELECT DISTINCT Max(Salary) AS SecondHighestSalary
FROM Employee
WHERE Salary < (
    SELECT Max(Salary)
    FROM Employee
);
