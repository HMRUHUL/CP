SELECT d.name AS Department, e.name AS Employee, e.salary AS Salary
FROM employee e
JOIN department d ON e.departmentId = d.id
WHERE (
    SELECT count(distinct salary)
    FROM employee where departmentId = d.id and salary>=e.salary
) <=3
#order by e.salary desc, d.name asc