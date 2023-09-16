SELECT distinct a.*
FROM stadium a, stadium b, stadium c
WHERE a.people >= 100 AND b.people >= 100 AND c.people >= 100
and (
    (a.id - b.id = 1 AND a.id - c.id = 2 AND b.id - c.id = 1) OR
    (b.id - a.id = 1 AND b.id - c.id = 2 AND a.id - c.id = 1) OR
    (c.id - b.id = 1 AND b.id - a.id = 1 AND c.id - a.id = 2)
)
ORDER BY a.visit_date ASC;
