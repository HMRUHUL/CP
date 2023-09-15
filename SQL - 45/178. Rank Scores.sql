select score, 
(select count(distinct score) from scores as s2 
where s2.score>=s1.score) as 'rank'

from scores as s1 order by score desc;