DELETE p1
FROM person p1
WHERE p1.id NOT IN (
    SELECT MIN(id)
    FROM person p2
    WHERE p1.email = p2.email
);
