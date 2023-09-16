SELECT l1.id AS id
FROM weather l1, weather l2
WHERE l1.temperature > l2.temperature and datediff(l1.recordDate , l2.recordDate ) = 1