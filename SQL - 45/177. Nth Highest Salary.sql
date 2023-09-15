CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE result INT;
    SET result = NULL;

    SET N = N - 1; -- Adjust N to match the LIMIT clause

    IF N >= 0 THEN
        SET result = (
            SELECT salary
            FROM (
                SELECT DISTINCT salary
                FROM Employee
                ORDER BY salary DESC
                LIMIT N, 1
            ) AS temp
        );
    END IF;

    RETURN result;
END