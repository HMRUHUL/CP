select u.name,
ifnull(sum(r.distance), 0) as travelled_distance
from rides r right join users u on r.user_id = u.id
group by u.id
order by travelled_distance desc, u.name asc