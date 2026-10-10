CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
      # Write your MySQL query statement below.
      SET N = (SELECT COUNT(DISTINCT salary) FROM Employee) - N;

    RETURN (
        SELECT DISTINCT salary
        FROM Employee
        ORDER BY salary ASC
        LIMIT N, 1
    );


END