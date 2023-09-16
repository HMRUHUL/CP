select name as customers from customers as c
where c.id not in (
    select customerid from orders
)