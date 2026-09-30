# Write your MySQL query statement below
select user_id,max(time_stamp) as last_stamp from( select user_id, time_stamp from Logins where time_stamp like "2020%") as tmp group by user_id;