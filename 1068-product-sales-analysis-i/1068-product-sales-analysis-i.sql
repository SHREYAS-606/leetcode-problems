# Write your MySQL query statement below
select p.product_name,e.year,e.price from Sales e,Product p where e.product_id=p.product_id;