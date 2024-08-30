SELECT 
    CASE 
        WHEN (SELECT COUNT(DISTINCT salary) FROM employee) > 1 
        THEN (
            SELECT DISTINCT salary 
            FROM employee 
            ORDER BY salary DESC 
            LIMIT 1 OFFSET 1
        )
        ELSE NULL
    END AS SecondHighestSalary;
