# Write your MySQL query statement below
select actor_id,director_id from (select actor_id,director_id,count(timestamp) as tmp from ActorDirector group by actor_id,director_id) as t where tmp>=3;